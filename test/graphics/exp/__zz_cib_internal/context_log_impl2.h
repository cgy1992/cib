#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace ContextLogger { class __zz_cib_Helper {
			friend class ::Graphics::ContextLogger;
			static __zz_cib_::MethodTable __zz_cib_get_proxy_method_table();

			static __zz_cib_::HANDLE* __zz_cib_new_1(::Graphics::ContextLogger* __zz_cib_proxy) {
				using __zz_cib_newProc = __zz_cib_::HANDLE* (__stdcall *) (::Graphics::ContextLogger*, __zz_cib_::MethodTable);
				auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_methodid::__zz_cib_new_1];
				return proc(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
			}
			static void __zz_cib_delete_2(__zz_cib_::HANDLE* __zz_cib_obj) {
				using __zz_cib_deleteProc = void (__stdcall *) (__zz_cib_::HANDLE*);
				auto proc = (__zz_cib_deleteProc) instance().mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_methodid::__zz_cib_delete_2];
				return proc(__zz_cib_obj);
			}
			static void Move_3(__zz_cib_::HANDLE* __zz_cib_obj, float x, float y) {
				using MoveProc = void (__stdcall *) (__zz_cib_::HANDLE*, float x, float y);
				auto proc = (MoveProc) instance().mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_methodid::Move_3];
				return proc(__zz_cib_obj, x, y);
			}
			static void Line_4(__zz_cib_::HANDLE* __zz_cib_obj, float x, float y) {
				using LineProc = void (__stdcall *) (__zz_cib_::HANDLE*, float x, float y);
				auto proc = (LineProc) instance().mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_methodid::Line_4];
				return proc(__zz_cib_obj, x, y);
			}
			static void Curve_5(__zz_cib_::HANDLE* __zz_cib_obj, float x1, float y1, float x2, float y2, float x3, float y3) {
				using CurveProc = void (__stdcall *) (__zz_cib_::HANDLE*, float x1, float y1, float x2, float y2, float x3, float y3);
				auto proc = (CurveProc) instance().mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_methodid::Curve_5];
				return proc(__zz_cib_obj, x1, y1, x2, y2, x3, y3);
			}
			static void Close_6(__zz_cib_::HANDLE* __zz_cib_obj) {
				using CloseProc = void (__stdcall *) (__zz_cib_::HANDLE*);
				auto proc = (CloseProc) instance().mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_methodid::Close_6];
				return proc(__zz_cib_obj);
			}
			static __zz_cib_::HANDLE* __zz_cib_cast_to___Graphics__Context_7(__zz_cib_::HANDLE* __zz_cib_obj) {
				using __zz_cib_cast_to___Graphics__ContextProc = __zz_cib_::HANDLE* (__stdcall *) (__zz_cib_::HANDLE* h);
				auto proc = (__zz_cib_cast_to___Graphics__ContextProc) instance().mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Context_7];
				return proc(__zz_cib_obj);
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				std::uint32_t mnum = 0;
				GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__ContextLogger, &mtbl, &mnum);
				assert(mnum >= __zz_cib_::Graphics::ContextLogger::__zz_cib_methodid::__zz_cib_next_method_id);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper helper;
				return helper;
			}

		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::ContextLogger* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static ::Graphics::ContextLogger* __zz_cib_from_handle(__zz_cib_::HANDLE* h) {
				return new ::Graphics::ContextLogger(h);
			}
			static void __zz_cib_release_handle(::Graphics::ContextLogger* __zz_cib_obj) {
				__zz_cib_obj->__zz_cib_h_ = nullptr;
			}
		};
	}}
}

inline Graphics::ContextLogger::ContextLogger(__zz_cib_::HANDLE* h)
	: ::Graphics::Context::Context(__zz_cib_::Graphics::ContextLogger::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Context_7(h))
	, __zz_cib_h_(h)
{}

inline Graphics::ContextLogger::ContextLogger()
	: ContextLogger(__zz_cib_::Graphics::ContextLogger::__zz_cib_Helper::__zz_cib_new_1(this))
{}

inline Graphics::ContextLogger::~ContextLogger() {
	__zz_cib_::Graphics::ContextLogger::__zz_cib_Helper::__zz_cib_delete_2(__zz_cib_h_);
	__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_handle(this);
}

inline void Graphics::ContextLogger::Move(float x, float y) {
	__zz_cib_::Graphics::ContextLogger::__zz_cib_Helper::Move_3(__zz_cib_h_, x, y);
}

inline void Graphics::ContextLogger::Line(float x, float y) {
	__zz_cib_::Graphics::ContextLogger::__zz_cib_Helper::Line_4(__zz_cib_h_, x, y);
}

inline void Graphics::ContextLogger::Curve(float x1, float y1, float x2, float y2, float x3, float y3) {
	__zz_cib_::Graphics::ContextLogger::__zz_cib_Helper::Curve_5(__zz_cib_h_, x1, y1, x2, y2, x3, y3);
}

inline void Graphics::ContextLogger::Close() {
	__zz_cib_::Graphics::ContextLogger::__zz_cib_Helper::Close_6(__zz_cib_h_);
}
