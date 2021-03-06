set(${example}DiffFilesForReadMe ${example_ROOT}/header-diff.diff  ${example_ROOT}/value-diff.diff)

add_custom_command(
    OUTPUT ${${example}DiffFilesForReadMe}
    COMMAND mkdir -p ${example_ROOT}/readme-assets/
    COMMAND diff -Bw -u1000 --label pub/example.h --label exp/example.h pub/example.h exp/example.h >${example_ROOT}/readme-assets/header-diff.diff || echo "Ignore failure" >/dev/null
    COMMAND diff -Bw -u1000 --label pub/value.h --label exp/value.h pub/value.h exp/value.h >${example_ROOT}/readme-assets/value-diff.diff || echo "Ignore failure" >/dev/null
    DEPENDS ${example_ROOT}/pub/example.h ${example_ROOT}/exp/example.h ${example_ROOT}/pub/value.h ${example_ROOT}/exp/value.h
    WORKING_DIRECTORY ${example_ROOT}
)

include("${example_ROOT}/../example-common-doc-cmd.cmake")

