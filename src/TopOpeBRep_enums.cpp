
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BRepAdaptor_HSurface.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_EdgesFiller.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Bnd_Box.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <IntRes2d_IntersectionPoint.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Bnd_Box.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <IntPatch_ALine.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_GLine.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <Geom_Curve.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <IntPatch_Point.hxx>

// module includes
#include <TopOpeBRep.hxx>
#include <TopOpeBRep_Array1OfLineInter.hxx>
#include <TopOpeBRep_Array1OfVPointInter.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx>
#include <TopOpeBRep_DataMapOfTopolTool.hxx>
#include <TopOpeBRep_define.hxx>
#include <TopOpeBRep_DRAW.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <TopOpeBRep_EdgesFiller.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_HArray1OfLineInter.hxx>
#include <TopOpeBRep_HArray1OfVPointInter.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_ListIteratorOfListOfBipoint.hxx>
#include <TopOpeBRep_ListOfBipoint.hxx>
#include <TopOpeBRep_P2Dstatus.hxx>
#include <TopOpeBRep_PEdgesIntersector.hxx>
#include <TopOpeBRep_PFacesFiller.hxx>
#include <TopOpeBRep_PFacesIntersector.hxx>
#include <TopOpeBRep_PIntRes2d_IntersectionPoint.hxx>
#include <TopOpeBRep_PLineInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_PPntOn2S.hxx>
#include <TopOpeBRep_PThePointOfIntersection.hxx>
#include <TopOpeBRep_SequenceOfPoint2d.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_traceSIFF.hxx>
#include <TopOpeBRep_TypeLineCurve.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>

