// DO NOT EDIT THIS FILE

#pragma once

namespace __zz_cib_ { namespace Example { namespace A {
  //#= FullClassName: ::Example::A
  enum { __zz_cib_classid = 2 };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
  //#= FullClassName: ::Example::Number<int>
  enum { __zz_cib_classid = 1 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 3 };
}}

namespace __zz_cib_ { namespace Example { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(const ::Example::A&);
    __zz_cib_copy_0 = 0,
    //#= ~A();
    __zz_cib_delete_1 = 1,
    //#= A();
    __zz_cib_new_2 = 2,
    //#= void Set(const ::Example::Number<int>&);
    Set_3 = 3,
    //#= ::Example::Number<int> Get() const;
    Get_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 { namespace __zz_cib_methodid {
  enum {
    //#= Number(const ::Example::Number<int>&);
    __zz_cib_new_0 = 0,
    //#= ~Number();
    __zz_cib_delete_1 = 1,
    //#= Number(int);
    __zz_cib_new_2 = 2,
    //#= int GetValue() const;
    GetValue_3 = 3,
    //#= void SetValue(int);
    SetValue_4 = 4,
    //#= void Add(::Example::Number<int>);
    Add_5 = 5,
    __zz_cib_next_method_id = 6
  };
}}}}

