#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace Example { namespace A {
struct __zz_cib_Delegator : public ::Example::A {
  using __zz_cib_ParentClass = ::Example::A;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  template <typename _T>  __zz_cib_ParentClass& operator=(const _T& rhs) {
    return const_cast<__zz_cib_ParentClass&>(this->__zz_cib_ParentClass::operator=(rhs));
  }
  using __zz_cib_Delegatee = __zz_cib_Delegator;
  static ::Example::A* __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegator();
  }
  static ::Example::A* __zz_cib_decl __zz_cib_copy_1(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static void __zz_cib_decl VirtFunc_4(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::VirtFunc();
  }
  static void __zz_cib_decl SomeFunc_3(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::SomeFunc();
  }
};
}}}

namespace __zz_cib_ { namespace Example { namespace B {
struct __zz_cib_Delegator : public ::Example::B {
  using __zz_cib_ParentClass = ::Example::B;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  template <typename _T>  __zz_cib_ParentClass& operator=(const _T& rhs) {
    return const_cast<__zz_cib_ParentClass&>(this->__zz_cib_ParentClass::operator=(rhs));
  }
  using __zz_cib_Delegatee = __zz_cib_Delegator;
  static ::Example::B* __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegator();
  }
  static ::Example::B* __zz_cib_decl __zz_cib_copy_1(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static void __zz_cib_decl VirtFunc_3(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::VirtFunc();
  }
  static ::Example::A* __zz_cib_decl __zz_cib_cast_to___Example__A_4(::Example::B* __zz_cib_obj) {
    return __zz_cib_obj;
  }
};
}}}

namespace __zz_cib_ { namespace Example { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SomeFunc_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
namespace __zz_cib_ { namespace Example { namespace B {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___Example__A_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
