#pragma once

namespace __zz_cib_ { namespace Example { namespace A {
  //#= FullClassName: ::Example::A
  enum { __zz_cib_classid = 1 };
}}}

namespace __zz_cib_ { namespace Example { namespace B {
  //#= FullClassName: ::Example::B
  enum { __zz_cib_classid = 2 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 3 };
}}

namespace __zz_cib_ { namespace Example { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A();
    __zz_cib_new_0 = 0,
    //#= A(::Example::A const &);
    __zz_cib_copy_1 = 1,
    //#= ~A();
    __zz_cib_delete_2 = 2,
    //#= void SomeFunc();
    SomeFunc_3 = 3,
    //#= void VirtFunc();
    VirtFunc_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}}

namespace __zz_cib_ { namespace Example { namespace B { namespace __zz_cib_methodid {
  enum {
    //#= B();
    __zz_cib_new_0 = 0,
    //#= B(::Example::B const &);
    __zz_cib_copy_1 = 1,
    //#= ~B();
    __zz_cib_delete_2 = 2,
    //#= void VirtFunc();
    VirtFunc_3 = 3,
    //#= __zz_cib_cast_to___Example__A
    __zz_cib_cast_to___Example__A_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}}

