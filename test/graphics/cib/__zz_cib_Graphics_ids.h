// DO NOT EDIT THIS FILE

#pragma once

namespace __zz_cib_ { namespace GraphicsLib {
	namespace __zz_cib_classid {
		enum {
			//#= ::Graphics::Circle
			__Graphics__Circle = 1,
			//#= ::Graphics::Circle::__zz_cib_UnknownProxy
			__Graphics__Circle____zz_cib_UnknownProxy = 2,
			//#= ::Graphics::Composite
			__Graphics__Composite = 3,
			//#= ::Graphics::Composite::__zz_cib_UnknownProxy
			__Graphics__Composite____zz_cib_UnknownProxy = 4,
			//#= ::Graphics::Context
			__Graphics__Context = 5,
			//#= ::Graphics::Context::__zz_cib_UnknownProxy
			__Graphics__Context____zz_cib_UnknownProxy = 6,
			//#= ::Graphics::ContextLogger
			__Graphics__ContextLogger = 7,
			//#= ::Graphics::ContextLogger::__zz_cib_UnknownProxy
			__Graphics__ContextLogger____zz_cib_UnknownProxy = 8,
			//#= ::Graphics::Rectangle
			__Graphics__Rectangle = 9,
			//#= ::Graphics::Rectangle::__zz_cib_UnknownProxy
			__Graphics__Rectangle____zz_cib_UnknownProxy = 10,
			//#= ::Graphics::Shape
			__Graphics__Shape = 11,
			//#= ::Graphics::Shape::__zz_cib_UnknownProxy
			__Graphics__Shape____zz_cib_UnknownProxy = 12,
			__zz_cib_next_class_id = 13
		};
	}
}}

