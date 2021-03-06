#include "int.h"


Example::Int::Int(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Example::Int::Int(Int&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Example::Int::Int(::Example::Int const & __zz_cib_param0)
  : Example::Int(__zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::Int::~Int() {
  auto h = __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_delete_1(h);
}

Example::Int::Int(int x)
  : Example::Int(__zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_new_2(x))
{}

Example::Int::operator int() const {
  return __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_Operator_3(__zz_cib_h_);
}
