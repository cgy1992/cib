#include "__zz_cib_Example-def.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-decl.h"

namespace __zz_cib_ { namespace Example { namespace A {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
		, public __zz_cib_::__zz_cib_HandleHelper<::Example::A, __zz_cib_Helper> {
	private:
		friend class ::Example::A;
		friend class __zz_cib_::__zz_cib_HandleHelper<::Example::A, __zz_cib_Helper>;

		static __zz_cib_HANDLE* __zz_cib_new_1() {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) ();
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_methodid::__zz_cib_new_1);
			return method();
		}
		static __zz_cib_HANDLE* __zz_cib_new_2(const __zz_cib_HANDLE& __zz_cib_param0) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_HANDLE& __zz_cib_param0);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_methodid::__zz_cib_new_2);
			return method(__zz_cib_param0);
		}
		static void __zz_cib_delete_3(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_deleteProc>(__zz_cib_methodid::__zz_cib_delete_3);
				return method(__zz_cib_obj);
			}
		}
		static void VirtFunc_5(__zz_cib_HANDLE* __zz_cib_obj) {
			using VirtFuncProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<VirtFuncProc>(__zz_cib_methodid::VirtFunc_5);
			return method(__zz_cib_obj);
		}
		static void SomeFunc_4(__zz_cib_HANDLE* __zz_cib_obj) {
			using SomeFuncProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<SomeFuncProc>(__zz_cib_methodid::SomeFunc_4);
			return method(__zz_cib_obj);
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_MethodTableHelper(
				__zz_cib_Example_GetMethodTable(__zz_cib_classid))
		{}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

		static ::Example::A* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
			return new ::Example::A(h);
		}
	public:
		static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::A* __zz_cib_obj) {
			auto h = __zz_cib_obj->__zz_cib_h_;
			__zz_cib_obj->__zz_cib_h_ = nullptr;
			return h;
		}
	};
}}}

namespace __zz_cib_ { namespace Example { namespace B {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
		, public __zz_cib_::__zz_cib_HandleHelper<::Example::B, __zz_cib_Helper> {
	private:
		friend class ::Example::B;
		friend class __zz_cib_::__zz_cib_HandleHelper<::Example::B, __zz_cib_Helper>;

		static __zz_cib_HANDLE* __zz_cib_new_1() {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) ();
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_methodid::__zz_cib_new_1);
			return method();
		}
		static __zz_cib_HANDLE* __zz_cib_new_2(const __zz_cib_HANDLE& __zz_cib_param0) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_HANDLE& __zz_cib_param0);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_methodid::__zz_cib_new_2);
			return method(__zz_cib_param0);
		}
		static void __zz_cib_delete_3(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_deleteProc>(__zz_cib_methodid::__zz_cib_delete_3);
				return method(__zz_cib_obj);
			}
		}
		static void VirtFunc_4(__zz_cib_HANDLE* __zz_cib_obj) {
			using VirtFuncProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<VirtFuncProc>(__zz_cib_methodid::VirtFunc_4);
			return method(__zz_cib_obj);
		}
		static __zz_cib_HANDLE* __zz_cib_cast_to___Example__A_5(__zz_cib_HANDLE* __zz_cib_obj) {
			using __zz_cib_cast_to___Example__AProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
			auto method = instance().getMethod<__zz_cib_cast_to___Example__AProc>(__zz_cib_methodid::__zz_cib_cast_to___Example__A_5);
			return method(__zz_cib_obj);
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_MethodTableHelper(
				__zz_cib_Example_GetMethodTable(__zz_cib_classid))
		{}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

		static ::Example::B* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
			return new ::Example::B(h);
		}
	public:
		static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::B* __zz_cib_obj) {
			auto h = __zz_cib_obj->__zz_cib_h_;
			__zz_cib_obj->__zz_cib_h_ = nullptr;
			__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
			return h;
		}
	};
}}}

inline Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Example::A::A(A&& rhs)
	: __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Example::A::A()
	: A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_1())
{}

inline Example::A::A(const ::Example::A& __zz_cib_param0)
	: A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_2(*__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::A::~A() {
	auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_3(h);
}

inline void Example::A::VirtFunc() {
	__zz_cib_::Example::A::__zz_cib_Helper::VirtFunc_5(__zz_cib_h_);
}

inline void Example::A::SomeFunc() {
	__zz_cib_::Example::A::__zz_cib_Helper::SomeFunc_4(__zz_cib_h_);
}

inline Example::B::B(__zz_cib_::__zz_cib_HANDLE* h)
	: ::Example::A::A(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_cast_to___Example__A_5(h))
	, __zz_cib_h_(h)
{}

inline Example::B::B(B&& rhs)
	: ::Example::A::A(std::move(rhs))
	, __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Example::B::B()
	: B(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_new_1())
{}

inline Example::B::B(const ::Example::B& __zz_cib_param0)
	: B(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_new_2(*__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::B::~B() {
	auto h = __zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_delete_3(h);
}

inline void Example::B::VirtFunc() {
	__zz_cib_::Example::B::__zz_cib_Helper::VirtFunc_4(__zz_cib_h_);
}