namespace __zz_cib_ {
	namespace Graphics { namespace Circle {
		namespace __zz_cib_methodid {
			enum {
				//#= Circle(float, float, float);
				__zz_cib_new_1 = 1,
				//#= virtual float Area() const;
				Area_2 = 2,
				//#= virtual float Perimeter() const;
				Perimeter_3 = 3,
				//#= virtual void Draw(Context*) const;
				Draw_4 = 4,
				//#= __zz_cib_cast_to___Graphics__Shape
				__zz_cib_cast_to___Graphics__Shape_5 = 5,
				__zz_cib_next_method_id = 6
			};
		}
	}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Circle { namespace __zz_cib_UnknownProxy {
		namespace __zz_cib_methodid {
			enum {
				//#= virtual float Area() const;
				Area_1 = 1,
				//#= virtual float Perimeter() const;
				Perimeter_2 = 2,
				//#= virtual void Draw(Context*) const;
				Draw_3 = 3,
				__zz_cib_next_method_id = 4
			};
		}
	}}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Composite {
		namespace __zz_cib_methodid {
			enum {
				//#= Composite();
				__zz_cib_new_1 = 1,
				//#= void Add(Shape*);
				Add_2 = 2,
				//#= size_t NumShapes() const;
				NumShapes_3 = 3,
				//#= Shape* ShapeAt(size_t) const;
				ShapeAt_4 = 4,
				//#= virtual float Area() const;
				Area_5 = 5,
				//#= virtual float Perimeter() const;
				Perimeter_6 = 6,
				//#= virtual void Draw(Context*) const;
				Draw_7 = 7,
				//#= static Composite* CreateCompositeOfRectAndCircle();
				CreateCompositeOfRectAndCircle_8 = 8,
				//#= __zz_cib_cast_to___Graphics__Shape
				__zz_cib_cast_to___Graphics__Shape_9 = 9,
				__zz_cib_next_method_id = 10
			};
		}
	}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Composite { namespace __zz_cib_UnknownProxy {
		namespace __zz_cib_methodid {
			enum {
				//#= virtual float Area() const;
				Area_1 = 1,
				//#= virtual float Perimeter() const;
				Perimeter_2 = 2,
				//#= virtual void Draw(Context*) const;
				Draw_3 = 3,
				__zz_cib_next_method_id = 4
			};
		}
	}}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Context {
		namespace __zz_cib_methodid {
			enum {
				//#= ~Context()
				__zz_cib_delete_1 = 1,
				//#= Context();
				__zz_cib_new_2 = 2,
				//#= __zz_cib_get_class_id
				__zz_cib_get_class_id_3 = 3,
				__zz_cib_next_method_id = 4
			};
		}
	}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Context { namespace __zz_cib_UnknownProxy {
		namespace __zz_cib_methodid {
			enum {
				//#= virtual void Move(float, float) = 0;
				Move_1 = 1,
				//#= virtual void Line(float, float) = 0;
				Line_2 = 2,
				//#= virtual void Curve(float, float, float, float, float, float) = 0;
				Curve_3 = 3,
				//#= virtual void Close() = 0;
				Close_4 = 4,
				//#= ~Context()
				__zz_cib_delete_5 = 5,
				__zz_cib_next_method_id = 6
			};
		}
	}}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace ContextLogger {
		namespace __zz_cib_methodid {
			enum {
				//#= ContextLogger();
				__zz_cib_new_1 = 1,
				//#= ~ContextLogger()
				__zz_cib_delete_2 = 2,
				//#= virtual void Move(float, float);
				Move_3 = 3,
				//#= virtual void Line(float, float);
				Line_4 = 4,
				//#= virtual void Curve(float, float, float, float, float, float);
				Curve_5 = 5,
				//#= virtual void Close();
				Close_6 = 6,
				//#= __zz_cib_cast_to___Graphics__Context
				__zz_cib_cast_to___Graphics__Context_7 = 7,
				__zz_cib_next_method_id = 8
			};
		}
	}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace ContextLogger { namespace __zz_cib_UnknownProxy {
		namespace __zz_cib_methodid {
			enum {
				//#= virtual void Move(float, float);
				Move_1 = 1,
				//#= virtual void Line(float, float);
				Line_2 = 2,
				//#= virtual void Curve(float, float, float, float, float, float);
				Curve_3 = 3,
				//#= virtual void Close();
				Close_4 = 4,
				__zz_cib_next_method_id = 5
			};
		}
	}}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Rectangle {
		namespace __zz_cib_methodid {
			enum {
				//#= Rectangle(float, float, float, float);
				__zz_cib_new_1 = 1,
				//#= virtual float Area() const;
				Area_2 = 2,
				//#= virtual float Perimeter() const;
				Perimeter_3 = 3,
				//#= virtual void Draw(Context*) const;
				Draw_4 = 4,
				//#= __zz_cib_cast_to___Graphics__Shape
				__zz_cib_cast_to___Graphics__Shape_5 = 5,
				__zz_cib_next_method_id = 6
			};
		}
	}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Rectangle { namespace __zz_cib_UnknownProxy {
		namespace __zz_cib_methodid {
			enum {
				//#= virtual float Area() const;
				Area_1 = 1,
				//#= virtual float Perimeter() const;
				Perimeter_2 = 2,
				//#= virtual void Draw(Context*) const;
				Draw_3 = 3,
				__zz_cib_next_method_id = 4
			};
		}
	}}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Shape {
		namespace __zz_cib_methodid {
			enum {
				//#= ~Shape()
				__zz_cib_delete_1 = 1,
				//#= Shape();
				__zz_cib_new_2 = 2,
				//#= __zz_cib_get_class_id
				__zz_cib_get_class_id_3 = 3,
				__zz_cib_next_method_id = 4
			};
		}
	}}
}
namespace __zz_cib_ {
	namespace Graphics { namespace Shape { namespace __zz_cib_UnknownProxy {
		namespace __zz_cib_methodid {
			enum {
				//#= virtual float Area() const = 0;
				Area_1 = 1,
				//#= virtual float Perimeter() const = 0;
				Perimeter_2 = 2,
				//#= virtual void Draw(Context*) const = 0;
				Draw_3 = 3,
				//#= ~Shape()
				__zz_cib_delete_4 = 4,
				__zz_cib_next_method_id = 5
			};
		}
	}}}
}
