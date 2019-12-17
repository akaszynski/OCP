
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_Undefined.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <StdFail_UndefinedValue.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdFail_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdFail", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only

// pre-register typdefs
// ./opencascade/StdFail_UndefinedDerivative.hxx
// ./opencascade/StdFail_NotDone.hxx
// ./opencascade/StdFail_Undefined.hxx
// ./opencascade/StdFail_InfiniteSolutions.hxx
// ./opencascade/StdFail_UndefinedValue.hxx

};

// user-defined post-inclusion per module

// user-defined post