// template related includes
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_Array1OfLineInter.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_SequenceOfPoint2d.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_Array1OfVPointInter.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRep_DataMapOfTopolTool.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopOpeBRep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopOpeBRep", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TopOpeBRep_P2Dstatus>(m, "TopOpeBRep_P2Dstatus",R"#(None)#")
        .value("TopOpeBRep_P2DUNK",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DUNK)
        .value("TopOpeBRep_P2DINT",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DINT)
        .value("TopOpeBRep_P2DSGF",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DSGF)
        .value("TopOpeBRep_P2DSGL",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DSGL)
        .value("TopOpeBRep_P2DNEW",TopOpeBRep_P2Dstatus::TopOpeBRep_P2DNEW).export_values();
    py::enum_<TopOpeBRep_TypeLineCurve>(m, "TopOpeBRep_TypeLineCurve",R"#(None)#")
        .value("TopOpeBRep_ANALYTIC",TopOpeBRep_TypeLineCurve::TopOpeBRep_ANALYTIC)
        .value("TopOpeBRep_RESTRICTION",TopOpeBRep_TypeLineCurve::TopOpeBRep_RESTRICTION)
        .value("TopOpeBRep_WALKING",TopOpeBRep_TypeLineCurve::TopOpeBRep_WALKING)
        .value("TopOpeBRep_LINE",TopOpeBRep_TypeLineCurve::TopOpeBRep_LINE)
        .value("TopOpeBRep_CIRCLE",TopOpeBRep_TypeLineCurve::TopOpeBRep_CIRCLE)
        .value("TopOpeBRep_ELLIPSE",TopOpeBRep_TypeLineCurve::TopOpeBRep_ELLIPSE)
        .value("TopOpeBRep_PARABOLA",TopOpeBRep_TypeLineCurve::TopOpeBRep_PARABOLA)
        .value("TopOpeBRep_HYPERBOLA",TopOpeBRep_TypeLineCurve::TopOpeBRep_HYPERBOLA)
        .value("TopOpeBRep_OTHERTYPE",TopOpeBRep_TypeLineCurve::TopOpeBRep_OTHERTYPE).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<TopOpeBRep_PointClassifier ,std::unique_ptr<TopOpeBRep_PointClassifier>  >(m,"TopOpeBRep_PointClassifier",R"#(None)#");
    py::class_<TopOpeBRep_Point2d ,std::unique_ptr<TopOpeBRep_Point2d>  >(m,"TopOpeBRep_Point2d",R"#(None)#");
    py::class_<TopOpeBRep_Hctxff2d ,opencascade::handle<TopOpeBRep_Hctxff2d>  , Standard_Transient >(m,"TopOpeBRep_Hctxff2d",R"#()#");
    py::class_<TopOpeBRep_WPointInterIterator ,std::unique_ptr<TopOpeBRep_WPointInterIterator>  >(m,"TopOpeBRep_WPointInterIterator",R"#(None)#");
    py::class_<TopOpeBRep ,std::unique_ptr<TopOpeBRep>  >(m,"TopOpeBRep",R"#(This package provides the topological operations on the BRep data structure.)#");
    py::class_<TopOpeBRep_ShapeScanner ,std::unique_ptr<TopOpeBRep_ShapeScanner>  >(m,"TopOpeBRep_ShapeScanner",R"#(Find, among the subshapes SS of a reference shape RS, the ones which 3D box interfers with the box of a shape S (SS and S are of the same type).)#");
    py::class_<TopOpeBRep_HArray1OfLineInter ,std::unique_ptr<TopOpeBRep_HArray1OfLineInter>  >(m,"TopOpeBRep_HArray1OfLineInter",R"#()#");
    py::class_<TopOpeBRep_FacesIntersector ,std::unique_ptr<TopOpeBRep_FacesIntersector>  >(m,"TopOpeBRep_FacesIntersector",R"#(Describes the intersection of two faces.)#");
    py::class_<TopOpeBRep_WPointInter ,std::unique_ptr<TopOpeBRep_WPointInter>  >(m,"TopOpeBRep_WPointInter",R"#(None)#");
    py::class_<TopOpeBRep_FaceEdgeIntersector ,std::unique_ptr<TopOpeBRep_FaceEdgeIntersector>  >(m,"TopOpeBRep_FaceEdgeIntersector",R"#(Describes the intersection of a face and an edge.)#");
    py::class_<TopOpeBRep_DSFiller ,std::unique_ptr<TopOpeBRep_DSFiller>  >(m,"TopOpeBRep_DSFiller",R"#(Provides class methods to fill a datastructure with results of intersections.)#");
    py::class_<TopOpeBRep_Bipoint ,std::unique_ptr<TopOpeBRep_Bipoint>  >(m,"TopOpeBRep_Bipoint",R"#(None)#");
    py::class_<TopOpeBRep_LineInter ,std::unique_ptr<TopOpeBRep_LineInter>  >(m,"TopOpeBRep_LineInter",R"#(None)#");
    py::class_<TopOpeBRep_FFTransitionTool ,std::unique_ptr<TopOpeBRep_FFTransitionTool>  >(m,"TopOpeBRep_FFTransitionTool",R"#(None)#");
    py::class_<TopOpeBRep_HArray1OfVPointInter ,std::unique_ptr<TopOpeBRep_HArray1OfVPointInter>  >(m,"TopOpeBRep_HArray1OfVPointInter",R"#()#");
    py::class_<TopOpeBRep_FFDumper ,opencascade::handle<TopOpeBRep_FFDumper>  , Standard_Transient >(m,"TopOpeBRep_FFDumper",R"#()#");
    py::class_<TopOpeBRep_PointGeomTool ,std::unique_ptr<TopOpeBRep_PointGeomTool>  >(m,"TopOpeBRep_PointGeomTool",R"#(Provide services needed by the Fillers)#");
    py::class_<TopOpeBRep_EdgesFiller ,std::unique_ptr<TopOpeBRep_EdgesFiller>  >(m,"TopOpeBRep_EdgesFiller",R"#(Fills a TopOpeBRepDS_DataStructure with Edge/Edge instersection data described by TopOpeBRep_EdgesIntersector.)#");
    py::class_<TopOpeBRep_VPointInter ,std::unique_ptr<TopOpeBRep_VPointInter>  >(m,"TopOpeBRep_VPointInter",R"#(None)#");
    py::class_<TopOpeBRep_EdgesIntersector ,std::unique_ptr<TopOpeBRep_EdgesIntersector>  >(m,"TopOpeBRep_EdgesIntersector",R"#(Describes the intersection of two edges on the same surface)#");
    py::class_<TopOpeBRep_Hctxee2d ,opencascade::handle<TopOpeBRep_Hctxee2d>  , Standard_Transient >(m,"TopOpeBRep_Hctxee2d",R"#()#");
    py::class_<TopOpeBRep_FaceEdgeFiller ,std::unique_ptr<TopOpeBRep_FaceEdgeFiller>  >(m,"TopOpeBRep_FaceEdgeFiller",R"#(None)#");
    py::class_<TopOpeBRep_VPointInterClassifier ,std::unique_ptr<TopOpeBRep_VPointInterClassifier>  >(m,"TopOpeBRep_VPointInterClassifier",R"#(None)#");
    py::class_<TopOpeBRep_ShapeIntersector ,std::unique_ptr<TopOpeBRep_ShapeIntersector>  >(m,"TopOpeBRep_ShapeIntersector",R"#(Intersect two shapes.)#");
    py::class_<TopOpeBRep_GeomTool ,std::unique_ptr<TopOpeBRep_GeomTool>  >(m,"TopOpeBRep_GeomTool",R"#(Provide services needed by the DSFiller)#");
    py::class_<TopOpeBRep_FacesFiller ,std::unique_ptr<TopOpeBRep_FacesFiller>  >(m,"TopOpeBRep_FacesFiller",R"#(Fills a DataStructure from TopOpeBRepDS with the result of Face/Face instersection described by FacesIntersector from TopOpeBRep. if the faces have same Domain, record it in the DS. else record lines and points and attach list of interferences to the faces, the lines and the edges.)#");
    py::class_<TopOpeBRep_VPointInterIterator ,std::unique_ptr<TopOpeBRep_VPointInterIterator>  >(m,"TopOpeBRep_VPointInterIterator",R"#(None)#");
    py::class_<TopOpeBRep_ShapeIntersector2d ,std::unique_ptr<TopOpeBRep_ShapeIntersector2d>  >(m,"TopOpeBRep_ShapeIntersector2d",R"#(Intersect two shapes.)#");

