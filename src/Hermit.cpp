
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>

// module includes
#include <Hermit.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Hermit(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Hermit"));


//Python trampoline classes

// classes

    register_default_constructor<Hermit ,std::unique_ptr<Hermit>>(m,"Hermit");

    static_cast<py::class_<Hermit ,std::unique_ptr<Hermit>  >>(m.attr("Hermit"))
        .def_static("Solution_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&Hermit::Solution),
                    R"#(returns the correct spline a(u) which will be multiplicated with BS later.)#"  , py::arg("BS"),  py::arg("TolPoles")=static_cast<const Standard_Real>(0.000001),  py::arg("TolKnots")=static_cast<const Standard_Real>(0.000001))
        .def_static("Solution_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&Hermit::Solution),
                    R"#(returns the correct spline a(u) which will be multiplicated with BS later.)#"  , py::arg("BS"),  py::arg("TolPoles")=static_cast<const Standard_Real>(0.000001),  py::arg("TolKnots")=static_cast<const Standard_Real>(0.000001))
        .def_static("Solutionbis_s",
                    (void (*)( const opencascade::handle<Geom_BSplineCurve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<Geom_BSplineCurve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real ,  const Standard_Real  ) >(&Hermit::Solutionbis),
                    R"#(returns the knots to insert to a(u) to stay with a constant sign and in the tolerances.)#"  , py::arg("BS"),  py::arg("Knotmin"),  py::arg("Knotmax"),  py::arg("TolPoles")=static_cast<const Standard_Real>(0.000001),  py::arg("TolKnots")=static_cast<const Standard_Real>(0.000001))
;

// functions
// ./opencascade/Hermit.hxx

// operators

// register typdefs
// ./opencascade/Hermit.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
