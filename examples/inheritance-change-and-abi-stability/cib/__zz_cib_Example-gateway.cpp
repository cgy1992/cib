#include "__zz_cib_Example-decl.h"
#include "__zz_cib_Example-export.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable.h"

namespace __zz_cib_ { namespace A { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace B { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace I1 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}
namespace __zz_cib_ { namespace I2 { const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); }}

extern "C" __zz_cib_export
const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_Example_GetMethodTable(std::uint32_t classId)
{
  switch(classId) {
  case __zz_cib_::A::__zz_cib_classid:
    return __zz_cib_::A::__zz_cib_GetMethodTable();
  case __zz_cib_::B::__zz_cib_classid:
    return __zz_cib_::B::__zz_cib_GetMethodTable();
  case __zz_cib_::I1::__zz_cib_classid:
    return __zz_cib_::I1::__zz_cib_GetMethodTable();
  case __zz_cib_::I2::__zz_cib_classid:
    return __zz_cib_::I2::__zz_cib_GetMethodTable();
  default:
    return nullptr;
  }
}
