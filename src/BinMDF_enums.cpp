
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMDF_ADriver.hxx>
#include <BinMDF_ReferenceDriver.hxx>
#include <BinMDF_TagSourceDriver.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMDF.hxx>
#include <BinMDF_ADriver.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <BinMDF_DataMapIteratorOfTypeADriverMap.hxx>
#include <BinMDF_DoubleMapIteratorOfTypeIdMap.hxx>
#include <BinMDF_ReferenceDriver.hxx>
#include <BinMDF_StringIdMap.hxx>
#include <BinMDF_TagSourceDriver.hxx>
#include <BinMDF_TypeADriverMap.hxx>
#include <BinMDF_TypeIdMap.hxx>

// template related includes
// ./opencascade/BinMDF_TypeIdMap.hxx
#include "NCollection.hxx"
// ./opencascade/BinMDF_TypeIdMap.hxx
#include "NCollection.hxx"
// ./opencascade/BinMDF_TypeADriverMap.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMDF_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinMDF", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_BinMDF_ADriver : public BinMDF_ADriver{
    public:
        using BinMDF_ADriver::BinMDF_ADriver;
        
        // public pure virtual
        opencascade::handle<TDF_Attribute> NewEmpty() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TDF_Attribute>,BinMDF_ADriver,NewEmpty,) };
        Standard_Boolean Paste(const BinObjMgt_Persistent & aSource,const opencascade::handle<TDF_Attribute> & aTarget,BinObjMgt_RRelocationTable & aRelocTable) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BinMDF_ADriver,Paste,aSource,aTarget,aRelocTable) };
        void Paste(const opencascade::handle<TDF_Attribute> & aSource,BinObjMgt_Persistent & aTarget,TColStd_IndexedMapOfTransient & aRelocTable) const  override { PYBIND11_OVERLOAD_PURE(void,BinMDF_ADriver,Paste,aSource,aTarget,aRelocTable) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<BinMDF_ADriverTable ,opencascade::handle<BinMDF_ADriverTable>  , Standard_Transient >(m,"BinMDF_ADriverTable",R"#(A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.A driver table is an object building links between object types and object drivers. In the translation process, a driver table is asked to give a translation driver for each current object to be translated.)#");
    py::class_<BinMDF_ADriver ,opencascade::handle<BinMDF_ADriver> ,Py_BinMDF_ADriver , Standard_Transient >(m,"BinMDF_ADriver",R"#(Attribute Storage/Retrieval Driver.Attribute Storage/Retrieval Driver.Attribute Storage/Retrieval Driver.)#");
    py::class_<BinMDF_TagSourceDriver ,opencascade::handle<BinMDF_TagSourceDriver>  , BinMDF_ADriver >(m,"BinMDF_TagSourceDriver",R"#(TDF_TagSource Driver.TDF_TagSource Driver.TDF_TagSource Driver.)#");
    py::class_<BinMDF_ReferenceDriver ,opencascade::handle<BinMDF_ReferenceDriver>  , BinMDF_ADriver >(m,"BinMDF_ReferenceDriver",R"#(Reference attribute Driver.Reference attribute Driver.Reference attribute Driver.)#");
    py::class_<BinMDF ,std::unique_ptr<BinMDF>  >(m,"BinMDF",R"#(This package provides classes and methods to translate a transient DF into a persistent one and vice versa.)#");

// pre-register typdefs
// ./opencascade/BinMDF_StringIdMap.hxx
// ./opencascade/BinMDF_TypeIdMap.hxx
    preregister_template_NCollection_DoubleMap<opencascade::handle<Standard_Type>, Standard_Integer, TColStd_MapTransientHasher, TColStd_MapIntegerHasher>(m,"BinMDF_TypeIdMap");  
// ./opencascade/BinMDF_ADriverTable.hxx
// ./opencascade/BinMDF_ReferenceDriver.hxx
// ./opencascade/BinMDF_TypeADriverMap.hxx
// ./opencascade/BinMDF_ADriver.hxx
// ./opencascade/BinMDF.hxx
// ./opencascade/BinMDF_TagSourceDriver.hxx
// ./opencascade/BinMDF_DataMapIteratorOfTypeADriverMap.hxx
// ./opencascade/BinMDF_DoubleMapIteratorOfTypeIdMap.hxx

};

// user-defined post-inclusion per module

// user-defined post