// pre-register typdefs
// ./opencascade/TopOpeBRep_DRAW.hxx
// ./opencascade/TopOpeBRep_PointClassifier.hxx
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
    preregister_template_NCollection_List<TopOpeBRep_Bipoint>(m,"TopOpeBRep_ListOfBipoint");  
// ./opencascade/TopOpeBRep_HArray1OfVPointInter.hxx
// ./opencascade/TopOpeBRep_Array1OfLineInter.hxx
    preregister_template_NCollection_Array1<TopOpeBRep_LineInter>(m,"TopOpeBRep_Array1OfLineInter");  
// ./opencascade/TopOpeBRep_Point2d.hxx
// ./opencascade/TopOpeBRep_FaceEdgeFiller.hxx
// ./opencascade/TopOpeBRep_Hctxff2d.hxx
// ./opencascade/TopOpeBRep_FFDumper.hxx
// ./opencascade/TopOpeBRep_WPointInterIterator.hxx
// ./opencascade/TopOpeBRep_PFacesFiller.hxx
// ./opencascade/TopOpeBRep_FacesFiller.hxx
// ./opencascade/TopOpeBRep_traceSIFF.hxx
// ./opencascade/TopOpeBRep.hxx
// ./opencascade/TopOpeBRep_PointGeomTool.hxx
// ./opencascade/TopOpeBRep_ShapeScanner.hxx
// ./opencascade/TopOpeBRep_PEdgesIntersector.hxx
// ./opencascade/TopOpeBRep_define.hxx
// ./opencascade/TopOpeBRep_VPointInterClassifier.hxx
// ./opencascade/TopOpeBRep_HArray1OfLineInter.hxx
// ./opencascade/TopOpeBRep_EdgesFiller.hxx
// ./opencascade/TopOpeBRep_FacesIntersector.hxx
// ./opencascade/TopOpeBRep_ShapeIntersector2d.hxx
// ./opencascade/TopOpeBRep_PIntRes2d_IntersectionPoint.hxx
// ./opencascade/TopOpeBRep_WPointInter.hxx
// ./opencascade/TopOpeBRep_VPointInter.hxx
// ./opencascade/TopOpeBRep_FaceEdgeIntersector.hxx
// ./opencascade/TopOpeBRep_P2Dstatus.hxx
// ./opencascade/TopOpeBRep_TypeLineCurve.hxx
// ./opencascade/TopOpeBRep_ShapeIntersector.hxx
// ./opencascade/TopOpeBRep_DSFiller.hxx
// ./opencascade/TopOpeBRep_SequenceOfPoint2d.hxx
    preregister_template_NCollection_Sequence<TopOpeBRep_Point2d>(m,"TopOpeBRep_SequenceOfPoint2d");  
// ./opencascade/TopOpeBRep_PFacesIntersector.hxx
// ./opencascade/TopOpeBRep_EdgesIntersector.hxx
// ./opencascade/TopOpeBRep_ListIteratorOfListOfBipoint.hxx
// ./opencascade/TopOpeBRep_PPntOn2S.hxx
// ./opencascade/TopOpeBRep_Bipoint.hxx
// ./opencascade/TopOpeBRep_PLineInter.hxx
// ./opencascade/TopOpeBRep_Array1OfVPointInter.hxx
    preregister_template_NCollection_Array1<TopOpeBRep_VPointInter>(m,"TopOpeBRep_Array1OfVPointInter");  
// ./opencascade/TopOpeBRep_VPointInterIterator.hxx
// ./opencascade/TopOpeBRep_LineInter.hxx
// ./opencascade/TopOpeBRep_DataMapOfTopolTool.hxx
// ./opencascade/TopOpeBRep_Hctxee2d.hxx
// ./opencascade/TopOpeBRep_FFTransitionTool.hxx
// ./opencascade/TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx
// ./opencascade/TopOpeBRep_GeomTool.hxx
// ./opencascade/TopOpeBRep_PThePointOfIntersection.hxx

};

// user-defined post-inclusion per module

// user-defined post
