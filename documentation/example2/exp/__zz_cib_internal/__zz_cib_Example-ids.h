// DO NOT EDIT THIS FILE

#pragma once

namespace __zz_cib_ { namespace Example { namespace A {
	 enum { __zz_cib_classid = 1 };
}}}

namespace __zz_cib_ { namespace Example { namespace B {
	 enum { __zz_cib_classid = 2 };
}}}

namespace __zz_cib_ { namespace Example {
	 enum { __zz_cib_next_class_id = 3 };
}}

namespace __zz_cib_ { namespace Example { namespace A { namespace __zz_cib_methodid {
	enum {
		//#= A();
		__zz_cib_new_1 = 1,
		//#= A(const ::Example::A&);
		__zz_cib_copy_2 = 2,
		//#= ~A();
		__zz_cib_delete_3 = 3,
		//#= void SomeFunc();
		SomeFunc_4 = 4,
		//#= void VirtFunc();
		VirtFunc_5 = 5,
		__zz_cib_next_method_id = 6
	};
}}}}

namespace __zz_cib_ { namespace Example { namespace B { namespace __zz_cib_methodid {
	enum {
		//#= B();
		__zz_cib_new_1 = 1,
		//#= B(const ::Example::B&);
		__zz_cib_copy_2 = 2,
		//#= ~B();
		__zz_cib_delete_3 = 3,
		//#= void VirtFunc();
		VirtFunc_4 = 4,
		//#= __zz_cib_cast_to___Example__A
		__zz_cib_cast_to___Example__A_5 = 5,
		__zz_cib_next_method_id = 6
	};
}}}}

