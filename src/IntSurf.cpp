
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <IntSurf_Transition.hxx>
#include <gp_Dir.hxx>
#include <gp_Vec.hxx>

// module includes
#include <IntSurf.hxx>
#include <IntSurf_Allocator.hxx>
#include <IntSurf_Couple.hxx>
#include <IntSurf_InteriorPoint.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntSurf_ListIteratorOfListOfPntOn2S.hxx>
#include <IntSurf_ListOfPntOn2S.hxx>
#include <IntSurf_PathPoint.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <IntSurf_SequenceOfCouple.hxx>
#include <IntSurf_SequenceOfInteriorPoint.hxx>
#include <IntSurf_SequenceOfPathPoint.hxx>
#include <IntSurf_SequenceOfPntOn2S.hxx>
#include <IntSurf_Situation.hxx>
#include <IntSurf_Transition.hxx>
#include <IntSurf_TypeTrans.hxx>

// template related includes
// ./opencascade/IntSurf_SequenceOfInteriorPoint.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_SequenceOfPntOn2S.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_SequenceOfPathPoint.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_ListOfPntOn2S.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_ListOfPntOn2S.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_SequenceOfCouple.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntSurf(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntSurf"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntSurf_Quadric ,std::unique_ptr<IntSurf_Quadric>  >>(m.attr("IntSurf_Quadric"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pln & >()  , py::arg("P") )
        .def(py::init< const gp_Cylinder & >()  , py::arg("C") )
        .def(py::init< const gp_Sphere & >()  , py::arg("S") )
        .def(py::init< const gp_Cone & >()  , py::arg("C") )
        .def(py::init< const gp_Torus & >()  , py::arg("T") )
        .def("SetValue",
             (void (IntSurf_Quadric::*)( const gp_Pln &  ) ) static_cast<void (IntSurf_Quadric::*)( const gp_Pln &  ) >(&IntSurf_Quadric::SetValue),
             R"#(None)#"  , py::arg("P"))
        .def("SetValue",
             (void (IntSurf_Quadric::*)( const gp_Cylinder &  ) ) static_cast<void (IntSurf_Quadric::*)( const gp_Cylinder &  ) >(&IntSurf_Quadric::SetValue),
             R"#(None)#"  , py::arg("C"))
        .def("SetValue",
             (void (IntSurf_Quadric::*)( const gp_Sphere &  ) ) static_cast<void (IntSurf_Quadric::*)( const gp_Sphere &  ) >(&IntSurf_Quadric::SetValue),
             R"#(None)#"  , py::arg("S"))
        .def("SetValue",
             (void (IntSurf_Quadric::*)( const gp_Cone &  ) ) static_cast<void (IntSurf_Quadric::*)( const gp_Cone &  ) >(&IntSurf_Quadric::SetValue),
             R"#(None)#"  , py::arg("C"))
        .def("SetValue",
             (void (IntSurf_Quadric::*)( const gp_Torus &  ) ) static_cast<void (IntSurf_Quadric::*)( const gp_Torus &  ) >(&IntSurf_Quadric::SetValue),
             R"#(None)#"  , py::arg("T"))
        .def("Distance",
             (Standard_Real (IntSurf_Quadric::*)( const gp_Pnt &  ) const) static_cast<Standard_Real (IntSurf_Quadric::*)( const gp_Pnt &  ) const>(&IntSurf_Quadric::Distance),
             R"#(None)#"  , py::arg("P"))
        .def("Gradient",
             (gp_Vec (IntSurf_Quadric::*)( const gp_Pnt &  ) const) static_cast<gp_Vec (IntSurf_Quadric::*)( const gp_Pnt &  ) const>(&IntSurf_Quadric::Gradient),
             R"#(None)#"  , py::arg("P"))
        .def("ValAndGrad",
             (void (IntSurf_Quadric::*)( const gp_Pnt & ,  Standard_Real & ,  gp_Vec &  ) const) static_cast<void (IntSurf_Quadric::*)( const gp_Pnt & ,  Standard_Real & ,  gp_Vec &  ) const>(&IntSurf_Quadric::ValAndGrad),
             R"#(None)#"  , py::arg("P"),  py::arg("Dist"),  py::arg("Grad"))
        .def("TypeQuadric",
             (GeomAbs_SurfaceType (IntSurf_Quadric::*)() const) static_cast<GeomAbs_SurfaceType (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::TypeQuadric),
             R"#(None)#" )
        .def("Plane",
             (gp_Pln (IntSurf_Quadric::*)() const) static_cast<gp_Pln (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Plane),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (IntSurf_Quadric::*)() const) static_cast<gp_Sphere (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Sphere),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (IntSurf_Quadric::*)() const) static_cast<gp_Cylinder (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (IntSurf_Quadric::*)() const) static_cast<gp_Cone (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Cone),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (IntSurf_Quadric::*)() const) static_cast<gp_Torus (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Torus),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (IntSurf_Quadric::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Pnt (IntSurf_Quadric::*)( const Standard_Real ,  const Standard_Real  ) const>(&IntSurf_Quadric::Value),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("D1",
             (void (IntSurf_Quadric::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (IntSurf_Quadric::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&IntSurf_Quadric::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("DN",
             (gp_Vec (IntSurf_Quadric::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (IntSurf_Quadric::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IntSurf_Quadric::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Normale",
             (gp_Vec (IntSurf_Quadric::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Vec (IntSurf_Quadric::*)( const Standard_Real ,  const Standard_Real  ) const>(&IntSurf_Quadric::Normale),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("Parameters",
             (void (IntSurf_Quadric::*)( const gp_Pnt & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_Quadric::*)( const gp_Pnt & ,  Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_Quadric::Parameters),
             R"#(None)#"  , py::arg("P"),  py::arg("U"),  py::arg("V"))
        .def("Normale",
             (gp_Vec (IntSurf_Quadric::*)( const gp_Pnt &  ) const) static_cast<gp_Vec (IntSurf_Quadric::*)( const gp_Pnt &  ) const>(&IntSurf_Quadric::Normale),
             R"#(None)#"  , py::arg("P"))
        .def("TypeQuadric",
             (GeomAbs_SurfaceType (IntSurf_Quadric::*)() const) static_cast<GeomAbs_SurfaceType (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::TypeQuadric),
             R"#(None)#" )
        .def("Plane",
             (gp_Pln (IntSurf_Quadric::*)() const) static_cast<gp_Pln (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Plane),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (IntSurf_Quadric::*)() const) static_cast<gp_Sphere (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Sphere),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (IntSurf_Quadric::*)() const) static_cast<gp_Cylinder (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (IntSurf_Quadric::*)() const) static_cast<gp_Cone (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Cone),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (IntSurf_Quadric::*)() const) static_cast<gp_Torus (IntSurf_Quadric::*)() const>(&IntSurf_Quadric::Torus),
             R"#(None)#" )
;


    static_cast<py::class_<IntSurf_LineOn2S ,opencascade::handle<IntSurf_LineOn2S>  , Standard_Transient >>(m.attr("IntSurf_LineOn2S"))
        .def(py::init<  const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator")=static_cast< const opencascade::handle<NCollection_BaseAllocator> &>(0) )
        .def("Add",
             (void (IntSurf_LineOn2S::*)( const IntSurf_PntOn2S &  ) ) static_cast<void (IntSurf_LineOn2S::*)( const IntSurf_PntOn2S &  ) >(&IntSurf_LineOn2S::Add),
             R"#(Adds a point in the line.)#"  , py::arg("P"))
        .def("NbPoints",
             (Standard_Integer (IntSurf_LineOn2S::*)() const) static_cast<Standard_Integer (IntSurf_LineOn2S::*)() const>(&IntSurf_LineOn2S::NbPoints),
             R"#(Returns the number of points in the line.)#" )
        .def("Value",
             (const IntSurf_PntOn2S & (IntSurf_LineOn2S::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PntOn2S & (IntSurf_LineOn2S::*)( const Standard_Integer  ) const>(&IntSurf_LineOn2S::Value),
             R"#(Returns the point of range Index in the line.)#"  , py::arg("Index"))
        .def("Reverse",
             (void (IntSurf_LineOn2S::*)() ) static_cast<void (IntSurf_LineOn2S::*)() >(&IntSurf_LineOn2S::Reverse),
             R"#(Reverses the order of points of the line.)#" )
        .def("Split",
             (opencascade::handle<IntSurf_LineOn2S> (IntSurf_LineOn2S::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntSurf_LineOn2S::*)( const Standard_Integer  ) >(&IntSurf_LineOn2S::Split),
             R"#(Keeps in <me> the points 1 to Index-1, and returns the items Index to the end.)#"  , py::arg("Index"))
        .def("Value",
             (void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const IntSurf_PntOn2S &  ) ) static_cast<void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const IntSurf_PntOn2S &  ) >(&IntSurf_LineOn2S::Value),
             R"#(Replaces the point of range Index in the line.)#"  , py::arg("Index"),  py::arg("P"))
        .def("SetUV",
             (void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_LineOn2S::SetUV),
             R"#(Sets the parametric coordinates on one of the surfaces of the point of range Index in the line.)#"  , py::arg("Index"),  py::arg("OnFirst"),  py::arg("U"),  py::arg("V"))
        .def("Clear",
             (void (IntSurf_LineOn2S::*)() ) static_cast<void (IntSurf_LineOn2S::*)() >(&IntSurf_LineOn2S::Clear),
             R"#(None)#" )
        .def("InsertBefore",
             (void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const IntSurf_PntOn2S &  ) ) static_cast<void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const IntSurf_PntOn2S &  ) >(&IntSurf_LineOn2S::InsertBefore),
             R"#(None)#"  , py::arg("I"),  py::arg("P"))
        .def("RemovePoint",
             (void (IntSurf_LineOn2S::*)( const Standard_Integer  ) ) static_cast<void (IntSurf_LineOn2S::*)( const Standard_Integer  ) >(&IntSurf_LineOn2S::RemovePoint),
             R"#(None)#"  , py::arg("I"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntSurf_LineOn2S::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntSurf_LineOn2S::*)() const>(&IntSurf_LineOn2S::DynamicType),
             R"#(None)#" )
        .def("Add",
             (void (IntSurf_LineOn2S::*)( const IntSurf_PntOn2S &  ) ) static_cast<void (IntSurf_LineOn2S::*)( const IntSurf_PntOn2S &  ) >(&IntSurf_LineOn2S::Add),
             R"#(Adds a point in the line.)#"  , py::arg("P"))
        .def("NbPoints",
             (Standard_Integer (IntSurf_LineOn2S::*)() const) static_cast<Standard_Integer (IntSurf_LineOn2S::*)() const>(&IntSurf_LineOn2S::NbPoints),
             R"#(Returns the number of points in the line.)#" )
        .def("Reverse",
             (void (IntSurf_LineOn2S::*)() ) static_cast<void (IntSurf_LineOn2S::*)() >(&IntSurf_LineOn2S::Reverse),
             R"#(Reverses the order of points of the line.)#" )
        .def("Value",
             (const IntSurf_PntOn2S & (IntSurf_LineOn2S::*)( const Standard_Integer  ) const) static_cast<const IntSurf_PntOn2S & (IntSurf_LineOn2S::*)( const Standard_Integer  ) const>(&IntSurf_LineOn2S::Value),
             R"#(Returns the point of range Index in the line.)#"  , py::arg("Index"))
        .def("Value",
             (void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const IntSurf_PntOn2S &  ) ) static_cast<void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const IntSurf_PntOn2S &  ) >(&IntSurf_LineOn2S::Value),
             R"#(Replaces the point of range Index in the line.)#"  , py::arg("Index"),  py::arg("P"))
        .def("SetUV",
             (void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_LineOn2S::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_LineOn2S::SetUV),
             R"#(Sets the parametric coordinates on one of the surfaces of the point of range Index in the line.)#"  , py::arg("Index"),  py::arg("OnFirst"),  py::arg("U"),  py::arg("V"))
        .def("Clear",
             (void (IntSurf_LineOn2S::*)() ) static_cast<void (IntSurf_LineOn2S::*)() >(&IntSurf_LineOn2S::Clear),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntSurf_LineOn2S::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntSurf_LineOn2S::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<IntSurf_Transition ,std::unique_ptr<IntSurf_Transition>  >>(m.attr("IntSurf_Transition"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Boolean,const IntSurf_TypeTrans >()  , py::arg("Tangent"),  py::arg("Type") )
        .def(py::init< const Standard_Boolean,const IntSurf_Situation,const Standard_Boolean >()  , py::arg("Tangent"),  py::arg("Situ"),  py::arg("Oppos") )
        .def("SetValue",
             (void (IntSurf_Transition::*)( const Standard_Boolean ,  const IntSurf_TypeTrans  ) ) static_cast<void (IntSurf_Transition::*)( const Standard_Boolean ,  const IntSurf_TypeTrans  ) >(&IntSurf_Transition::SetValue),
             R"#(Set the values of an IN or OUT transition.)#"  , py::arg("Tangent"),  py::arg("Type"))
        .def("SetValue",
             (void (IntSurf_Transition::*)( const Standard_Boolean ,  const IntSurf_Situation ,  const Standard_Boolean  ) ) static_cast<void (IntSurf_Transition::*)( const Standard_Boolean ,  const IntSurf_Situation ,  const Standard_Boolean  ) >(&IntSurf_Transition::SetValue),
             R"#(Set the values of a TOUCH transition.)#"  , py::arg("Tangent"),  py::arg("Situ"),  py::arg("Oppos"))
        .def("SetValue",
             (void (IntSurf_Transition::*)() ) static_cast<void (IntSurf_Transition::*)() >(&IntSurf_Transition::SetValue),
             R"#(Set the values of an UNDECIDED transition.)#" )
        .def("TransitionType",
             (IntSurf_TypeTrans (IntSurf_Transition::*)() const) static_cast<IntSurf_TypeTrans (IntSurf_Transition::*)() const>(&IntSurf_Transition::TransitionType),
             R"#(Returns the type of Transition (in/out/touch/undecided) for the arc given by value. This the transition of the intersection line compared to the Arc of restriction, i-e when the function returns INSIDE for example, it means that the intersection line goes inside the part of plane limited by the arc of restriction.)#" )
        .def("IsTangent",
             (Standard_Boolean (IntSurf_Transition::*)() const) static_cast<Standard_Boolean (IntSurf_Transition::*)() const>(&IntSurf_Transition::IsTangent),
             R"#(Returns TRUE if the point is tangent to the arc given by Value. An exception is raised if TransitionType returns UNDECIDED.)#" )
        .def("Situation",
             (IntSurf_Situation (IntSurf_Transition::*)() const) static_cast<IntSurf_Situation (IntSurf_Transition::*)() const>(&IntSurf_Transition::Situation),
             R"#(Returns a significant value if TransitionType returns TOUCH. In this case, the function returns : INSIDE when the intersection line remains inside the Arc, OUTSIDE when it remains outside the Arc, UNKNOWN when the calsulus cannot give results. If TransitionType returns IN, or OUT, or UNDECIDED, a exception is raised.)#" )
        .def("IsOpposite",
             (Standard_Boolean (IntSurf_Transition::*)() const) static_cast<Standard_Boolean (IntSurf_Transition::*)() const>(&IntSurf_Transition::IsOpposite),
             R"#(returns a significant value if TransitionType returns TOUCH. In this case, the function returns true when the 2 curves locally define two different parts of the space. If TransitionType returns IN or OUT or UNDECIDED, an exception is raised.)#" )
        .def("SetValue",
             (void (IntSurf_Transition::*)( const Standard_Boolean ,  const IntSurf_TypeTrans  ) ) static_cast<void (IntSurf_Transition::*)( const Standard_Boolean ,  const IntSurf_TypeTrans  ) >(&IntSurf_Transition::SetValue),
             R"#(Set the values of an IN or OUT transition.)#"  , py::arg("Tangent"),  py::arg("Type"))
        .def("SetValue",
             (void (IntSurf_Transition::*)( const Standard_Boolean ,  const IntSurf_Situation ,  const Standard_Boolean  ) ) static_cast<void (IntSurf_Transition::*)( const Standard_Boolean ,  const IntSurf_Situation ,  const Standard_Boolean  ) >(&IntSurf_Transition::SetValue),
             R"#(Set the values of a TOUCH transition.)#"  , py::arg("Tangent"),  py::arg("Situ"),  py::arg("Oppos"))
        .def("SetValue",
             (void (IntSurf_Transition::*)() ) static_cast<void (IntSurf_Transition::*)() >(&IntSurf_Transition::SetValue),
             R"#(Set the values of an UNDECIDED transition.)#" )
        .def("TransitionType",
             (IntSurf_TypeTrans (IntSurf_Transition::*)() const) static_cast<IntSurf_TypeTrans (IntSurf_Transition::*)() const>(&IntSurf_Transition::TransitionType),
             R"#(Returns the type of Transition (in/out/touch/undecided) for the arc given by value. This the transition of the intersection line compared to the Arc of restriction, i-e when the function returns INSIDE for example, it means that the intersection line goes inside the part of plane limited by the arc of restriction.)#" )
        .def("IsTangent",
             (Standard_Boolean (IntSurf_Transition::*)() const) static_cast<Standard_Boolean (IntSurf_Transition::*)() const>(&IntSurf_Transition::IsTangent),
             R"#(Returns TRUE if the point is tangent to the arc given by Value. An exception is raised if TransitionType returns UNDECIDED.)#" )
        .def("Situation",
             (IntSurf_Situation (IntSurf_Transition::*)() const) static_cast<IntSurf_Situation (IntSurf_Transition::*)() const>(&IntSurf_Transition::Situation),
             R"#(Returns a significant value if TransitionType returns TOUCH. In this case, the function returns : INSIDE when the intersection line remains inside the Arc, OUTSIDE when it remains outside the Arc, UNKNOWN when the calsulus cannot give results. If TransitionType returns IN, or OUT, or UNDECIDED, a exception is raised.)#" )
        .def("IsOpposite",
             (Standard_Boolean (IntSurf_Transition::*)() const) static_cast<Standard_Boolean (IntSurf_Transition::*)() const>(&IntSurf_Transition::IsOpposite),
             R"#(returns a significant value if TransitionType returns TOUCH. In this case, the function returns true when the 2 curves locally define two different parts of the space. If TransitionType returns IN or OUT or UNDECIDED, an exception is raised.)#" )
;


    static_cast<py::class_<IntSurf_InteriorPoint ,std::unique_ptr<IntSurf_InteriorPoint>  >>(m.attr("IntSurf_InteriorPoint"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real,const gp_Vec &,const gp_Vec2d & >()  , py::arg("P"),  py::arg("U"),  py::arg("V"),  py::arg("Direc"),  py::arg("Direc2d") )
        .def("SetValue",
             (void (IntSurf_InteriorPoint::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec2d &  ) ) static_cast<void (IntSurf_InteriorPoint::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const gp_Vec & ,  const gp_Vec2d &  ) >(&IntSurf_InteriorPoint::SetValue),
             R"#(None)#"  , py::arg("P"),  py::arg("U"),  py::arg("V"),  py::arg("Direc"),  py::arg("Direc2d"))
        .def("Value",
             (const gp_Pnt & (IntSurf_InteriorPoint::*)() const) static_cast<const gp_Pnt & (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::Value),
             R"#(Returns the 3d coordinates of the interior point.)#" )
        .def("Parameters",
             (void (IntSurf_InteriorPoint::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_InteriorPoint::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_InteriorPoint::Parameters),
             R"#(Returns the parameters of the interior point on the parametric surface.)#"  , py::arg("U"),  py::arg("V"))
        .def("UParameter",
             (Standard_Real (IntSurf_InteriorPoint::*)() const) static_cast<Standard_Real (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::UParameter),
             R"#(Returns the first parameter of the interior point on the parametric surface.)#" )
        .def("VParameter",
             (Standard_Real (IntSurf_InteriorPoint::*)() const) static_cast<Standard_Real (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::VParameter),
             R"#(Returns the second parameter of the interior point on the parametric surface.)#" )
        .def("Direction",
             (const gp_Vec & (IntSurf_InteriorPoint::*)() const) static_cast<const gp_Vec & (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::Direction),
             R"#(Returns the tangent at the intersection in 3d space associated to the interior point.)#" )
        .def("Direction2d",
             (const gp_Vec2d & (IntSurf_InteriorPoint::*)() const) static_cast<const gp_Vec2d & (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::Direction2d),
             R"#(Returns the tangent at the intersection in the parametric space of the parametric surface.)#" )
        .def("Value",
             (const gp_Pnt & (IntSurf_InteriorPoint::*)() const) static_cast<const gp_Pnt & (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::Value),
             R"#(Returns the 3d coordinates of the interior point.)#" )
        .def("Parameters",
             (void (IntSurf_InteriorPoint::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_InteriorPoint::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_InteriorPoint::Parameters),
             R"#(Returns the parameters of the interior point on the parametric surface.)#"  , py::arg("U"),  py::arg("V"))
        .def("UParameter",
             (Standard_Real (IntSurf_InteriorPoint::*)() const) static_cast<Standard_Real (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::UParameter),
             R"#(Returns the first parameter of the interior point on the parametric surface.)#" )
        .def("VParameter",
             (Standard_Real (IntSurf_InteriorPoint::*)() const) static_cast<Standard_Real (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::VParameter),
             R"#(Returns the second parameter of the interior point on the parametric surface.)#" )
        .def("Direction",
             (const gp_Vec & (IntSurf_InteriorPoint::*)() const) static_cast<const gp_Vec & (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::Direction),
             R"#(Returns the tangent at the intersection in 3d space associated to the interior point.)#" )
        .def("Direction2d",
             (const gp_Vec2d & (IntSurf_InteriorPoint::*)() const) static_cast<const gp_Vec2d & (IntSurf_InteriorPoint::*)() const>(&IntSurf_InteriorPoint::Direction2d),
             R"#(Returns the tangent at the intersection in the parametric space of the parametric surface.)#" )
;


    static_cast<py::class_<IntSurf_PathPoint ,std::unique_ptr<IntSurf_PathPoint>  >>(m.attr("IntSurf_PathPoint"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("U"),  py::arg("V") )
        .def("SetValue",
             (void (IntSurf_PathPoint::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PathPoint::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PathPoint::SetValue),
             R"#(None)#"  , py::arg("P"),  py::arg("U"),  py::arg("V"))
        .def("AddUV",
             (void (IntSurf_PathPoint::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PathPoint::*)( const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PathPoint::AddUV),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("SetDirections",
             (void (IntSurf_PathPoint::*)( const gp_Vec & ,  const gp_Dir2d &  ) ) static_cast<void (IntSurf_PathPoint::*)( const gp_Vec & ,  const gp_Dir2d &  ) >(&IntSurf_PathPoint::SetDirections),
             R"#(None)#"  , py::arg("V"),  py::arg("D"))
        .def("SetTangency",
             (void (IntSurf_PathPoint::*)( const Standard_Boolean  ) ) static_cast<void (IntSurf_PathPoint::*)( const Standard_Boolean  ) >(&IntSurf_PathPoint::SetTangency),
             R"#(None)#"  , py::arg("Tang"))
        .def("SetPassing",
             (void (IntSurf_PathPoint::*)( const Standard_Boolean  ) ) static_cast<void (IntSurf_PathPoint::*)( const Standard_Boolean  ) >(&IntSurf_PathPoint::SetPassing),
             R"#(None)#"  , py::arg("Pass"))
        .def("Value",
             (const gp_Pnt & (IntSurf_PathPoint::*)() const) static_cast<const gp_Pnt & (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::Value),
             R"#(None)#" )
        .def("Value2d",
             (void (IntSurf_PathPoint::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PathPoint::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PathPoint::Value2d),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("IsPassingPnt",
             (Standard_Boolean (IntSurf_PathPoint::*)() const) static_cast<Standard_Boolean (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::IsPassingPnt),
             R"#(None)#" )
        .def("IsTangent",
             (Standard_Boolean (IntSurf_PathPoint::*)() const) static_cast<Standard_Boolean (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::IsTangent),
             R"#(None)#" )
        .def("Direction3d",
             (const gp_Vec & (IntSurf_PathPoint::*)() const) static_cast<const gp_Vec & (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::Direction3d),
             R"#(None)#" )
        .def("Direction2d",
             (const gp_Dir2d & (IntSurf_PathPoint::*)() const) static_cast<const gp_Dir2d & (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::Direction2d),
             R"#(None)#" )
        .def("Multiplicity",
             (Standard_Integer (IntSurf_PathPoint::*)() const) static_cast<Standard_Integer (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::Multiplicity),
             R"#(None)#" )
        .def("Parameters",
             (void (IntSurf_PathPoint::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PathPoint::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PathPoint::Parameters),
             R"#(None)#"  , py::arg("Index"),  py::arg("U"),  py::arg("V"))
        .def("AddUV",
             (void (IntSurf_PathPoint::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PathPoint::*)( const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PathPoint::AddUV),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("SetDirections",
             (void (IntSurf_PathPoint::*)( const gp_Vec & ,  const gp_Dir2d &  ) ) static_cast<void (IntSurf_PathPoint::*)( const gp_Vec & ,  const gp_Dir2d &  ) >(&IntSurf_PathPoint::SetDirections),
             R"#(None)#"  , py::arg("V"),  py::arg("D"))
        .def("SetTangency",
             (void (IntSurf_PathPoint::*)( const Standard_Boolean  ) ) static_cast<void (IntSurf_PathPoint::*)( const Standard_Boolean  ) >(&IntSurf_PathPoint::SetTangency),
             R"#(None)#"  , py::arg("Tang"))
        .def("SetPassing",
             (void (IntSurf_PathPoint::*)( const Standard_Boolean  ) ) static_cast<void (IntSurf_PathPoint::*)( const Standard_Boolean  ) >(&IntSurf_PathPoint::SetPassing),
             R"#(None)#"  , py::arg("Pass"))
        .def("Value",
             (const gp_Pnt & (IntSurf_PathPoint::*)() const) static_cast<const gp_Pnt & (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::Value),
             R"#(None)#" )
        .def("Value2d",
             (void (IntSurf_PathPoint::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PathPoint::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PathPoint::Value2d),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("IsPassingPnt",
             (Standard_Boolean (IntSurf_PathPoint::*)() const) static_cast<Standard_Boolean (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::IsPassingPnt),
             R"#(None)#" )
        .def("IsTangent",
             (Standard_Boolean (IntSurf_PathPoint::*)() const) static_cast<Standard_Boolean (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::IsTangent),
             R"#(None)#" )
        .def("Direction3d",
             (const gp_Vec & (IntSurf_PathPoint::*)() const) static_cast<const gp_Vec & (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::Direction3d),
             R"#(None)#" )
        .def("Direction2d",
             (const gp_Dir2d & (IntSurf_PathPoint::*)() const) static_cast<const gp_Dir2d & (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::Direction2d),
             R"#(None)#" )
        .def("Multiplicity",
             (Standard_Integer (IntSurf_PathPoint::*)() const) static_cast<Standard_Integer (IntSurf_PathPoint::*)() const>(&IntSurf_PathPoint::Multiplicity),
             R"#(None)#" )
        .def("Parameters",
             (void (IntSurf_PathPoint::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PathPoint::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PathPoint::Parameters),
             R"#(None)#"  , py::arg("Index"),  py::arg("U"),  py::arg("V"))
;

    register_default_constructor<IntSurf_PathPointTool ,std::unique_ptr<IntSurf_PathPointTool>>(m,"IntSurf_PathPointTool");

    static_cast<py::class_<IntSurf_PathPointTool ,std::unique_ptr<IntSurf_PathPointTool>  >>(m.attr("IntSurf_PathPointTool"))
        .def_static("Value3d_s",
                    (gp_Pnt (*)( const IntSurf_PathPoint &  ) ) static_cast<gp_Pnt (*)( const IntSurf_PathPoint &  ) >(&IntSurf_PathPointTool::Value3d),
                    R"#(Returns the 3d coordinates of the starting point.)#"  , py::arg("PStart"))
        .def_static("Value2d_s",
                    (void (*)( const IntSurf_PathPoint & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const IntSurf_PathPoint & ,  Standard_Real & ,  Standard_Real &  ) >(&IntSurf_PathPointTool::Value2d),
                    R"#(Returns the <U, V> parameters which are associated with <P> it's the parameters which start the marching algorithm)#"  , py::arg("PStart"),  py::arg("U"),  py::arg("V"))
        .def_static("IsPassingPnt_s",
                    (Standard_Boolean (*)( const IntSurf_PathPoint &  ) ) static_cast<Standard_Boolean (*)( const IntSurf_PathPoint &  ) >(&IntSurf_PathPointTool::IsPassingPnt),
                    R"#(Returns True if the point is a point on a non-oriented arc, which means that the intersection line does not stop at such a point but just go through such a point. IsPassingPnt is True when IsOnArc is True)#"  , py::arg("PStart"))
        .def_static("IsTangent_s",
                    (Standard_Boolean (*)( const IntSurf_PathPoint &  ) ) static_cast<Standard_Boolean (*)( const IntSurf_PathPoint &  ) >(&IntSurf_PathPointTool::IsTangent),
                    R"#(Returns True if the surfaces are tangent at this point. IsTangent can be True when IsOnArc is True if IsPassingPnt is True and IsTangent is True,this point is a stopped point.)#"  , py::arg("PStart"))
        .def_static("Direction3d_s",
                    (gp_Vec (*)( const IntSurf_PathPoint &  ) ) static_cast<gp_Vec (*)( const IntSurf_PathPoint &  ) >(&IntSurf_PathPointTool::Direction3d),
                    R"#(returns the tangent at the intersection in 3d space associated to <P> an exception is raised if IsTangent is true.)#"  , py::arg("PStart"))
        .def_static("Direction2d_s",
                    (gp_Dir2d (*)( const IntSurf_PathPoint &  ) ) static_cast<gp_Dir2d (*)( const IntSurf_PathPoint &  ) >(&IntSurf_PathPointTool::Direction2d),
                    R"#(returns the tangent at the intersection in the parametric space of the parametrized surface.This tangent is associated to the value2d la tangente a un sens signifiant (indique le sens de chemin ement) an exception is raised if IsTangent is true.)#"  , py::arg("PStart"))
        .def_static("Multiplicity_s",
                    (Standard_Integer (*)( const IntSurf_PathPoint &  ) ) static_cast<Standard_Integer (*)( const IntSurf_PathPoint &  ) >(&IntSurf_PathPointTool::Multiplicity),
                    R"#(Returns the multiplicity of the point i-e the number of auxillar parameters associated to the point which the principal parameters are given by Value2d)#"  , py::arg("PStart"))
        .def_static("Parameters_s",
                    (void (*)( const IntSurf_PathPoint & ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const IntSurf_PathPoint & ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) >(&IntSurf_PathPointTool::Parameters),
                    R"#(Parametric coordinates associated to the multiplicity. An exception is raised if Mult<=0 or Mult>multiplicity.)#"  , py::arg("PStart"),  py::arg("Mult"),  py::arg("U"),  py::arg("V"))
;

    register_default_constructor<IntSurf_QuadricTool ,std::unique_ptr<IntSurf_QuadricTool>>(m,"IntSurf_QuadricTool");

    static_cast<py::class_<IntSurf_QuadricTool ,std::unique_ptr<IntSurf_QuadricTool>  >>(m.attr("IntSurf_QuadricTool"))
        .def_static("Value_s",
                    (Standard_Real (*)( const IntSurf_Quadric & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const IntSurf_Quadric & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_QuadricTool::Value),
                    R"#(Returns the value of the function.)#"  , py::arg("Quad"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def_static("Gradient_s",
                    (void (*)( const IntSurf_Quadric & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec &  ) ) static_cast<void (*)( const IntSurf_Quadric & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  gp_Vec &  ) >(&IntSurf_QuadricTool::Gradient),
                    R"#(Returns the gradient of the function.)#"  , py::arg("Quad"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("V"))
        .def_static("ValueAndGradient_s",
                    (void (*)( const IntSurf_Quadric & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  gp_Vec &  ) ) static_cast<void (*)( const IntSurf_Quadric & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  gp_Vec &  ) >(&IntSurf_QuadricTool::ValueAndGradient),
                    R"#(Returns the value and the gradient.)#"  , py::arg("Quad"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("Val"),  py::arg("Grad"))
        .def_static("Tolerance_s",
                    (Standard_Real (*)( const IntSurf_Quadric &  ) ) static_cast<Standard_Real (*)( const IntSurf_Quadric &  ) >(&IntSurf_QuadricTool::Tolerance),
                    R"#(returns the tolerance of the zero of the implicit function)#"  , py::arg("Quad"))
;


    static_cast<py::class_<IntSurf_PntOn2S ,std::unique_ptr<IntSurf_PntOn2S>  >>(m.attr("IntSurf_PntOn2S"))
        .def(py::init<  >()  )
        .def("SetValue",
             (void (IntSurf_PntOn2S::*)( const gp_Pnt &  ) ) static_cast<void (IntSurf_PntOn2S::*)( const gp_Pnt &  ) >(&IntSurf_PntOn2S::SetValue),
             R"#(Sets the value of the point in 3d space.)#"  , py::arg("Pt"))
        .def("SetValue",
             (void (IntSurf_PntOn2S::*)( const gp_Pnt & ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PntOn2S::*)( const gp_Pnt & ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PntOn2S::SetValue),
             R"#(Sets the values of the point in 3d space, and in the parametric space of one of the surface.)#"  , py::arg("Pt"),  py::arg("OnFirst"),  py::arg("U"),  py::arg("V"))
        .def("SetValue",
             (void (IntSurf_PntOn2S::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PntOn2S::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PntOn2S::SetValue),
             R"#(Sets the values of the point in 3d space, and in the parametric space of each surface.)#"  , py::arg("Pt"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("SetValue",
             (void (IntSurf_PntOn2S::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PntOn2S::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PntOn2S::SetValue),
             R"#(Set the values of the point in the parametric space of one of the surface.)#"  , py::arg("OnFirst"),  py::arg("U"),  py::arg("V"))
        .def("SetValue",
             (void (IntSurf_PntOn2S::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PntOn2S::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PntOn2S::SetValue),
             R"#(Set the values of the point in the parametric space of one of the surface.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("Value",
             (const gp_Pnt & (IntSurf_PntOn2S::*)() const) static_cast<const gp_Pnt & (IntSurf_PntOn2S::*)() const>(&IntSurf_PntOn2S::Value),
             R"#(Returns the point in 3d space.)#" )
        .def("ValueOnSurface",
             (gp_Pnt2d (IntSurf_PntOn2S::*)( const Standard_Boolean  ) const) static_cast<gp_Pnt2d (IntSurf_PntOn2S::*)( const Standard_Boolean  ) const>(&IntSurf_PntOn2S::ValueOnSurface),
             R"#(Returns the point in 2d space of one of the surfaces.)#"  , py::arg("OnFirst"))
        .def("ParametersOnS1",
             (void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PntOn2S::ParametersOnS1),
             R"#(Returns the parameters of the point on the first surface.)#"  , py::arg("U1"),  py::arg("V1"))
        .def("ParametersOnS2",
             (void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PntOn2S::ParametersOnS2),
             R"#(Returns the parameters of the point on the second surface.)#"  , py::arg("U2"),  py::arg("V2"))
        .def("ParametersOnSurface",
             (void (IntSurf_PntOn2S::*)( const Standard_Boolean ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PntOn2S::*)( const Standard_Boolean ,  Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PntOn2S::ParametersOnSurface),
             R"#(Returns the parameters of the point in the parametric space of one of the surface.)#"  , py::arg("OnFirst"),  py::arg("U"),  py::arg("V"))
        .def("Parameters",
             (void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PntOn2S::Parameters),
             R"#(Returns the parameters of the point on both surfaces.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("IsSame",
             (Standard_Boolean (IntSurf_PntOn2S::*)( const IntSurf_PntOn2S & ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Boolean (IntSurf_PntOn2S::*)( const IntSurf_PntOn2S & ,  const Standard_Real ,  const Standard_Real  ) const>(&IntSurf_PntOn2S::IsSame),
             R"#(Returns TRUE if 2D- and 3D-coordinates of theOterPoint are equal to corresponding coordinates of me (with given tolerance). If theTol2D < 0.0 we will compare 3D-points only.)#"  , py::arg("theOtherPoint"),  py::arg("theTol3D")=static_cast<const Standard_Real>(0.0),  py::arg("theTol2D")=static_cast<const Standard_Real>(- 1.0))
        .def("SetValue",
             (void (IntSurf_PntOn2S::*)( const gp_Pnt &  ) ) static_cast<void (IntSurf_PntOn2S::*)( const gp_Pnt &  ) >(&IntSurf_PntOn2S::SetValue),
             R"#(Sets the value of the point in 3d space.)#"  , py::arg("Pt"))
        .def("SetValue",
             (void (IntSurf_PntOn2S::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PntOn2S::*)( const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PntOn2S::SetValue),
             R"#(Sets the values of the point in 3d space, and in the parametric space of each surface.)#"  , py::arg("Pt"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("SetValue",
             (void (IntSurf_PntOn2S::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntSurf_PntOn2S::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntSurf_PntOn2S::SetValue),
             R"#(Set the values of the point in the parametric space of one of the surface.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("Value",
             (const gp_Pnt & (IntSurf_PntOn2S::*)() const) static_cast<const gp_Pnt & (IntSurf_PntOn2S::*)() const>(&IntSurf_PntOn2S::Value),
             R"#(Returns the point in 3d space.)#" )
        .def("ParametersOnS1",
             (void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PntOn2S::ParametersOnS1),
             R"#(Returns the parameters of the point on the first surface.)#"  , py::arg("U1"),  py::arg("V1"))
        .def("ParametersOnS2",
             (void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PntOn2S::ParametersOnS2),
             R"#(Returns the parameters of the point on the second surface.)#"  , py::arg("U2"),  py::arg("V2"))
        .def("Parameters",
             (void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntSurf_PntOn2S::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&IntSurf_PntOn2S::Parameters),
             R"#(Returns the parameters of the point on both surfaces.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
;

    register_default_constructor<IntSurf_InteriorPointTool ,std::unique_ptr<IntSurf_InteriorPointTool>>(m,"IntSurf_InteriorPointTool");

    static_cast<py::class_<IntSurf_InteriorPointTool ,std::unique_ptr<IntSurf_InteriorPointTool>  >>(m.attr("IntSurf_InteriorPointTool"))
        .def_static("Value3d_s",
                    (gp_Pnt (*)( const IntSurf_InteriorPoint &  ) ) static_cast<gp_Pnt (*)( const IntSurf_InteriorPoint &  ) >(&IntSurf_InteriorPointTool::Value3d),
                    R"#(Returns the 3d coordinates of the starting point.)#"  , py::arg("PStart"))
        .def_static("Value2d_s",
                    (void (*)( const IntSurf_InteriorPoint & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const IntSurf_InteriorPoint & ,  Standard_Real & ,  Standard_Real &  ) >(&IntSurf_InteriorPointTool::Value2d),
                    R"#(Returns the <U,V> parameters which are associated with <P> it's the parameters which start the marching algorithm)#"  , py::arg("PStart"),  py::arg("U"),  py::arg("V"))
        .def_static("Direction3d_s",
                    (gp_Vec (*)( const IntSurf_InteriorPoint &  ) ) static_cast<gp_Vec (*)( const IntSurf_InteriorPoint &  ) >(&IntSurf_InteriorPointTool::Direction3d),
                    R"#(returns the tangent at the intersectin in 3d space associated to <P>)#"  , py::arg("PStart"))
        .def_static("Direction2d_s",
                    (gp_Dir2d (*)( const IntSurf_InteriorPoint &  ) ) static_cast<gp_Dir2d (*)( const IntSurf_InteriorPoint &  ) >(&IntSurf_InteriorPointTool::Direction2d),
                    R"#(returns the tangent at the intersectin in the parametric space of the parametrized surface.This tangent is associated to the value2d)#"  , py::arg("PStart"))
;

    register_default_constructor<IntSurf ,std::unique_ptr<IntSurf>>(m,"IntSurf");

    static_cast<py::class_<IntSurf ,std::unique_ptr<IntSurf>  >>(m.attr("IntSurf"))
        .def_static("MakeTransition_s",
                    (void (*)( const gp_Vec & ,  const gp_Vec & ,  const gp_Dir & ,  IntSurf_Transition & ,  IntSurf_Transition &  ) ) static_cast<void (*)( const gp_Vec & ,  const gp_Vec & ,  const gp_Dir & ,  IntSurf_Transition & ,  IntSurf_Transition &  ) >(&IntSurf::MakeTransition),
                    R"#(Computes the transition of the intersection point between the two lines. TgFirst is the tangent vector of the first line. TgSecond is the tangent vector of the second line. Normal is the direction used to orientate the cross product TgFirst^TgSecond. TFirst is the transition of the point on the first line. TSecond is the transition of the point on the second line.)#"  , py::arg("TgFirst"),  py::arg("TgSecond"),  py::arg("Normal"),  py::arg("TFirst"),  py::arg("TSecond"))
        .def_static("SetPeriod_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  Standard_Real [4]  ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  Standard_Real [4]  ) >(&IntSurf::SetPeriod),
                    R"#(Fills theArrOfPeriod array by the period values of theFirstSurf and theSecondSurf. [0] = U-period of theFirstSurf, [1] = V-period of theFirstSurf, [2] = U-period of theSecondSurf, [3] = V-period of theSecondSurf.)#"  , py::arg("theFirstSurf"),  py::arg("theSecondSurf"),  py::arg("theArrOfPeriod"))
;


    static_cast<py::class_<IntSurf_Couple ,std::unique_ptr<IntSurf_Couple>  >>(m.attr("IntSurf_Couple"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("Index1"),  py::arg("Index2") )
        .def("First",
             (Standard_Integer (IntSurf_Couple::*)() const) static_cast<Standard_Integer (IntSurf_Couple::*)() const>(&IntSurf_Couple::First),
             R"#(returns the first element)#" )
        .def("Second",
             (Standard_Integer (IntSurf_Couple::*)() const) static_cast<Standard_Integer (IntSurf_Couple::*)() const>(&IntSurf_Couple::Second),
             R"#(returns the Second element)#" )
        .def("First",
             (Standard_Integer (IntSurf_Couple::*)() const) static_cast<Standard_Integer (IntSurf_Couple::*)() const>(&IntSurf_Couple::First),
             R"#(returns the first element)#" )
        .def("Second",
             (Standard_Integer (IntSurf_Couple::*)() const) static_cast<Standard_Integer (IntSurf_Couple::*)() const>(&IntSurf_Couple::Second),
             R"#(returns the Second element)#" )
;

// functions
// ./opencascade/IntSurf_Situation.hxx
// ./opencascade/IntSurf_Quadric.hxx
// ./opencascade/IntSurf_SequenceOfInteriorPoint.hxx
// ./opencascade/IntSurf_ListIteratorOfListOfPntOn2S.hxx
// ./opencascade/IntSurf_QuadricTool.hxx
// ./opencascade/IntSurf_LineOn2S.hxx
// ./opencascade/IntSurf.hxx
// ./opencascade/IntSurf_Transition.hxx
// ./opencascade/IntSurf_PntOn2S.hxx
// ./opencascade/IntSurf_SequenceOfPntOn2S.hxx
// ./opencascade/IntSurf_SequenceOfPathPoint.hxx
// ./opencascade/IntSurf_InteriorPoint.hxx
// ./opencascade/IntSurf_Couple.hxx
// ./opencascade/IntSurf_TypeTrans.hxx
// ./opencascade/IntSurf_Allocator.hxx
// ./opencascade/IntSurf_PathPoint.hxx
// ./opencascade/IntSurf_InteriorPointTool.hxx
// ./opencascade/IntSurf_ListOfPntOn2S.hxx
// ./opencascade/IntSurf_SequenceOfCouple.hxx
// ./opencascade/IntSurf_PathPointTool.hxx

// operators

// register typdefs
// ./opencascade/IntSurf_Situation.hxx
// ./opencascade/IntSurf_Quadric.hxx
// ./opencascade/IntSurf_SequenceOfInteriorPoint.hxx
    register_template_NCollection_Sequence<IntSurf_InteriorPoint>(m,"IntSurf_SequenceOfInteriorPoint");  
// ./opencascade/IntSurf_ListIteratorOfListOfPntOn2S.hxx
// ./opencascade/IntSurf_QuadricTool.hxx
// ./opencascade/IntSurf_LineOn2S.hxx
// ./opencascade/IntSurf.hxx
// ./opencascade/IntSurf_Transition.hxx
// ./opencascade/IntSurf_PntOn2S.hxx
// ./opencascade/IntSurf_SequenceOfPntOn2S.hxx
    register_template_NCollection_Sequence<IntSurf_PntOn2S>(m,"IntSurf_SequenceOfPntOn2S");  
// ./opencascade/IntSurf_SequenceOfPathPoint.hxx
    register_template_NCollection_Sequence<IntSurf_PathPoint>(m,"IntSurf_SequenceOfPathPoint");  
// ./opencascade/IntSurf_InteriorPoint.hxx
// ./opencascade/IntSurf_Couple.hxx
// ./opencascade/IntSurf_TypeTrans.hxx
// ./opencascade/IntSurf_Allocator.hxx
// ./opencascade/IntSurf_PathPoint.hxx
// ./opencascade/IntSurf_InteriorPointTool.hxx
// ./opencascade/IntSurf_ListOfPntOn2S.hxx
    register_template_NCollection_List<IntSurf_PntOn2S>(m,"IntSurf_ListOfPntOn2S");  
// ./opencascade/IntSurf_SequenceOfCouple.hxx
    register_template_NCollection_Sequence<IntSurf_Couple>(m,"IntSurf_SequenceOfCouple");  
// ./opencascade/IntSurf_PathPointTool.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
