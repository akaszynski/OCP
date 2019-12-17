
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Lin2d.hxx>

// module includes
#include <Geom2dHatch_Classifier.hxx>
#include <Geom2dHatch_DataMapIteratorOfHatchings.hxx>
#include <Geom2dHatch_DataMapIteratorOfMapOfElements.hxx>
#include <Geom2dHatch_Element.hxx>
#include <Geom2dHatch_Elements.hxx>
#include <Geom2dHatch_FClass2dOfClassifier.hxx>
#include <Geom2dHatch_Hatcher.hxx>
#include <Geom2dHatch_Hatching.hxx>
#include <Geom2dHatch_Hatchings.hxx>
#include <Geom2dHatch_Intersector.hxx>
#include <Geom2dHatch_MapOfElements.hxx>

// template related includes
// ./opencascade/Geom2dHatch_MapOfElements.hxx
#include "NCollection.hxx"
// ./opencascade/Geom2dHatch_MapOfElements.hxx
#include "NCollection.hxx"
// ./opencascade/Geom2dHatch_Hatchings.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dHatch_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dHatch", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<Geom2dHatch_Hatcher ,std::unique_ptr<Geom2dHatch_Hatcher>  >(m,"Geom2dHatch_Hatcher",R"#(None)#");
    py::class_<Geom2dHatch_Hatching ,std::unique_ptr<Geom2dHatch_Hatching>  >(m,"Geom2dHatch_Hatching",R"#(None)#");
    py::class_<Geom2dHatch_Classifier ,std::unique_ptr<Geom2dHatch_Classifier>  >(m,"Geom2dHatch_Classifier",R"#(None)#");
    py::class_<Geom2dHatch_Intersector ,std::unique_ptr<Geom2dHatch_Intersector>  , Geom2dInt_GInter >(m,"Geom2dHatch_Intersector",R"#(None)#");
    py::class_<Geom2dHatch_FClass2dOfClassifier ,std::unique_ptr<Geom2dHatch_FClass2dOfClassifier>  >(m,"Geom2dHatch_FClass2dOfClassifier",R"#(None)#");
    py::class_<Geom2dHatch_Elements ,std::unique_ptr<Geom2dHatch_Elements>  >(m,"Geom2dHatch_Elements",R"#(None)#");
    py::class_<Geom2dHatch_Element ,std::unique_ptr<Geom2dHatch_Element>  >(m,"Geom2dHatch_Element",R"#(None)#");

// pre-register typdefs
// ./opencascade/Geom2dHatch_DataMapIteratorOfMapOfElements.hxx
// ./opencascade/Geom2dHatch_Hatcher.hxx
// ./opencascade/Geom2dHatch_FClass2dOfClassifier.hxx
// ./opencascade/Geom2dHatch_Hatching.hxx
// ./opencascade/Geom2dHatch_Element.hxx
// ./opencascade/Geom2dHatch_Classifier.hxx
// ./opencascade/Geom2dHatch_MapOfElements.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, Geom2dHatch_Element, TColStd_MapIntegerHasher>(m,"Geom2dHatch_MapOfElements");  
// ./opencascade/Geom2dHatch_Elements.hxx
// ./opencascade/Geom2dHatch_Hatchings.hxx
// ./opencascade/Geom2dHatch_DataMapIteratorOfHatchings.hxx
// ./opencascade/Geom2dHatch_Intersector.hxx

};

// user-defined post-inclusion per module

// user-defined post
