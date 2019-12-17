
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <IntRes2d_Domain.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <IntCurve_IConicTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <IntRes2d_Domain.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_IntConicCurveOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>

// module includes
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_GInter.hxx>
#include <Geom2dInt_IntConicCurveOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_TheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dInt_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dInt", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<Geom2dInt_TheIntConicCurveOfGInter ,std::unique_ptr<Geom2dInt_TheIntConicCurveOfGInter>  , IntRes2d_Intersection >(m,"Geom2dInt_TheIntConicCurveOfGInter",R"#(None)#");
    py::class_<Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter ,std::unique_ptr<Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter>  >(m,"Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter",R"#(None)#");
    py::class_<Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter ,std::unique_ptr<Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter>  >(m,"Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter",R"#(None)#");
    py::class_<Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter ,std::unique_ptr<Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter>  , IntRes2d_Intersection >(m,"Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter",R"#(None)#");
    py::class_<Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter ,std::unique_ptr<Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter>  , math_FunctionSetWithDerivatives >(m,"Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter",R"#(None)#");
    py::class_<Geom2dInt_TheProjPCurOfGInter ,std::unique_ptr<Geom2dInt_TheProjPCurOfGInter>  >(m,"Geom2dInt_TheProjPCurOfGInter",R"#(None)#");
    py::class_<Geom2dInt_Geom2dCurveTool ,std::unique_ptr<Geom2dInt_Geom2dCurveTool>  >(m,"Geom2dInt_Geom2dCurveTool",R"#(This class provides a Geom2dCurveTool as < Geom2dCurveTool from IntCurve > from a Tool as < Geom2dCurveTool from Adaptor3d > .)#");
    py::class_<Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter ,std::unique_ptr<Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter>  , Intf_Polygon2d >(m,"Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter",R"#(None)#");
    py::class_<Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter ,std::unique_ptr<Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter>  , math_FunctionWithDerivative >(m,"Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter",R"#(None)#");
    py::class_<Geom2dInt_IntConicCurveOfGInter ,std::unique_ptr<Geom2dInt_IntConicCurveOfGInter>  , IntRes2d_Intersection >(m,"Geom2dInt_IntConicCurveOfGInter",R"#(None)#");
    py::class_<Geom2dInt_GInter ,std::unique_ptr<Geom2dInt_GInter>  , IntRes2d_Intersection >(m,"Geom2dInt_GInter",R"#(None)#");
    py::class_<Geom2dInt_TheIntPCurvePCurveOfGInter ,std::unique_ptr<Geom2dInt_TheIntPCurvePCurveOfGInter>  , IntRes2d_Intersection >(m,"Geom2dInt_TheIntPCurvePCurveOfGInter",R"#(None)#");
    py::class_<Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter ,std::unique_ptr<Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter>  , math_FunctionWithDerivative >(m,"Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter",R"#(None)#");
    py::class_<Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter ,std::unique_ptr<Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter>  >(m,"Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter",R"#(None)#");

// pre-register typdefs
// ./opencascade/Geom2dInt_TheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_IntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_Geom2dCurveTool.hxx
// ./opencascade/Geom2dInt_GInter.hxx

};

// user-defined post-inclusion per module

// user-defined post
