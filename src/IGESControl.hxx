#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <ShapeExtend_WireData.hxx>
#include <Transfer_FinderProcess.hxx>
#include <IGESData_IGESModel.hxx>
#include <TopoDS_Shape.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <XSControl_WorkSession.hxx>
#include <IGESData_IGESModel.hxx>

// module includes
#include <IGESControl_IGESBoundary.hxx>
#include <IGESControl_Writer.hxx>
#include <IGESControl_ActorWrite.hxx>
#include <IGESControl_AlgoContainer.hxx>
#include <IGESControl_Controller.hxx>
#include <IGESControl_ToolContainer.hxx>
#include <IGESControl_Reader.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IGESControl_IGESBoundary.hxx
// ./opencascade/IGESControl_Writer.hxx
// ./opencascade/IGESControl_ActorWrite.hxx
// ./opencascade/IGESControl_AlgoContainer.hxx
// ./opencascade/IGESControl_Controller.hxx
// ./opencascade/IGESControl_ToolContainer.hxx
// ./opencascade/IGESControl_Reader.hxx

// user-defined post
