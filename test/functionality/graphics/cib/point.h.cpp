#include "point.h"

#include "__zz_cib_Graphics-decl.h"
#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Point {
	static ::Point* __zz_cib_decl __zz_cib_copy_0(const ::Point& __zz_cib_param0) {
		return new ::Point(__zz_cib_param0);
	}
	static void __zz_cib_decl __zz_cib_delete_1(::Point* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	static ::Point* __zz_cib_decl __zz_cib_new_2(float x, float y) {
		return new ::Point(x, y);
	}
	static float __zz_cib_decl X_3(const ::Point* __zz_cib_obj) {
		return __zz_cib_obj->::Point::X();
	}
	static void __zz_cib_decl X_4(::Point* __zz_cib_obj, float x) {
		__zz_cib_obj->::Point::X(x);
	}
	static float __zz_cib_decl Y_5(const ::Point* __zz_cib_obj) {
		return __zz_cib_obj->::Point::Y();
	}
	static void __zz_cib_decl Y_6(::Point* __zz_cib_obj, float y) {
		__zz_cib_obj->::Point::Y(y);
	}
	static const ::Point* __zz_cib_decl __zz_cib_OperatorPlus_7(const ::Point* __zz_cib_obj, const ::Point& p) {
		return new ::Point(__zz_cib_obj->::Point::operator +(p));
	}
	static const ::Point* __zz_cib_decl __zz_cib_OperatorMinus_8(const ::Point* __zz_cib_obj, const ::Point* p) {
		return new ::Point(__zz_cib_obj->::Point::operator -(*p));
	}
}}

namespace __zz_cib_ { namespace Point {
	const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
		static const __zz_cib_MTableEntry methodArray[] = {
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
			reinterpret_cast<__zz_cib_MTableEntry> (&X_3),
			reinterpret_cast<__zz_cib_MTableEntry> (&X_4),
			reinterpret_cast<__zz_cib_MTableEntry> (&Y_5),
			reinterpret_cast<__zz_cib_MTableEntry> (&Y_6),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_OperatorPlus_7),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_OperatorMinus_8)
		};
		static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
		return &methodTable;
	}
}}
