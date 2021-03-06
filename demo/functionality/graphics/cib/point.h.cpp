#include "point.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-delegate-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Point {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Point;
static ::Point* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Point* __zz_cib_decl __zz_cib_new_2(double x, double y) {
  return new __zz_cib_Delegatee(x, y);
}
static double __zz_cib_decl X_3(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Point::X();
}
static void __zz_cib_decl X_4(__zz_cib_Delegatee* __zz_cib_obj, double x) {
  __zz_cib_obj->::Point::X(x);
}
static double __zz_cib_decl Y_5(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Point::Y();
}
static void __zz_cib_decl Y_6(__zz_cib_Delegatee* __zz_cib_obj, double y) {
  __zz_cib_obj->::Point::Y(y);
}
static ::Point* __zz_cib_decl __zz_cib_OperatorPlus_7(const __zz_cib_Delegatee* __zz_cib_obj, ::Point const * p) {
  return new ::Point(__zz_cib_obj->::Point::operator +(*p));
}
static ::Point* __zz_cib_decl __zz_cib_OperatorMinus_8(const __zz_cib_Delegatee* __zz_cib_obj, ::Point* p) {
  return new ::Point(__zz_cib_obj->::Point::operator -(*p));
}
}
}}

namespace __zz_cib_ { namespace Point {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::X_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::X_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Y_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Y_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorPlus_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorMinus_8)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}
