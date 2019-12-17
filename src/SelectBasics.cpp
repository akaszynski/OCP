
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Bnd_Box.hxx>
#include <SelectBasics_EntityOwner.hxx>

// module includes
#include <SelectBasics.hxx>
#include <SelectBasics_EntityOwner.hxx>
#include <SelectBasics_PickResult.hxx>
#include <SelectBasics_SelectingVolumeManager.hxx>
#include <SelectBasics_SensitiveEntity.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_SelectBasics(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("SelectBasics"));


//Python trampoline classes
    class Py_SelectBasics_EntityOwner : public SelectBasics_EntityOwner{
    public:
        using SelectBasics_EntityOwner::SelectBasics_EntityOwner;
        
        // public pure virtual
        Standard_Boolean HasLocation() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_EntityOwner,HasLocation,) };
        void SetLocation(const TopLoc_Location & aLoc) override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_EntityOwner,SetLocation,aLoc) };
        void ResetLocation() override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_EntityOwner,ResetLocation,) };
        TopLoc_Location Location() const  override { PYBIND11_OVERLOAD_PURE(TopLoc_Location,SelectBasics_EntityOwner,Location,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_SelectBasics_SensitiveEntity : public SelectBasics_SensitiveEntity{
    public:
        using SelectBasics_SensitiveEntity::SelectBasics_SensitiveEntity;
        
        // public pure virtual
        Standard_Boolean Matches(SelectBasics_SelectingVolumeManager & theMgr,SelectBasics_PickResult & thePickResult) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SensitiveEntity,Matches,theMgr,thePickResult) };
        Standard_Integer NbSubElements() override { PYBIND11_OVERLOAD_PURE(Standard_Integer,SelectBasics_SensitiveEntity,NbSubElements,) };
        Select3D_BndBox3d BoundingBox() override { PYBIND11_OVERLOAD_PURE(Select3D_BndBox3d,SelectBasics_SensitiveEntity,BoundingBox,) };
        void BVH() override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_SensitiveEntity,BVH,) };
        void Clear() override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_SensitiveEntity,Clear,) };
        Standard_Boolean HasInitLocation() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SensitiveEntity,HasInitLocation,) };
        gp_GTrsf InvInitLocation() const  override { PYBIND11_OVERLOAD_PURE(gp_GTrsf,SelectBasics_SensitiveEntity,InvInitLocation,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_SelectBasics_SelectingVolumeManager : public SelectBasics_SelectingVolumeManager{
    public:
        using SelectBasics_SelectingVolumeManager::SelectBasics_SelectingVolumeManager;
        
        // public pure virtual
        Standard_Integer GetActiveSelectionType() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,SelectBasics_SelectingVolumeManager,GetActiveSelectionType,) };
        Standard_Boolean Overlaps(const NCollection_Vec3<Standard_Real> & theBoxMin,const NCollection_Vec3<Standard_Real> & theBoxMax,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theBoxMin,theBoxMax,theDepth) };
        Standard_Boolean Overlaps(const NCollection_Vec3<Standard_Real> & theBoxMin,const NCollection_Vec3<Standard_Real> & theBoxMax,Standard_Boolean * theInside) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theBoxMin,theBoxMax,theInside) };
        Standard_Boolean Overlaps(const gp_Pnt & thePnt,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePnt,theDepth) };
        Standard_Boolean Overlaps(const gp_Pnt & thePnt) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePnt) };
        Standard_Boolean Overlaps(const opencascade::handle<TColgp_HArray1OfPnt> & theArrayOfPts,Standard_Integer theSensType,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theArrayOfPts,theSensType,theDepth) };
        Standard_Boolean Overlaps( const NCollection_Array1<gp_Pnt> & theArrayOfPts,Standard_Integer theSensType,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theArrayOfPts,theSensType,theDepth) };
        Standard_Boolean Overlaps(const gp_Pnt & thePt1,const gp_Pnt & thePt2,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePt1,thePt2,theDepth) };
        Standard_Boolean Overlaps(const gp_Pnt & thePt1,const gp_Pnt & thePt2,const gp_Pnt & thePt3,Standard_Integer theSensType,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePt1,thePt2,thePt3,theSensType,theDepth) };
        Standard_Real DistToGeometryCenter(const gp_Pnt & theCOG) override { PYBIND11_OVERLOAD_PURE(Standard_Real,SelectBasics_SelectingVolumeManager,DistToGeometryCenter,theCOG) };
        gp_Pnt DetectedPoint(const Standard_Real theDepth) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,DetectedPoint,theDepth) };
        Standard_Boolean IsOverlapAllowed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,IsOverlapAllowed,) };
        gp_Pnt GetNearPickedPnt() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,GetNearPickedPnt,) };
        gp_Pnt GetFarPickedPnt() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,GetFarPickedPnt,) };
        void GetPlanes(NCollection_Vector<NCollection_Vec4<Standard_Real> > & thePlaneEquations) const  override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_SelectingVolumeManager,GetPlanes,thePlaneEquations) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<SelectBasics_EntityOwner ,opencascade::handle<SelectBasics_EntityOwner> ,Py_SelectBasics_EntityOwner , Standard_Transient >>(m.attr("SelectBasics_EntityOwner"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectBasics_EntityOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectBasics_EntityOwner::*)() const>(&SelectBasics_EntityOwner::DynamicType),
             R"#(None)#" )
        .def("SetPriority",
             (void (SelectBasics_EntityOwner::*)( const Standard_Integer  ) ) static_cast<void (SelectBasics_EntityOwner::*)( const Standard_Integer  ) >(&SelectBasics_EntityOwner::SetPriority),
             R"#(sets the selectable priority of the owner)#"  , py::arg("thePriority"))
        .def("Priority",
             (Standard_Integer (SelectBasics_EntityOwner::*)() const) static_cast<Standard_Integer (SelectBasics_EntityOwner::*)() const>(&SelectBasics_EntityOwner::Priority),
             R"#(None)#" )
        .def("HasLocation",
             (Standard_Boolean (SelectBasics_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectBasics_EntityOwner::*)() const>(&SelectBasics_EntityOwner::HasLocation),
             R"#(None)#" )
        .def("SetLocation",
             (void (SelectBasics_EntityOwner::*)( const TopLoc_Location &  ) ) static_cast<void (SelectBasics_EntityOwner::*)( const TopLoc_Location &  ) >(&SelectBasics_EntityOwner::SetLocation),
             R"#(None)#"  , py::arg("aLoc"))
        .def("ResetLocation",
             (void (SelectBasics_EntityOwner::*)() ) static_cast<void (SelectBasics_EntityOwner::*)() >(&SelectBasics_EntityOwner::ResetLocation),
             R"#(None)#" )
        .def("Location",
             (TopLoc_Location (SelectBasics_EntityOwner::*)() const) static_cast<TopLoc_Location (SelectBasics_EntityOwner::*)() const>(&SelectBasics_EntityOwner::Location),
             R"#(None)#" )
        .def("Set",
             (void (SelectBasics_EntityOwner::*)( const Standard_Integer  ) ) static_cast<void (SelectBasics_EntityOwner::*)( const Standard_Integer  ) >(&SelectBasics_EntityOwner::Set),
             R"#(sets the selectable priority of the owner)#"  , py::arg("thePriority"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectBasics_EntityOwner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectBasics_EntityOwner::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<SelectBasics_SensitiveEntity ,opencascade::handle<SelectBasics_SensitiveEntity> ,Py_SelectBasics_SensitiveEntity , Standard_Transient >>(m.attr("SelectBasics_SensitiveEntity"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectBasics_SensitiveEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectBasics_SensitiveEntity::*)() const>(&SelectBasics_SensitiveEntity::DynamicType),
             R"#(None)#" )
        .def("Set",
             (void (SelectBasics_SensitiveEntity::*)( const opencascade::handle<SelectBasics_EntityOwner> &  ) ) static_cast<void (SelectBasics_SensitiveEntity::*)( const opencascade::handle<SelectBasics_EntityOwner> &  ) >(&SelectBasics_SensitiveEntity::Set),
             R"#(Sets owner of the entity)#"  , py::arg("theOwnerId"))
        .def("OwnerId",
             (const opencascade::handle<SelectBasics_EntityOwner> & (SelectBasics_SensitiveEntity::*)() const) static_cast<const opencascade::handle<SelectBasics_EntityOwner> & (SelectBasics_SensitiveEntity::*)() const>(&SelectBasics_SensitiveEntity::OwnerId),
             R"#(Returns pointer to owner of the entity)#" )
        .def("Matches",
             (Standard_Boolean (SelectBasics_SensitiveEntity::*)( SelectBasics_SelectingVolumeManager & ,  SelectBasics_PickResult &  ) ) static_cast<Standard_Boolean (SelectBasics_SensitiveEntity::*)( SelectBasics_SelectingVolumeManager & ,  SelectBasics_PickResult &  ) >(&SelectBasics_SensitiveEntity::Matches),
             R"#(Checks whether the sensitive entity is overlapped by current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("SensitivityFactor",
             (Standard_Integer (SelectBasics_SensitiveEntity::*)() const) static_cast<Standard_Integer (SelectBasics_SensitiveEntity::*)() const>(&SelectBasics_SensitiveEntity::SensitivityFactor),
             R"#(allows a better sensitivity for a specific entity in selection algorithms useful for small sized entities.)#" )
        .def("SetSensitivityFactor",
             (void (SelectBasics_SensitiveEntity::*)( const Standard_Integer  ) ) static_cast<void (SelectBasics_SensitiveEntity::*)( const Standard_Integer  ) >(&SelectBasics_SensitiveEntity::SetSensitivityFactor),
             R"#(Allows to manage sensitivity of a particular sensitive entity)#"  , py::arg("theNewSens"))
        .def("NbSubElements",
             (Standard_Integer (SelectBasics_SensitiveEntity::*)() ) static_cast<Standard_Integer (SelectBasics_SensitiveEntity::*)() >(&SelectBasics_SensitiveEntity::NbSubElements),
             R"#(Returns the number of sub-entities or elements in sensitive entity. Is used to determine if entity is complex and needs to pre-build BVH at the creation of sensitive entity step or is light-weighted so the tree can be build on demand with unnoticeable delay)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (SelectBasics_SensitiveEntity::*)() ) static_cast<Select3D_BndBox3d (SelectBasics_SensitiveEntity::*)() >(&SelectBasics_SensitiveEntity::BoundingBox),
             R"#(Returns bounding box of sensitive entity)#" )
        .def("BVH",
             (void (SelectBasics_SensitiveEntity::*)() ) static_cast<void (SelectBasics_SensitiveEntity::*)() >(&SelectBasics_SensitiveEntity::BVH),
             R"#(Builds BVH tree for sensitive if it is needed)#" )
        .def("Clear",
             (void (SelectBasics_SensitiveEntity::*)() ) static_cast<void (SelectBasics_SensitiveEntity::*)() >(&SelectBasics_SensitiveEntity::Clear),
             R"#(Clears up all the resources and memory allocated)#" )
        .def("HasInitLocation",
             (Standard_Boolean (SelectBasics_SensitiveEntity::*)() const) static_cast<Standard_Boolean (SelectBasics_SensitiveEntity::*)() const>(&SelectBasics_SensitiveEntity::HasInitLocation),
             R"#(Returns true if the shape corresponding to the entity has init location)#" )
        .def("InvInitLocation",
             (gp_GTrsf (SelectBasics_SensitiveEntity::*)() const) static_cast<gp_GTrsf (SelectBasics_SensitiveEntity::*)() const>(&SelectBasics_SensitiveEntity::InvInitLocation),
             R"#(Returns inversed location transformation matrix if the shape corresponding to this entity has init location set. Otherwise, returns identity matrix.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectBasics_SensitiveEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectBasics_SensitiveEntity::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<SelectBasics ,std::unique_ptr<SelectBasics>>(m,"SelectBasics");

    static_cast<py::class_<SelectBasics ,std::unique_ptr<SelectBasics>  >>(m.attr("SelectBasics"))
        .def_static("MaxOwnerPriority_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&SelectBasics::MaxOwnerPriority),
                    R"#(Structure to provide all-in-one result of selection of sensitive for "Matches" method of SelectBasics_SensitiveEntity.)#" )
        .def_static("MinOwnerPriority_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&SelectBasics::MinOwnerPriority),
                    R"#(None)#" )
;

// functions
// ./opencascade/SelectBasics_EntityOwner.hxx
// ./opencascade/SelectBasics_SelectingVolumeManager.hxx
// ./opencascade/SelectBasics_PickResult.hxx
// ./opencascade/SelectBasics_SensitiveEntity.hxx
// ./opencascade/SelectBasics.hxx

// operators

// register typdefs
// ./opencascade/SelectBasics_EntityOwner.hxx
// ./opencascade/SelectBasics_SelectingVolumeManager.hxx
// ./opencascade/SelectBasics_PickResult.hxx
// ./opencascade/SelectBasics_SensitiveEntity.hxx
// ./opencascade/SelectBasics.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
