
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_TextureParams.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_PriorityDefinitionError.hxx>
#include <Graphic3d_StructureDefinitionError.hxx>
#include <Graphic3d_TransformError.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <Graphic3d_TransformError.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_CView.hxx>
#include <Image_PixMap.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_StructureManager.hxx>

// module includes
#include <Graphic3d_AlphaMode.hxx>
#include <Graphic3d_ArrayOfPoints.hxx>
#include <Graphic3d_ArrayOfPolygons.hxx>
#include <Graphic3d_ArrayOfPolylines.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Graphic3d_ArrayOfQuadrangles.hxx>
#include <Graphic3d_ArrayOfQuadrangleStrips.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangleFans.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <Graphic3d_ArrayOfTriangleStrips.hxx>
#include <Graphic3d_AspectFillArea3d.hxx>
#include <Graphic3d_AspectLine3d.hxx>
#include <Graphic3d_AspectMarker3d.hxx>
#include <Graphic3d_AspectText3d.hxx>
#include <Graphic3d_AspectTextDefinitionError.hxx>
#include <Graphic3d_BndBox3d.hxx>
#include <Graphic3d_BndBox4d.hxx>
#include <Graphic3d_BndBox4f.hxx>
#include <Graphic3d_BoundBuffer.hxx>
#include <Graphic3d_BSDF.hxx>
#include <Graphic3d_Buffer.hxx>
#include <Graphic3d_BufferType.hxx>
#include <Graphic3d_Camera.hxx>
#include <Graphic3d_CameraTile.hxx>
#include <Graphic3d_CappingFlags.hxx>
#include <Graphic3d_CLight.hxx>
#include <Graphic3d_ClipPlane.hxx>
#include <Graphic3d_CStructure.hxx>
#include <Graphic3d_CTexture.hxx>
#include <Graphic3d_CView.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Graphic3d_DiagnosticInfo.hxx>
#include <Graphic3d_ExportFormat.hxx>
#include <Graphic3d_GraduatedTrihedron.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_Group.hxx>
#include <Graphic3d_GroupAspect.hxx>
#include <Graphic3d_GroupDefinitionError.hxx>
#include <Graphic3d_HatchStyle.hxx>
#include <Graphic3d_HighlightStyle.hxx>
#include <Graphic3d_HorizontalTextAlignment.hxx>
#include <Graphic3d_IndexBuffer.hxx>
#include <Graphic3d_IndexedMapOfAddress.hxx>
#include <Graphic3d_LevelOfTextureAnisotropy.hxx>
#include <Graphic3d_LightSet.hxx>
#include <Graphic3d_MapIteratorOfMapOfStructure.hxx>
#include <Graphic3d_MapOfObject.hxx>
#include <Graphic3d_MapOfStructure.hxx>
#include <Graphic3d_MarkerImage.hxx>
#include <Graphic3d_Mat4.hxx>
#include <Graphic3d_Mat4d.hxx>
#include <Graphic3d_MaterialAspect.hxx>
#include <Graphic3d_MaterialDefinitionError.hxx>
#include <Graphic3d_NameOfMaterial.hxx>
#include <Graphic3d_NameOfTexture1D.hxx>
#include <Graphic3d_NameOfTexture2D.hxx>
#include <Graphic3d_NameOfTextureEnv.hxx>
#include <Graphic3d_NameOfTexturePlane.hxx>
#include <Graphic3d_NMapOfTransient.hxx>
#include <Graphic3d_PolygonOffset.hxx>
#include <Graphic3d_PresentationAttributes.hxx>
#include <Graphic3d_PriorityDefinitionError.hxx>
#include <Graphic3d_RenderingMode.hxx>
#include <Graphic3d_RenderingParams.hxx>
#include <Graphic3d_RenderTransparentMethod.hxx>
#include <Graphic3d_SequenceOfGroup.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>
#include <Graphic3d_SequenceOfStructure.hxx>
#include <Graphic3d_ShaderAttribute.hxx>
#include <Graphic3d_ShaderObject.hxx>
#include <Graphic3d_ShaderProgram.hxx>
#include <Graphic3d_ShaderVariable.hxx>
#include <Graphic3d_SortType.hxx>
#include <Graphic3d_StereoMode.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_StructureDefinitionError.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_TextPath.hxx>
#include <Graphic3d_Texture1D.hxx>
#include <Graphic3d_Texture1Dmanual.hxx>
#include <Graphic3d_Texture1Dsegment.hxx>
#include <Graphic3d_Texture2D.hxx>
#include <Graphic3d_Texture2Dmanual.hxx>
#include <Graphic3d_Texture2Dplane.hxx>
#include <Graphic3d_TextureEnv.hxx>
#include <Graphic3d_TextureMap.hxx>
#include <Graphic3d_TextureParams.hxx>
#include <Graphic3d_TextureRoot.hxx>
#include <Graphic3d_TextureSet.hxx>
#include <Graphic3d_TextureUnit.hxx>
#include <Graphic3d_ToneMappingMethod.hxx>
#include <Graphic3d_TransformError.hxx>
#include <Graphic3d_TransformPers.hxx>
#include <Graphic3d_TransformUtils.hxx>
#include <Graphic3d_TransModeFlags.hxx>
#include <Graphic3d_TypeOfAnswer.hxx>
#include <Graphic3d_TypeOfBackfacingModel.hxx>
#include <Graphic3d_TypeOfBackground.hxx>
#include <Graphic3d_TypeOfComposition.hxx>
#include <Graphic3d_TypeOfConnection.hxx>
#include <Graphic3d_TypeOfLightSource.hxx>
#include <Graphic3d_TypeOfLimit.hxx>
#include <Graphic3d_TypeOfMaterial.hxx>
#include <Graphic3d_TypeOfPrimitiveArray.hxx>
#include <Graphic3d_TypeOfReflection.hxx>
#include <Graphic3d_TypeOfShaderObject.hxx>
#include <Graphic3d_TypeOfShadingModel.hxx>
#include <Graphic3d_TypeOfStructure.hxx>
#include <Graphic3d_TypeOfTexture.hxx>
#include <Graphic3d_TypeOfTextureFilter.hxx>
#include <Graphic3d_TypeOfTextureMode.hxx>
#include <Graphic3d_TypeOfVisualization.hxx>
#include <Graphic3d_Vec.hxx>
#include <Graphic3d_Vec2.hxx>
#include <Graphic3d_Vec3.hxx>
#include <Graphic3d_Vec4.hxx>
#include <Graphic3d_Vertex.hxx>
#include <Graphic3d_VerticalTextAlignment.hxx>
#include <Graphic3d_ViewAffinity.hxx>
#include <Graphic3d_WorldViewProjState.hxx>
#include <Graphic3d_ZLayerId.hxx>
#include <Graphic3d_ZLayerSettings.hxx>

// template related includes
// ./opencascade/Graphic3d_Mat4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_SequenceOfGroup.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Camera.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_BndBox4d.hxx
#include "BVH.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_ShaderVariable.hxx
#include "Graphic3d.hxx"
// ./opencascade/Graphic3d_Buffer.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec4.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_SequenceOfStructure.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec3.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec3.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec3.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec3.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_BndBox3d.hxx
#include "BVH.hxx"
// ./opencascade/Graphic3d_Mat4d.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_Vec2.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_BndBox4f.hxx
#include "BVH.hxx"
// ./opencascade/Graphic3d_ShaderProgram.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_ShaderProgram.hxx
#include "NCollection.hxx"
// ./opencascade/Graphic3d_ShaderProgram.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Graphic3d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Graphic3d", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Graphic3d_ZLayerSetting>(m, "Graphic3d_ZLayerSetting",R"#(None)#")
        .value("Graphic3d_ZLayerDepthTest",Graphic3d_ZLayerSetting::Graphic3d_ZLayerDepthTest)
        .value("Graphic3d_ZLayerDepthWrite",Graphic3d_ZLayerSetting::Graphic3d_ZLayerDepthWrite)
        .value("Graphic3d_ZLayerDepthClear",Graphic3d_ZLayerSetting::Graphic3d_ZLayerDepthClear)
        .value("Graphic3d_ZLayerDepthOffset",Graphic3d_ZLayerSetting::Graphic3d_ZLayerDepthOffset).export_values();
    py::enum_<Graphic3d_TypeOfBackfacingModel>(m, "Graphic3d_TypeOfBackfacingModel",R"#(Modes of display of back faces in the view)#")
        .value("Graphic3d_TOBM_AUTOMATIC",Graphic3d_TypeOfBackfacingModel::Graphic3d_TOBM_AUTOMATIC)
        .value("Graphic3d_TOBM_FORCE",Graphic3d_TypeOfBackfacingModel::Graphic3d_TOBM_FORCE)
        .value("Graphic3d_TOBM_DISABLE",Graphic3d_TypeOfBackfacingModel::Graphic3d_TOBM_DISABLE).export_values();
    py::enum_<Graphic3d_ExportFormat>(m, "Graphic3d_ExportFormat",R"#(None)#")
        .value("Graphic3d_EF_PostScript",Graphic3d_ExportFormat::Graphic3d_EF_PostScript)
        .value("Graphic3d_EF_EnhPostScript",Graphic3d_ExportFormat::Graphic3d_EF_EnhPostScript)
        .value("Graphic3d_EF_TEX",Graphic3d_ExportFormat::Graphic3d_EF_TEX)
        .value("Graphic3d_EF_PDF",Graphic3d_ExportFormat::Graphic3d_EF_PDF)
        .value("Graphic3d_EF_SVG",Graphic3d_ExportFormat::Graphic3d_EF_SVG)
        .value("Graphic3d_EF_PGF",Graphic3d_ExportFormat::Graphic3d_EF_PGF)
        .value("Graphic3d_EF_EMF",Graphic3d_ExportFormat::Graphic3d_EF_EMF).export_values();
    py::enum_<Graphic3d_NameOfTexturePlane>(m, "Graphic3d_NameOfTexturePlane",R"#(Type of the texture projection plane for both S and T texture coordinate.)#")
        .value("Graphic3d_NOTP_XY",Graphic3d_NameOfTexturePlane::Graphic3d_NOTP_XY)
        .value("Graphic3d_NOTP_YZ",Graphic3d_NameOfTexturePlane::Graphic3d_NOTP_YZ)
        .value("Graphic3d_NOTP_ZX",Graphic3d_NameOfTexturePlane::Graphic3d_NOTP_ZX)
        .value("Graphic3d_NOTP_UNKNOWN",Graphic3d_NameOfTexturePlane::Graphic3d_NOTP_UNKNOWN).export_values();
    py::enum_<Graphic3d_TypeOfBackground>(m, "Graphic3d_TypeOfBackground",R"#(Describes type of view background.)#")
        .value("Graphic3d_TOB_NONE",Graphic3d_TypeOfBackground::Graphic3d_TOB_NONE)
        .value("Graphic3d_TOB_GRADIENT",Graphic3d_TypeOfBackground::Graphic3d_TOB_GRADIENT)
        .value("Graphic3d_TOB_TEXTURE",Graphic3d_TypeOfBackground::Graphic3d_TOB_TEXTURE).export_values();
    py::enum_<Graphic3d_TypeOfTextureFilter>(m, "Graphic3d_TypeOfTextureFilter",R"#(Type of the texture filter. Notice that for textures without mipmaps linear interpolation will be used instead of TOTF_BILINEAR and TOTF_TRILINEAR.)#")
        .value("Graphic3d_TOTF_NEAREST",Graphic3d_TypeOfTextureFilter::Graphic3d_TOTF_NEAREST)
        .value("Graphic3d_TOTF_BILINEAR",Graphic3d_TypeOfTextureFilter::Graphic3d_TOTF_BILINEAR)
        .value("Graphic3d_TOTF_TRILINEAR",Graphic3d_TypeOfTextureFilter::Graphic3d_TOTF_TRILINEAR).export_values();
    py::enum_<Graphic3d_DiagnosticInfo>(m, "Graphic3d_DiagnosticInfo",R"#(Diagnostic info categories bit flags.)#")
        .value("Graphic3d_DiagnosticInfo_Device",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_Device)
        .value("Graphic3d_DiagnosticInfo_FrameBuffer",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_FrameBuffer)
        .value("Graphic3d_DiagnosticInfo_Limits",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_Limits)
        .value("Graphic3d_DiagnosticInfo_Memory",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_Memory)
        .value("Graphic3d_DiagnosticInfo_NativePlatform",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_NativePlatform)
        .value("Graphic3d_DiagnosticInfo_Extensions",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_Extensions)
        .value("Graphic3d_DiagnosticInfo_Short",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_Short)
        .value("Graphic3d_DiagnosticInfo_Basic",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_Basic)
        .value("Graphic3d_DiagnosticInfo_Complete",Graphic3d_DiagnosticInfo::Graphic3d_DiagnosticInfo_Complete).export_values();
    py::enum_<Graphic3d_TypeOfConnection>(m, "Graphic3d_TypeOfConnection",R"#(To manage the connections between the structures.)#")
        .value("Graphic3d_TOC_ANCESTOR",Graphic3d_TypeOfConnection::Graphic3d_TOC_ANCESTOR)
        .value("Graphic3d_TOC_DESCENDANT",Graphic3d_TypeOfConnection::Graphic3d_TOC_DESCENDANT).export_values();
    py::enum_<Graphic3d_VerticalTextAlignment>(m, "Graphic3d_VerticalTextAlignment",R"#(Defines the vertical position of the text relative to its anchor.)#")
        .value("Graphic3d_VTA_BOTTOM",Graphic3d_VerticalTextAlignment::Graphic3d_VTA_BOTTOM)
        .value("Graphic3d_VTA_CENTER",Graphic3d_VerticalTextAlignment::Graphic3d_VTA_CENTER)
        .value("Graphic3d_VTA_TOP",Graphic3d_VerticalTextAlignment::Graphic3d_VTA_TOP)
        .value("Graphic3d_VTA_TOPFIRSTLINE",Graphic3d_VerticalTextAlignment::Graphic3d_VTA_TOPFIRSTLINE).export_values();
    py::enum_<Graphic3d_TypeOfAnswer>(m, "Graphic3d_TypeOfAnswer",R"#(The answer of the method AcceptDisplay AcceptDisplay means is it possible to display the specified structure in the specified view ? TOA_YES yes TOA_NO no TOA_COMPUTE yes but we have to compute the representation)#")
        .value("Graphic3d_TOA_YES",Graphic3d_TypeOfAnswer::Graphic3d_TOA_YES)
        .value("Graphic3d_TOA_NO",Graphic3d_TypeOfAnswer::Graphic3d_TOA_NO)
        .value("Graphic3d_TOA_COMPUTE",Graphic3d_TypeOfAnswer::Graphic3d_TOA_COMPUTE).export_values();
    py::enum_<Graphic3d_TextureUnit>(m, "Graphic3d_TextureUnit",R"#(Texture unit.)#")
        .value("Graphic3d_TextureUnit_0",Graphic3d_TextureUnit::Graphic3d_TextureUnit_0)
        .value("Graphic3d_TextureUnit_1",Graphic3d_TextureUnit::Graphic3d_TextureUnit_1)
        .value("Graphic3d_TextureUnit_2",Graphic3d_TextureUnit::Graphic3d_TextureUnit_2)
        .value("Graphic3d_TextureUnit_3",Graphic3d_TextureUnit::Graphic3d_TextureUnit_3)
        .value("Graphic3d_TextureUnit_4",Graphic3d_TextureUnit::Graphic3d_TextureUnit_4)
        .value("Graphic3d_TextureUnit_5",Graphic3d_TextureUnit::Graphic3d_TextureUnit_5)
        .value("Graphic3d_TextureUnit_6",Graphic3d_TextureUnit::Graphic3d_TextureUnit_6)
        .value("Graphic3d_TextureUnit_7",Graphic3d_TextureUnit::Graphic3d_TextureUnit_7)
        .value("Graphic3d_TextureUnit_8",Graphic3d_TextureUnit::Graphic3d_TextureUnit_8)
        .value("Graphic3d_TextureUnit_9",Graphic3d_TextureUnit::Graphic3d_TextureUnit_9)
        .value("Graphic3d_TextureUnit_10",Graphic3d_TextureUnit::Graphic3d_TextureUnit_10)
        .value("Graphic3d_TextureUnit_11",Graphic3d_TextureUnit::Graphic3d_TextureUnit_11)
        .value("Graphic3d_TextureUnit_12",Graphic3d_TextureUnit::Graphic3d_TextureUnit_12)
        .value("Graphic3d_TextureUnit_13",Graphic3d_TextureUnit::Graphic3d_TextureUnit_13)
        .value("Graphic3d_TextureUnit_14",Graphic3d_TextureUnit::Graphic3d_TextureUnit_14)
        .value("Graphic3d_TextureUnit_15",Graphic3d_TextureUnit::Graphic3d_TextureUnit_15)
        .value("Graphic3d_TextureUnit_BaseColor",Graphic3d_TextureUnit::Graphic3d_TextureUnit_BaseColor).export_values();
    m.attr("Graphic3d_TextureUnit_NB") = py::cast(int(Graphic3d_TextureUnit_NB));
    py::enum_<Graphic3d_TypeOfPrimitiveArray>(m, "Graphic3d_TypeOfPrimitiveArray",R"#(The type of primitive array in a group in a structure.)#")
        .value("Graphic3d_TOPA_UNDEFINED",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_UNDEFINED)
        .value("Graphic3d_TOPA_POINTS",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_POINTS)
        .value("Graphic3d_TOPA_SEGMENTS",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_SEGMENTS)
        .value("Graphic3d_TOPA_POLYLINES",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_POLYLINES)
        .value("Graphic3d_TOPA_TRIANGLES",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_TRIANGLES)
        .value("Graphic3d_TOPA_TRIANGLESTRIPS",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_TRIANGLESTRIPS)
        .value("Graphic3d_TOPA_TRIANGLEFANS",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_TRIANGLEFANS)
        .value("Graphic3d_TOPA_LINES_ADJACENCY",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_LINES_ADJACENCY)
        .value("Graphic3d_TOPA_LINE_STRIP_ADJACENCY",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_LINE_STRIP_ADJACENCY)
        .value("Graphic3d_TOPA_TRIANGLES_ADJACENCY",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_TRIANGLES_ADJACENCY)
        .value("Graphic3d_TOPA_TRIANGLE_STRIP_ADJACENCY",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_TRIANGLE_STRIP_ADJACENCY)
        .value("Graphic3d_TOPA_QUADRANGLES",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_QUADRANGLES)
        .value("Graphic3d_TOPA_QUADRANGLESTRIPS",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_QUADRANGLESTRIPS)
        .value("Graphic3d_TOPA_POLYGONS",Graphic3d_TypeOfPrimitiveArray::Graphic3d_TOPA_POLYGONS).export_values();
    py::enum_<Graphic3d_RenderingMode>(m, "Graphic3d_RenderingMode",R"#(Describes rendering modes. - RM_RASTERIZATION: enables OpenGL rasterization mode; - RM_RAYTRACING: enables GPU ray-tracing mode.)#")
        .value("Graphic3d_RM_RASTERIZATION",Graphic3d_RenderingMode::Graphic3d_RM_RASTERIZATION)
        .value("Graphic3d_RM_RAYTRACING",Graphic3d_RenderingMode::Graphic3d_RM_RAYTRACING).export_values();
    py::enum_<Graphic3d_TypeOfShadingModel>(m, "Graphic3d_TypeOfShadingModel",R"#(Definition of the color shading model.)#")
        .value("Graphic3d_TOSM_DEFAULT",Graphic3d_TypeOfShadingModel::Graphic3d_TOSM_DEFAULT)
        .value("Graphic3d_TOSM_UNLIT",Graphic3d_TypeOfShadingModel::Graphic3d_TOSM_UNLIT)
        .value("Graphic3d_TOSM_FACET",Graphic3d_TypeOfShadingModel::Graphic3d_TOSM_FACET)
        .value("Graphic3d_TOSM_VERTEX",Graphic3d_TypeOfShadingModel::Graphic3d_TOSM_VERTEX)
        .value("Graphic3d_TOSM_FRAGMENT",Graphic3d_TypeOfShadingModel::Graphic3d_TOSM_FRAGMENT)
        .value("Graphic3d_TOSM_NONE",Graphic3d_TypeOfShadingModel::Graphic3d_TOSM_NONE)
        .value("V3d_COLOR",Graphic3d_TypeOfShadingModel::V3d_COLOR)
        .value("V3d_FLAT",Graphic3d_TypeOfShadingModel::V3d_FLAT)
        .value("V3d_GOURAUD",Graphic3d_TypeOfShadingModel::V3d_GOURAUD)
        .value("V3d_PHONG",Graphic3d_TypeOfShadingModel::V3d_PHONG).export_values();
    m.attr("Graphic3d_TypeOfShadingModel_NB") = py::cast(int(Graphic3d_TypeOfShadingModel_NB));
    py::enum_<Graphic3d_AlphaMode>(m, "Graphic3d_AlphaMode",R"#(Defines how alpha value of base color / texture should be treated.)#")
        .value("Graphic3d_AlphaMode_Opaque",Graphic3d_AlphaMode::Graphic3d_AlphaMode_Opaque)
        .value("Graphic3d_AlphaMode_Mask",Graphic3d_AlphaMode::Graphic3d_AlphaMode_Mask)
        .value("Graphic3d_AlphaMode_Blend",Graphic3d_AlphaMode::Graphic3d_AlphaMode_Blend)
        .value("Graphic3d_AlphaMode_BlendAuto",Graphic3d_AlphaMode::Graphic3d_AlphaMode_BlendAuto).export_values();
    py::enum_<Graphic3d_HorizontalTextAlignment>(m, "Graphic3d_HorizontalTextAlignment",R"#(Defines the horizontal position of the text relative to its anchor.)#")
        .value("Graphic3d_HTA_LEFT",Graphic3d_HorizontalTextAlignment::Graphic3d_HTA_LEFT)
        .value("Graphic3d_HTA_CENTER",Graphic3d_HorizontalTextAlignment::Graphic3d_HTA_CENTER)
        .value("Graphic3d_HTA_RIGHT",Graphic3d_HorizontalTextAlignment::Graphic3d_HTA_RIGHT).export_values();
    py::enum_<Graphic3d_TypeOfMaterial>(m, "Graphic3d_TypeOfMaterial",R"#(Types of materials specifies if a material can change color.)#")
        .value("Graphic3d_MATERIAL_ASPECT",Graphic3d_TypeOfMaterial::Graphic3d_MATERIAL_ASPECT)
        .value("Graphic3d_MATERIAL_PHYSIC",Graphic3d_TypeOfMaterial::Graphic3d_MATERIAL_PHYSIC).export_values();
    py::enum_<Graphic3d_TypeOfReflection>(m, "Graphic3d_TypeOfReflection",R"#(Nature of the reflection of a material.)#")
        .value("Graphic3d_TOR_AMBIENT",Graphic3d_TypeOfReflection::Graphic3d_TOR_AMBIENT)
        .value("Graphic3d_TOR_DIFFUSE",Graphic3d_TypeOfReflection::Graphic3d_TOR_DIFFUSE)
        .value("Graphic3d_TOR_SPECULAR",Graphic3d_TypeOfReflection::Graphic3d_TOR_SPECULAR)
        .value("Graphic3d_TOR_EMISSION",Graphic3d_TypeOfReflection::Graphic3d_TOR_EMISSION).export_values();
    m.attr("Graphic3d_TypeOfReflection_NB") = py::cast(int(Graphic3d_TypeOfReflection_NB));
    py::enum_<Graphic3d_TypeOfAttribute>(m, "Graphic3d_TypeOfAttribute",R"#(Type of attribute in Vertex Buffer)#")
        .value("Graphic3d_TOA_POS",Graphic3d_TypeOfAttribute::Graphic3d_TOA_POS)
        .value("Graphic3d_TOA_NORM",Graphic3d_TypeOfAttribute::Graphic3d_TOA_NORM)
        .value("Graphic3d_TOA_UV",Graphic3d_TypeOfAttribute::Graphic3d_TOA_UV)
        .value("Graphic3d_TOA_COLOR",Graphic3d_TypeOfAttribute::Graphic3d_TOA_COLOR)
        .value("Graphic3d_TOA_CUSTOM",Graphic3d_TypeOfAttribute::Graphic3d_TOA_CUSTOM).export_values();
    py::enum_<Graphic3d_TypeOfData>(m, "Graphic3d_TypeOfData",R"#(Type of the element in Vertex or Index Buffer)#")
        .value("Graphic3d_TOD_USHORT",Graphic3d_TypeOfData::Graphic3d_TOD_USHORT)
        .value("Graphic3d_TOD_UINT",Graphic3d_TypeOfData::Graphic3d_TOD_UINT)
        .value("Graphic3d_TOD_VEC2",Graphic3d_TypeOfData::Graphic3d_TOD_VEC2)
        .value("Graphic3d_TOD_VEC3",Graphic3d_TypeOfData::Graphic3d_TOD_VEC3)
        .value("Graphic3d_TOD_VEC4",Graphic3d_TypeOfData::Graphic3d_TOD_VEC4)
        .value("Graphic3d_TOD_VEC4UB",Graphic3d_TypeOfData::Graphic3d_TOD_VEC4UB)
        .value("Graphic3d_TOD_FLOAT",Graphic3d_TypeOfData::Graphic3d_TOD_FLOAT).export_values();
    py::enum_<Graphic3d_TypeOfLightSource>(m, "Graphic3d_TypeOfLightSource",R"#(Definition of all the type of light source.)#")
        .value("Graphic3d_TOLS_AMBIENT",Graphic3d_TypeOfLightSource::Graphic3d_TOLS_AMBIENT)
        .value("Graphic3d_TOLS_DIRECTIONAL",Graphic3d_TypeOfLightSource::Graphic3d_TOLS_DIRECTIONAL)
        .value("Graphic3d_TOLS_POSITIONAL",Graphic3d_TypeOfLightSource::Graphic3d_TOLS_POSITIONAL)
        .value("Graphic3d_TOLS_SPOT",Graphic3d_TypeOfLightSource::Graphic3d_TOLS_SPOT)
        .value("V3d_AMBIENT",Graphic3d_TypeOfLightSource::V3d_AMBIENT)
        .value("V3d_DIRECTIONAL",Graphic3d_TypeOfLightSource::V3d_DIRECTIONAL)
        .value("V3d_POSITIONAL",Graphic3d_TypeOfLightSource::V3d_POSITIONAL)
        .value("V3d_SPOT",Graphic3d_TypeOfLightSource::V3d_SPOT).export_values();
    m.attr("Graphic3d_TypeOfLightSource_NB") = py::cast(int(Graphic3d_TypeOfLightSource_NB));
    py::enum_<Graphic3d_TypeOfStructure>(m, "Graphic3d_TypeOfStructure",R"#(Structural attribute indicating if it can be displayed in wireframe, shadow mode, or both.)#")
        .value("Graphic3d_TOS_WIREFRAME",Graphic3d_TypeOfStructure::Graphic3d_TOS_WIREFRAME)
        .value("Graphic3d_TOS_SHADING",Graphic3d_TypeOfStructure::Graphic3d_TOS_SHADING)
        .value("Graphic3d_TOS_COMPUTED",Graphic3d_TypeOfStructure::Graphic3d_TOS_COMPUTED)
        .value("Graphic3d_TOS_ALL",Graphic3d_TypeOfStructure::Graphic3d_TOS_ALL).export_values();
    py::enum_<Graphic3d_TypeOfShaderObject>(m, "Graphic3d_TypeOfShaderObject",R"#(Type of the shader object.)#")
        .value("Graphic3d_TOS_VERTEX",Graphic3d_TypeOfShaderObject::Graphic3d_TOS_VERTEX)
        .value("Graphic3d_TOS_TESS_CONTROL",Graphic3d_TypeOfShaderObject::Graphic3d_TOS_TESS_CONTROL)
        .value("Graphic3d_TOS_TESS_EVALUATION",Graphic3d_TypeOfShaderObject::Graphic3d_TOS_TESS_EVALUATION)
        .value("Graphic3d_TOS_GEOMETRY",Graphic3d_TypeOfShaderObject::Graphic3d_TOS_GEOMETRY)
        .value("Graphic3d_TOS_FRAGMENT",Graphic3d_TypeOfShaderObject::Graphic3d_TOS_FRAGMENT)
        .value("Graphic3d_TOS_COMPUTE",Graphic3d_TypeOfShaderObject::Graphic3d_TOS_COMPUTE).export_values();
    py::enum_<Graphic3d_TransModeFlags>(m, "Graphic3d_TransModeFlags",R"#(Transform Persistence Mode defining whether to lock in object position, rotation and / or zooming relative to camera position.)#")
        .value("Graphic3d_TMF_None",Graphic3d_TransModeFlags::Graphic3d_TMF_None)
        .value("Graphic3d_TMF_ZoomPers",Graphic3d_TransModeFlags::Graphic3d_TMF_ZoomPers)
        .value("Graphic3d_TMF_RotatePers",Graphic3d_TransModeFlags::Graphic3d_TMF_RotatePers)
        .value("Graphic3d_TMF_TriedronPers",Graphic3d_TransModeFlags::Graphic3d_TMF_TriedronPers)
        .value("Graphic3d_TMF_2d",Graphic3d_TransModeFlags::Graphic3d_TMF_2d)
        .value("Graphic3d_TMF_ZoomRotatePers",Graphic3d_TransModeFlags::Graphic3d_TMF_ZoomRotatePers).export_values();
    py::enum_<Graphic3d_RenderTransparentMethod>(m, "Graphic3d_RenderTransparentMethod",R"#(Enumerates transparency rendering methods supported by rasterization mode.)#")
        .value("Graphic3d_RTM_BLEND_UNORDERED",Graphic3d_RenderTransparentMethod::Graphic3d_RTM_BLEND_UNORDERED)
        .value("Graphic3d_RTM_BLEND_OIT",Graphic3d_RenderTransparentMethod::Graphic3d_RTM_BLEND_OIT).export_values();
    py::enum_<Graphic3d_NameOfTexture1D>(m, "Graphic3d_NameOfTexture1D",R"#(Types of standard textures.)#")
        .value("Graphic3d_NOT_1D_ELEVATION",Graphic3d_NameOfTexture1D::Graphic3d_NOT_1D_ELEVATION)
        .value("Graphic3d_NOT_1D_UNKNOWN",Graphic3d_NameOfTexture1D::Graphic3d_NOT_1D_UNKNOWN).export_values();
    py::enum_<Graphic3d_SortType>(m, "Graphic3d_SortType",R"#(None)#")
        .value("Graphic3d_ST_Simple",Graphic3d_SortType::Graphic3d_ST_Simple)
        .value("Graphic3d_ST_BSP_Tree",Graphic3d_SortType::Graphic3d_ST_BSP_Tree).export_values();
    py::enum_<Graphic3d_FresnelModel>(m, "Graphic3d_FresnelModel",R"#(Type of the Fresnel model.)#")
        .value("Graphic3d_FM_SCHLICK",Graphic3d_FresnelModel::Graphic3d_FM_SCHLICK)
        .value("Graphic3d_FM_CONSTANT",Graphic3d_FresnelModel::Graphic3d_FM_CONSTANT)
        .value("Graphic3d_FM_CONDUCTOR",Graphic3d_FresnelModel::Graphic3d_FM_CONDUCTOR)
        .value("Graphic3d_FM_DIELECTRIC",Graphic3d_FresnelModel::Graphic3d_FM_DIELECTRIC).export_values();
    py::enum_<Graphic3d_TypeOfVisualization>(m, "Graphic3d_TypeOfVisualization",R"#(Modes of visualisation of objects in a view)#")
        .value("Graphic3d_TOV_WIREFRAME",Graphic3d_TypeOfVisualization::Graphic3d_TOV_WIREFRAME)
        .value("Graphic3d_TOV_SHADING",Graphic3d_TypeOfVisualization::Graphic3d_TOV_SHADING).export_values();
    py::enum_<Graphic3d_TypeOfTextureMode>(m, "Graphic3d_TypeOfTextureMode",R"#(Type of the texture projection.)#")
        .value("Graphic3d_TOTM_OBJECT",Graphic3d_TypeOfTextureMode::Graphic3d_TOTM_OBJECT)
        .value("Graphic3d_TOTM_SPHERE",Graphic3d_TypeOfTextureMode::Graphic3d_TOTM_SPHERE)
        .value("Graphic3d_TOTM_EYE",Graphic3d_TypeOfTextureMode::Graphic3d_TOTM_EYE)
        .value("Graphic3d_TOTM_MANUAL",Graphic3d_TypeOfTextureMode::Graphic3d_TOTM_MANUAL)
        .value("Graphic3d_TOTM_SPRITE",Graphic3d_TypeOfTextureMode::Graphic3d_TOTM_SPRITE).export_values();
    py::enum_<Graphic3d_GroupAspect>(m, "Graphic3d_GroupAspect",R"#(Identifies primitives aspects defined per group. - ASPECT_LINE: aspect for line primitives; - ASPECT_TEXT: aspect for text primitives; - ASPECT_MARKER: aspect for marker primitives; - ASPECT_FILL_AREA: aspect for face primitives.)#")
        .value("Graphic3d_ASPECT_LINE",Graphic3d_GroupAspect::Graphic3d_ASPECT_LINE)
        .value("Graphic3d_ASPECT_TEXT",Graphic3d_GroupAspect::Graphic3d_ASPECT_TEXT)
        .value("Graphic3d_ASPECT_MARKER",Graphic3d_GroupAspect::Graphic3d_ASPECT_MARKER)
        .value("Graphic3d_ASPECT_FILL_AREA",Graphic3d_GroupAspect::Graphic3d_ASPECT_FILL_AREA).export_values();
    py::enum_<Graphic3d_TypeOfLimit>(m, "Graphic3d_TypeOfLimit",R"#(Type of graphic resource limit.)#")
        .value("Graphic3d_TypeOfLimit_MaxNbLights",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_MaxNbLights)
        .value("Graphic3d_TypeOfLimit_MaxNbClipPlanes",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_MaxNbClipPlanes)
        .value("Graphic3d_TypeOfLimit_MaxNbViews",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_MaxNbViews)
        .value("Graphic3d_TypeOfLimit_MaxTextureSize",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_MaxTextureSize)
        .value("Graphic3d_TypeOfLimit_MaxCombinedTextureUnits",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_MaxCombinedTextureUnits)
        .value("Graphic3d_TypeOfLimit_MaxMsaa",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_MaxMsaa)
        .value("Graphic3d_TypeOfLimit_HasRayTracing",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_HasRayTracing)
        .value("Graphic3d_TypeOfLimit_HasRayTracingTextures",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_HasRayTracingTextures)
        .value("Graphic3d_TypeOfLimit_HasRayTracingAdaptiveSampling",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_HasRayTracingAdaptiveSampling)
        .value("Graphic3d_TypeOfLimit_HasBlendedOit",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_HasBlendedOit)
        .value("Graphic3d_TypeOfLimit_HasBlendedOitMsaa",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_HasBlendedOitMsaa)
        .value("Graphic3d_TypeOfLimit_NB",Graphic3d_TypeOfLimit::Graphic3d_TypeOfLimit_NB).export_values();
    py::enum_<Graphic3d_TypeOfTexture>(m, "Graphic3d_TypeOfTexture",R"#(Type of the texture file format.)#")
        .value("Graphic3d_TOT_1D",Graphic3d_TypeOfTexture::Graphic3d_TOT_1D)
        .value("Graphic3d_TOT_2D",Graphic3d_TypeOfTexture::Graphic3d_TOT_2D)
        .value("Graphic3d_TOT_2D_MIPMAP",Graphic3d_TypeOfTexture::Graphic3d_TOT_2D_MIPMAP).export_values();
    m.attr("Graphic3d_ZLayerId_UNKNOWN") = py::cast(int(Graphic3d_ZLayerId_UNKNOWN));
    m.attr("Graphic3d_ZLayerId_Default") = py::cast(int(Graphic3d_ZLayerId_Default));
    m.attr("Graphic3d_ZLayerId_Top") = py::cast(int(Graphic3d_ZLayerId_Top));
    m.attr("Graphic3d_ZLayerId_Topmost") = py::cast(int(Graphic3d_ZLayerId_Topmost));
    m.attr("Graphic3d_ZLayerId_TopOSD") = py::cast(int(Graphic3d_ZLayerId_TopOSD));
    m.attr("Graphic3d_ZLayerId_BotOSD") = py::cast(int(Graphic3d_ZLayerId_BotOSD));
    py::enum_<Graphic3d_CappingFlags>(m, "Graphic3d_CappingFlags",R"#(Enumeration of capping flags.)#")
        .value("Graphic3d_CappingFlags_None",Graphic3d_CappingFlags::Graphic3d_CappingFlags_None)
        .value("Graphic3d_CappingFlags_ObjectMaterial",Graphic3d_CappingFlags::Graphic3d_CappingFlags_ObjectMaterial)
        .value("Graphic3d_CappingFlags_ObjectTexture",Graphic3d_CappingFlags::Graphic3d_CappingFlags_ObjectTexture)
        .value("Graphic3d_CappingFlags_ObjectShader",Graphic3d_CappingFlags::Graphic3d_CappingFlags_ObjectShader)
        .value("Graphic3d_CappingFlags_ObjectAspect",Graphic3d_CappingFlags::Graphic3d_CappingFlags_ObjectAspect).export_values();
    py::enum_<Graphic3d_BufferType>(m, "Graphic3d_BufferType",R"#(Define buffers available for dump)#")
        .value("Graphic3d_BT_RGB",Graphic3d_BufferType::Graphic3d_BT_RGB)
        .value("Graphic3d_BT_RGBA",Graphic3d_BufferType::Graphic3d_BT_RGBA)
        .value("Graphic3d_BT_Depth",Graphic3d_BufferType::Graphic3d_BT_Depth)
        .value("Graphic3d_BT_RGB_RayTraceHdrLeft",Graphic3d_BufferType::Graphic3d_BT_RGB_RayTraceHdrLeft).export_values();
    py::enum_<Graphic3d_TypeOfComposition>(m, "Graphic3d_TypeOfComposition",R"#(To manage the transformation matrices of structures.)#")
        .value("Graphic3d_TOC_REPLACE",Graphic3d_TypeOfComposition::Graphic3d_TOC_REPLACE)
        .value("Graphic3d_TOC_POSTCONCATENATE",Graphic3d_TypeOfComposition::Graphic3d_TOC_POSTCONCATENATE).export_values();
    py::enum_<Graphic3d_LevelOfTextureAnisotropy>(m, "Graphic3d_LevelOfTextureAnisotropy",R"#(Level of anisotropy filter. Notice that actual quality depends on hardware capabilities!)#")
        .value("Graphic3d_LOTA_OFF",Graphic3d_LevelOfTextureAnisotropy::Graphic3d_LOTA_OFF)
        .value("Graphic3d_LOTA_FAST",Graphic3d_LevelOfTextureAnisotropy::Graphic3d_LOTA_FAST)
        .value("Graphic3d_LOTA_MIDDLE",Graphic3d_LevelOfTextureAnisotropy::Graphic3d_LOTA_MIDDLE)
        .value("Graphic3d_LOTA_QUALITY",Graphic3d_LevelOfTextureAnisotropy::Graphic3d_LOTA_QUALITY).export_values();
    py::enum_<Graphic3d_TextPath>(m, "Graphic3d_TextPath",R"#(Direction in which text is displayed.)#")
        .value("Graphic3d_TP_UP",Graphic3d_TextPath::Graphic3d_TP_UP)
        .value("Graphic3d_TP_DOWN",Graphic3d_TextPath::Graphic3d_TP_DOWN)
        .value("Graphic3d_TP_LEFT",Graphic3d_TextPath::Graphic3d_TP_LEFT)
        .value("Graphic3d_TP_RIGHT",Graphic3d_TextPath::Graphic3d_TP_RIGHT).export_values();
    py::enum_<Graphic3d_NameOfTexture2D>(m, "Graphic3d_NameOfTexture2D",R"#(Types of standard textures.)#")
        .value("Graphic3d_NOT_2D_MATRA",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_MATRA)
        .value("Graphic3d_NOT_2D_ALIENSKIN",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_ALIENSKIN)
        .value("Graphic3d_NOT_2D_BLUE_ROCK",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_BLUE_ROCK)
        .value("Graphic3d_NOT_2D_BLUEWHITE_PAPER",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_BLUEWHITE_PAPER)
        .value("Graphic3d_NOT_2D_BRUSHED",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_BRUSHED)
        .value("Graphic3d_NOT_2D_BUBBLES",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_BUBBLES)
        .value("Graphic3d_NOT_2D_BUMP",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_BUMP)
        .value("Graphic3d_NOT_2D_CAST",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_CAST)
        .value("Graphic3d_NOT_2D_CHIPBD",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_CHIPBD)
        .value("Graphic3d_NOT_2D_CLOUDS",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_CLOUDS)
        .value("Graphic3d_NOT_2D_FLESH",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_FLESH)
        .value("Graphic3d_NOT_2D_FLOOR",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_FLOOR)
        .value("Graphic3d_NOT_2D_GALVNISD",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_GALVNISD)
        .value("Graphic3d_NOT_2D_GRASS",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_GRASS)
        .value("Graphic3d_NOT_2D_ALUMINUM",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_ALUMINUM)
        .value("Graphic3d_NOT_2D_ROCK",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_ROCK)
        .value("Graphic3d_NOT_2D_KNURL",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_KNURL)
        .value("Graphic3d_NOT_2D_MAPLE",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_MAPLE)
        .value("Graphic3d_NOT_2D_MARBLE",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_MARBLE)
        .value("Graphic3d_NOT_2D_MOTTLED",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_MOTTLED)
        .value("Graphic3d_NOT_2D_RAIN",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_RAIN)
        .value("Graphic3d_NOT_2D_CHESS",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_CHESS)
        .value("Graphic3d_NOT_2D_UNKNOWN",Graphic3d_NameOfTexture2D::Graphic3d_NOT_2D_UNKNOWN).export_values();
    py::enum_<Graphic3d_ToneMappingMethod>(m, "Graphic3d_ToneMappingMethod",R"#(Enumerates tone mapping methods.)#")
        .value("Graphic3d_ToneMappingMethod_Disabled",Graphic3d_ToneMappingMethod::Graphic3d_ToneMappingMethod_Disabled)
        .value("Graphic3d_ToneMappingMethod_Filmic",Graphic3d_ToneMappingMethod::Graphic3d_ToneMappingMethod_Filmic).export_values();
    py::enum_<Graphic3d_NameOfTextureEnv>(m, "Graphic3d_NameOfTextureEnv",R"#(Types of standard textures.)#")
        .value("Graphic3d_NOT_ENV_CLOUDS",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_CLOUDS)
        .value("Graphic3d_NOT_ENV_CV",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_CV)
        .value("Graphic3d_NOT_ENV_MEDIT",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_MEDIT)
        .value("Graphic3d_NOT_ENV_PEARL",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_PEARL)
        .value("Graphic3d_NOT_ENV_SKY1",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_SKY1)
        .value("Graphic3d_NOT_ENV_SKY2",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_SKY2)
        .value("Graphic3d_NOT_ENV_LINES",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_LINES)
        .value("Graphic3d_NOT_ENV_ROAD",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_ROAD)
        .value("Graphic3d_NOT_ENV_UNKNOWN",Graphic3d_NameOfTextureEnv::Graphic3d_NOT_ENV_UNKNOWN).export_values();
    py::enum_<Graphic3d_NameOfMaterial>(m, "Graphic3d_NameOfMaterial",R"#(Types of aspect materials.)#")
        .value("Graphic3d_NOM_BRASS",Graphic3d_NameOfMaterial::Graphic3d_NOM_BRASS)
        .value("Graphic3d_NOM_BRONZE",Graphic3d_NameOfMaterial::Graphic3d_NOM_BRONZE)
        .value("Graphic3d_NOM_COPPER",Graphic3d_NameOfMaterial::Graphic3d_NOM_COPPER)
        .value("Graphic3d_NOM_GOLD",Graphic3d_NameOfMaterial::Graphic3d_NOM_GOLD)
        .value("Graphic3d_NOM_PEWTER",Graphic3d_NameOfMaterial::Graphic3d_NOM_PEWTER)
        .value("Graphic3d_NOM_PLASTER",Graphic3d_NameOfMaterial::Graphic3d_NOM_PLASTER)
        .value("Graphic3d_NOM_PLASTIC",Graphic3d_NameOfMaterial::Graphic3d_NOM_PLASTIC)
        .value("Graphic3d_NOM_SILVER",Graphic3d_NameOfMaterial::Graphic3d_NOM_SILVER)
        .value("Graphic3d_NOM_STEEL",Graphic3d_NameOfMaterial::Graphic3d_NOM_STEEL)
        .value("Graphic3d_NOM_STONE",Graphic3d_NameOfMaterial::Graphic3d_NOM_STONE)
        .value("Graphic3d_NOM_SHINY_PLASTIC",Graphic3d_NameOfMaterial::Graphic3d_NOM_SHINY_PLASTIC)
        .value("Graphic3d_NOM_SATIN",Graphic3d_NameOfMaterial::Graphic3d_NOM_SATIN)
        .value("Graphic3d_NOM_METALIZED",Graphic3d_NameOfMaterial::Graphic3d_NOM_METALIZED)
        .value("Graphic3d_NOM_NEON_GNC",Graphic3d_NameOfMaterial::Graphic3d_NOM_NEON_GNC)
        .value("Graphic3d_NOM_CHROME",Graphic3d_NameOfMaterial::Graphic3d_NOM_CHROME)
        .value("Graphic3d_NOM_ALUMINIUM",Graphic3d_NameOfMaterial::Graphic3d_NOM_ALUMINIUM)
        .value("Graphic3d_NOM_OBSIDIAN",Graphic3d_NameOfMaterial::Graphic3d_NOM_OBSIDIAN)
        .value("Graphic3d_NOM_NEON_PHC",Graphic3d_NameOfMaterial::Graphic3d_NOM_NEON_PHC)
        .value("Graphic3d_NOM_JADE",Graphic3d_NameOfMaterial::Graphic3d_NOM_JADE)
        .value("Graphic3d_NOM_CHARCOAL",Graphic3d_NameOfMaterial::Graphic3d_NOM_CHARCOAL)
        .value("Graphic3d_NOM_WATER",Graphic3d_NameOfMaterial::Graphic3d_NOM_WATER)
        .value("Graphic3d_NOM_GLASS",Graphic3d_NameOfMaterial::Graphic3d_NOM_GLASS)
        .value("Graphic3d_NOM_DIAMOND",Graphic3d_NameOfMaterial::Graphic3d_NOM_DIAMOND)
        .value("Graphic3d_NOM_TRANSPARENT",Graphic3d_NameOfMaterial::Graphic3d_NOM_TRANSPARENT)
        .value("Graphic3d_NOM_DEFAULT",Graphic3d_NameOfMaterial::Graphic3d_NOM_DEFAULT)
        .value("Graphic3d_NOM_UserDefined",Graphic3d_NameOfMaterial::Graphic3d_NOM_UserDefined).export_values();
    py::enum_<Graphic3d_StereoMode>(m, "Graphic3d_StereoMode",R"#(This enumeration defines the list of stereoscopic output modes.)#")
        .value("Graphic3d_StereoMode_QuadBuffer",Graphic3d_StereoMode::Graphic3d_StereoMode_QuadBuffer)
        .value("Graphic3d_StereoMode_Anaglyph",Graphic3d_StereoMode::Graphic3d_StereoMode_Anaglyph)
        .value("Graphic3d_StereoMode_RowInterlaced",Graphic3d_StereoMode::Graphic3d_StereoMode_RowInterlaced)
        .value("Graphic3d_StereoMode_ColumnInterlaced",Graphic3d_StereoMode::Graphic3d_StereoMode_ColumnInterlaced)
        .value("Graphic3d_StereoMode_ChessBoard",Graphic3d_StereoMode::Graphic3d_StereoMode_ChessBoard)
        .value("Graphic3d_StereoMode_SideBySide",Graphic3d_StereoMode::Graphic3d_StereoMode_SideBySide)
        .value("Graphic3d_StereoMode_OverUnder",Graphic3d_StereoMode::Graphic3d_StereoMode_OverUnder)
        .value("Graphic3d_StereoMode_SoftPageFlip",Graphic3d_StereoMode::Graphic3d_StereoMode_SoftPageFlip)
        .value("Graphic3d_StereoMode_NB",Graphic3d_StereoMode::Graphic3d_StereoMode_NB).export_values();

//Python trampoline classes
    class Py_Graphic3d_GraphicDriver : public Graphic3d_GraphicDriver{
    public:
        using Graphic3d_GraphicDriver::Graphic3d_GraphicDriver;
        
        // public pure virtual
        Standard_Integer InquireLimit(const Graphic3d_TypeOfLimit theType) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Graphic3d_GraphicDriver,InquireLimit,theType) };
        opencascade::handle<Graphic3d_CStructure> CreateStructure(const opencascade::handle<Graphic3d_StructureManager> & theManager) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_CStructure>,Graphic3d_GraphicDriver,CreateStructure,theManager) };
        void RemoveStructure(opencascade::handle<Graphic3d_CStructure> & theCStructure) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,RemoveStructure,theCStructure) };
        opencascade::handle<Graphic3d_CView> CreateView(const opencascade::handle<Graphic3d_StructureManager> & theMgr) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_CView>,Graphic3d_GraphicDriver,CreateView,theMgr) };
        void RemoveView(const opencascade::handle<Graphic3d_CView> & theView) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,RemoveView,theView) };
        void EnableVBO(const Standard_Boolean status) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,EnableVBO,status) };
        Standard_Boolean MemoryInfo(Standard_Size & theFreeBytes,TCollection_AsciiString & theInfo) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_GraphicDriver,MemoryInfo,theFreeBytes,theInfo) };
        Standard_ShortReal DefaultTextHeight() const  override { PYBIND11_OVERLOAD_PURE(Standard_ShortReal,Graphic3d_GraphicDriver,DefaultTextHeight,) };
        void TextSize(const opencascade::handle<Graphic3d_CView> & theView,const Standard_CString theText,const Standard_ShortReal theHeight,Standard_ShortReal & theWidth,Standard_ShortReal & theAscent,Standard_ShortReal & theDescent) const  override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,TextSize,theView,theText,theHeight,theWidth,theAscent,theDescent) };
        void AddZLayer(const Graphic3d_ZLayerId theLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,AddZLayer,theLayerId) };
        void RemoveZLayer(const Graphic3d_ZLayerId theLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,RemoveZLayer,theLayerId) };
        void ZLayers(NCollection_Sequence<Standard_Integer> & theLayerSeq) const  override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,ZLayers,theLayerSeq) };
        void SetZLayerSettings(const Graphic3d_ZLayerId theLayerId,const Graphic3d_ZLayerSettings & theSettings) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_GraphicDriver,SetZLayerSettings,theLayerId,theSettings) };
        const Graphic3d_ZLayerSettings & ZLayerSettings(const Graphic3d_ZLayerId theLayerId) const  override { PYBIND11_OVERLOAD_PURE(const Graphic3d_ZLayerSettings &,Graphic3d_GraphicDriver,ZLayerSettings,theLayerId) };
        Standard_Boolean ViewExists(const opencascade::handle<Aspect_Window> & theWindow,opencascade::handle<Graphic3d_CView> & theView) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_GraphicDriver,ViewExists,theWindow,theView) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Graphic3d_Group : public Graphic3d_Group{
    public:
        using Graphic3d_Group::Graphic3d_Group;
        
        // public pure virtual
        opencascade::handle<Graphic3d_AspectLine3d> LineAspect() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_AspectLine3d>,Graphic3d_Group,LineAspect,) };
        void SetGroupPrimitivesAspect(const opencascade::handle<Graphic3d_AspectLine3d> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetGroupPrimitivesAspect,theAspect) };
        opencascade::handle<Graphic3d_AspectFillArea3d> FillAreaAspect() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_AspectFillArea3d>,Graphic3d_Group,FillAreaAspect,) };
        void SetGroupPrimitivesAspect(const opencascade::handle<Graphic3d_AspectFillArea3d> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetGroupPrimitivesAspect,theAspect) };
        opencascade::handle<Graphic3d_AspectText3d> TextAspect() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_AspectText3d>,Graphic3d_Group,TextAspect,) };
        void SetGroupPrimitivesAspect(const opencascade::handle<Graphic3d_AspectText3d> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetGroupPrimitivesAspect,theAspect) };
        opencascade::handle<Graphic3d_AspectMarker3d> MarkerAspect() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_AspectMarker3d>,Graphic3d_Group,MarkerAspect,) };
        void SetGroupPrimitivesAspect(const opencascade::handle<Graphic3d_AspectMarker3d> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetGroupPrimitivesAspect,theAspect) };
        void SetPrimitivesAspect(const opencascade::handle<Graphic3d_AspectLine3d> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetPrimitivesAspect,theAspect) };
        void SetPrimitivesAspect(const opencascade::handle<Graphic3d_AspectFillArea3d> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetPrimitivesAspect,theAspect) };
        void SetPrimitivesAspect(const opencascade::handle<Graphic3d_AspectText3d> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetPrimitivesAspect,theAspect) };
        void SetPrimitivesAspect(const opencascade::handle<Graphic3d_AspectMarker3d> & theAspect) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetPrimitivesAspect,theAspect) };
        void SetStencilTestOptions(const Standard_Boolean theIsEnabled) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetStencilTestOptions,theIsEnabled) };
        void SetFlippingOptions(const Standard_Boolean theIsEnabled,const gp_Ax2 & theRefPlane) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_Group,SetFlippingOptions,theIsEnabled,theRefPlane) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Graphic3d_CStructure : public Graphic3d_CStructure{
    public:
        using Graphic3d_CStructure::Graphic3d_CStructure;
        
        // public pure virtual
        void OnVisibilityChanged() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,OnVisibilityChanged,) };
        void Clear() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,Clear,) };
        void Connect(Graphic3d_CStructure & theStructure) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,Connect,theStructure) };
        void Disconnect(Graphic3d_CStructure & theStructure) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,Disconnect,theStructure) };
        void GraphicHighlight(const opencascade::handle<Graphic3d_PresentationAttributes> & theStyle,const opencascade::handle<Graphic3d_Structure> & theStruct) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,GraphicHighlight,theStyle,theStruct) };
        void GraphicUnhighlight() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,GraphicUnhighlight,) };
        opencascade::handle<Graphic3d_CStructure> ShadowLink(const opencascade::handle<Graphic3d_StructureManager> & theManager) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_CStructure>,Graphic3d_CStructure,ShadowLink,theManager) };
        opencascade::handle<Graphic3d_Group> NewGroup(const opencascade::handle<Graphic3d_Structure> & theStruct) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_Group>,Graphic3d_CStructure,NewGroup,theStruct) };
        void RemoveGroup(const opencascade::handle<Graphic3d_Group> & theGroup) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CStructure,RemoveGroup,theGroup) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Graphic3d_CView : public Graphic3d_CView{
    public:
        using Graphic3d_CView::Graphic3d_CView;
        
        // public pure virtual
        void Redraw() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,Redraw,) };
        void RedrawImmediate() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,RedrawImmediate,) };
        void Invalidate() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,Invalidate,) };
        Standard_Boolean IsInvalidated() override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,IsInvalidated,) };
        void Resized() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,Resized,) };
        Standard_Boolean SetImmediateModeDrawToFront(const Standard_Boolean theDrawToFrontBuffer) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,SetImmediateModeDrawToFront,theDrawToFrontBuffer) };
        void SetWindow(const opencascade::handle<Aspect_Window> & theWindow,const Aspect_RenderingContext theContext) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetWindow,theWindow,theContext) };
        opencascade::handle<Aspect_Window> Window() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Aspect_Window>,Graphic3d_CView,Window,) };
        Standard_Boolean IsDefined() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,IsDefined,) };
        const Graphic3d_GraduatedTrihedron & GetGraduatedTrihedron() override { PYBIND11_OVERLOAD_PURE(const Graphic3d_GraduatedTrihedron &,Graphic3d_CView,GetGraduatedTrihedron,) };
        void GraduatedTrihedronDisplay(const Graphic3d_GraduatedTrihedron & theTrihedronData) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,GraduatedTrihedronDisplay,theTrihedronData) };
        void GraduatedTrihedronErase() override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,GraduatedTrihedronErase,) };
        void GraduatedTrihedronMinMaxValues( const NCollection_Vec3<Standard_ShortReal> theMin, const NCollection_Vec3<Standard_ShortReal> theMax) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,GraduatedTrihedronMinMaxValues,theMin,theMax) };
        Standard_Boolean BufferDump(Image_PixMap & theImage,const Graphic3d_BufferType & theBufferType) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,BufferDump,theImage,theBufferType) };
        Standard_Boolean Export(const Standard_CString theFileName,const Graphic3d_ExportFormat theFormat,const Graphic3d_SortType theSortType) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,Export,theFileName,theFormat,theSortType) };
        void InvalidateBVHData(const Graphic3d_ZLayerId theLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,InvalidateBVHData,theLayerId) };
        void AddZLayer(const Graphic3d_ZLayerId theLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,AddZLayer,theLayerId) };
        Standard_Integer ZLayerMax() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Graphic3d_CView,ZLayerMax,) };
        void InvalidateZLayerBoundingBox(const Graphic3d_ZLayerId theLayerId) const  override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,InvalidateZLayerBoundingBox,theLayerId) };
        Bnd_Box ZLayerBoundingBox(const Graphic3d_ZLayerId theLayerId,const opencascade::handle<Graphic3d_Camera> & theCamera,const Standard_Integer theWindowWidth,const Standard_Integer theWindowHeight,const Standard_Boolean theToIncludeAuxiliary) const  override { PYBIND11_OVERLOAD_PURE(Bnd_Box,Graphic3d_CView,ZLayerBoundingBox,theLayerId,theCamera,theWindowWidth,theWindowHeight,theToIncludeAuxiliary) };
        void RemoveZLayer(const Graphic3d_ZLayerId theLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,RemoveZLayer,theLayerId) };
        void SetZLayerSettings(const Graphic3d_ZLayerId theLayerId,const Graphic3d_ZLayerSettings & theSettings) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetZLayerSettings,theLayerId,theSettings) };
        opencascade::handle<Standard_Transient> FBO() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Transient>,Graphic3d_CView,FBO,) };
        void SetFBO(const opencascade::handle<Standard_Transient> & theFbo) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetFBO,theFbo) };
        opencascade::handle<Standard_Transient> FBOCreate(const Standard_Integer theWidth,const Standard_Integer theHeight) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Transient>,Graphic3d_CView,FBOCreate,theWidth,theHeight) };
        void FBORelease(opencascade::handle<Standard_Transient> & theFbo) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,FBORelease,theFbo) };
        void FBOGetDimensions(const opencascade::handle<Standard_Transient> & theFbo,Standard_Integer & theWidth,Standard_Integer & theHeight,Standard_Integer & theWidthMax,Standard_Integer & theHeightMax) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,FBOGetDimensions,theFbo,theWidth,theHeight,theWidthMax,theHeightMax) };
        void FBOChangeViewport(const opencascade::handle<Standard_Transient> & theFbo,const Standard_Integer theWidth,const Standard_Integer theHeight) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,FBOChangeViewport,theFbo,theWidth,theHeight) };
        Aspect_Background Background() const  override { PYBIND11_OVERLOAD_PURE(Aspect_Background,Graphic3d_CView,Background,) };
        void SetBackground(const Aspect_Background & theBackground) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetBackground,theBackground) };
        Aspect_GradientBackground GradientBackground() const  override { PYBIND11_OVERLOAD_PURE(Aspect_GradientBackground,Graphic3d_CView,GradientBackground,) };
        void SetGradientBackground(const Aspect_GradientBackground & theBackground) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetGradientBackground,theBackground) };
        TCollection_AsciiString BackgroundImage() override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Graphic3d_CView,BackgroundImage,) };
        void SetBackgroundImage(const TCollection_AsciiString & theFilePath) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetBackgroundImage,theFilePath) };
        Aspect_FillMethod BackgroundImageStyle() const  override { PYBIND11_OVERLOAD_PURE(Aspect_FillMethod,Graphic3d_CView,BackgroundImageStyle,) };
        void SetBackgroundImageStyle(const Aspect_FillMethod theFillStyle) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetBackgroundImageStyle,theFillStyle) };
        opencascade::handle<Graphic3d_TextureEnv> TextureEnv() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Graphic3d_TextureEnv>,Graphic3d_CView,TextureEnv,) };
        void SetTextureEnv(const opencascade::handle<Graphic3d_TextureEnv> & theTextureEnv) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetTextureEnv,theTextureEnv) };
        Standard_Boolean IsCullingEnabled() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Graphic3d_CView,IsCullingEnabled,) };
        void SetCullingEnabled(const Standard_Boolean theIsEnabled) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetCullingEnabled,theIsEnabled) };
        Graphic3d_TypeOfBackfacingModel BackfacingModel() const  override { PYBIND11_OVERLOAD_PURE(Graphic3d_TypeOfBackfacingModel,Graphic3d_CView,BackfacingModel,) };
        void SetBackfacingModel(const Graphic3d_TypeOfBackfacingModel theModel) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetBackfacingModel,theModel) };
        const opencascade::handle<Graphic3d_Camera> & Camera() const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Graphic3d_Camera> &,Graphic3d_CView,Camera,) };
        void SetCamera(const opencascade::handle<Graphic3d_Camera> & theCamera) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetCamera,theCamera) };
        const opencascade::handle<Graphic3d_LightSet> & Lights() const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Graphic3d_LightSet> &,Graphic3d_CView,Lights,) };
        void SetLights(const opencascade::handle<Graphic3d_LightSet> & theLights) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetLights,theLights) };
        const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & ClipPlanes() const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &,Graphic3d_CView,ClipPlanes,) };
        void SetClipPlanes(const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & thePlanes) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,SetClipPlanes,thePlanes) };
        void DiagnosticInformation(NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString> & theDict,Graphic3d_DiagnosticInfo theFlags) const  override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,DiagnosticInformation,theDict,theFlags) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        void displayStructure(const opencascade::handle<Graphic3d_CStructure> & theStructure,const Standard_Integer thePriority) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,displayStructure,theStructure,thePriority) };
        void eraseStructure(const opencascade::handle<Graphic3d_CStructure> & theStructure) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,eraseStructure,theStructure) };
        void changeZLayer(const opencascade::handle<Graphic3d_CStructure> & theCStructure,const Graphic3d_ZLayerId theNewLayerId) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,changeZLayer,theCStructure,theNewLayerId) };
        void changePriority(const opencascade::handle<Graphic3d_CStructure> & theCStructure,const Standard_Integer theNewPriority) override { PYBIND11_OVERLOAD_PURE(void,Graphic3d_CView,changePriority,theCStructure,theNewPriority) };
        Standard_Real considerZoomPersistenceObjects(const Graphic3d_ZLayerId theLayerId,const opencascade::handle<Graphic3d_Camera> & theCamera,const Standard_Integer theWindowWidth,const Standard_Integer theWindowHeight) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Graphic3d_CView,considerZoomPersistenceObjects,theLayerId,theCamera,theWindowWidth,theWindowHeight) };
        
    };

// classes forward declarations only
    py::class_<Graphic3d_StructureManager ,opencascade::handle<Graphic3d_StructureManager>  , Standard_Transient >(m,"Graphic3d_StructureManager",R"#(This class allows the definition of a manager to which the graphic objects are associated. It allows them to be globally manipulated. It defines the global attributes. Keywords: Structure, Structure Manager, Update Mode, Destroy, Highlight, VisibleThis class allows the definition of a manager to which the graphic objects are associated. It allows them to be globally manipulated. It defines the global attributes. Keywords: Structure, Structure Manager, Update Mode, Destroy, Highlight, Visible)#");
    py::class_<Graphic3d_AspectFillArea3d ,opencascade::handle<Graphic3d_AspectFillArea3d>  , Standard_Transient >(m,"Graphic3d_AspectFillArea3d",R"#(This class defines graphic attributes for opaque 3d primitives (polygons, triangles, quadrilaterals).This class defines graphic attributes for opaque 3d primitives (polygons, triangles, quadrilaterals).)#");
    py::class_<Graphic3d_TextureSet ,opencascade::handle<Graphic3d_TextureSet>  , Standard_Transient >(m,"Graphic3d_TextureSet",R"#(Class holding array of textures to be mapped as a set.)#");
    py::class_<Graphic3d_BoundBuffer ,opencascade::handle<Graphic3d_BoundBuffer>  , NCollection_Buffer >(m,"Graphic3d_BoundBuffer",R"#(Bounds buffer.Bounds buffer.)#");
    py::class_<Graphic3d_HatchStyle ,opencascade::handle<Graphic3d_HatchStyle>  , Standard_Transient >(m,"Graphic3d_HatchStyle",R"#(A class that provides an API to use standard OCCT hatch styles defined in Aspect_HatchStyle enum or to create custom styles from a user-defined bitmapA class that provides an API to use standard OCCT hatch styles defined in Aspect_HatchStyle enum or to create custom styles from a user-defined bitmap)#");
    py::class_<Graphic3d_TransformPers ,opencascade::handle<Graphic3d_TransformPers>  , Standard_Transient >(m,"Graphic3d_TransformPers",R"#(Transformation Persistence definition.Transformation Persistence definition.)#");
    py::class_<Graphic3d_GraphicDriver ,opencascade::handle<Graphic3d_GraphicDriver> ,Py_Graphic3d_GraphicDriver , Standard_Transient >(m,"Graphic3d_GraphicDriver",R"#(This class allows the definition of a graphic driver for 3d interface (currently only OpenGl driver is used).This class allows the definition of a graphic driver for 3d interface (currently only OpenGl driver is used).This class allows the definition of a graphic driver for 3d interface (currently only OpenGl driver is used).)#");
    py::class_<Graphic3d_PresentationAttributes ,opencascade::handle<Graphic3d_PresentationAttributes>  , Standard_Transient >(m,"Graphic3d_PresentationAttributes",R"#(Class defines presentation properties.Class defines presentation properties.)#");
    py::class_<Graphic3d_ShaderVariable ,opencascade::handle<Graphic3d_ShaderVariable>  , Standard_Transient >(m,"Graphic3d_ShaderVariable",R"#(Describes custom uniform shader variable.Describes custom uniform shader variable.)#");
    py::class_<Graphic3d_RenderingParams ,std::unique_ptr<Graphic3d_RenderingParams>  >(m,"Graphic3d_RenderingParams",R"#(Helper class to store rendering parameters.)#");
    py::class_<Graphic3d_AspectText3d ,opencascade::handle<Graphic3d_AspectText3d>  , Standard_Transient >(m,"Graphic3d_AspectText3d",R"#(Creates and updates a group of attributes for text primitives. This group contains the color, font, expansion factor (height/width ratio), and inter-character space.Creates and updates a group of attributes for text primitives. This group contains the color, font, expansion factor (height/width ratio), and inter-character space.)#");
    py::class_<Graphic3d_CLight ,opencascade::handle<Graphic3d_CLight>  , Standard_Transient >(m,"Graphic3d_CLight",R"#(Generic light source definition. This class defines arbitrary light source - see Graphic3d_TypeOfLightSource enumeration. Some parameters are applicable only to particular light type; calling methods unrelated to current type will throw an exception.Generic light source definition. This class defines arbitrary light source - see Graphic3d_TypeOfLightSource enumeration. Some parameters are applicable only to particular light type; calling methods unrelated to current type will throw an exception.)#");
    py::class_<Graphic3d_LightSet ,opencascade::handle<Graphic3d_LightSet>  , Standard_Transient >(m,"Graphic3d_LightSet",R"#(Class defining the set of light sources.Class defining the set of light sources.)#");
    py::class_<Graphic3d_AxisAspect ,std::unique_ptr<Graphic3d_AxisAspect>  >(m,"Graphic3d_AxisAspect",R"#(Class that stores style for one graduated trihedron axis such as colors, lengths and customization flags. It is used in Graphic3d_GraduatedTrihedron.)#");
    py::class_<Graphic3d_MaterialAspect ,std::unique_ptr<Graphic3d_MaterialAspect>  >(m,"Graphic3d_MaterialAspect",R"#(This class allows the definition of the type of a surface. Aspect attributes of a 3d face. Keywords: Material, FillArea, Shininess, Ambient, Color, Diffuse, Specular, Transparency, Emissive, ReflectionMode, BackFace, FrontFace, Reflection, Absorbtion)#");
    py::class_<Graphic3d_Fresnel ,std::unique_ptr<Graphic3d_Fresnel>  >(m,"Graphic3d_Fresnel",R"#(Describes Fresnel reflectance parameters.)#");
    py::class_<Graphic3d_Group ,opencascade::handle<Graphic3d_Group> ,Py_Graphic3d_Group , Standard_Transient >(m,"Graphic3d_Group",R"#(This class allows the definition of groups of primitives inside of graphic objects (presentations). A group contains the primitives and attributes for which the range is limited to this group. The primitives of a group can be globally suppressed.This class allows the definition of groups of primitives inside of graphic objects (presentations). A group contains the primitives and attributes for which the range is limited to this group. The primitives of a group can be globally suppressed.)#");
    py::class_<Graphic3d_CStructure ,opencascade::handle<Graphic3d_CStructure> ,Py_Graphic3d_CStructure , Standard_Transient >(m,"Graphic3d_CStructure",R"#(Low-level graphic structure interfaceLow-level graphic structure interface)#");
    py::class_<Graphic3d_DataStructureManager ,opencascade::handle<Graphic3d_DataStructureManager>  , Standard_Transient >(m,"Graphic3d_DataStructureManager",R"#(This class allows the definition of a manager to which the graphic objects are associated. It allows them to be globally manipulated. It defines the global attributes.This class allows the definition of a manager to which the graphic objects are associated. It allows them to be globally manipulated. It defines the global attributes.This class allows the definition of a manager to which the graphic objects are associated. It allows them to be globally manipulated. It defines the global attributes.)#");
    py::class_<Graphic3d_Vertex ,std::unique_ptr<Graphic3d_Vertex>  >(m,"Graphic3d_Vertex",R"#(This class represents a graphical 3D point.)#");
    py::class_<Graphic3d_AspectLine3d ,opencascade::handle<Graphic3d_AspectLine3d>  , Standard_Transient >(m,"Graphic3d_AspectLine3d",R"#(Creates and updates a group of attributes for 3d line primitives. This group contains the color, the type of line, and its thickness.Creates and updates a group of attributes for 3d line primitives. This group contains the color, the type of line, and its thickness.)#");
    py::class_<Graphic3d_ArrayOfPrimitives ,opencascade::handle<Graphic3d_ArrayOfPrimitives>  , Standard_Transient >(m,"Graphic3d_ArrayOfPrimitives",R"#(This class furnish services to defined and fill an array of primitives which can be passed directly to graphics rendering API.This class furnish services to defined and fill an array of primitives which can be passed directly to graphics rendering API.This class furnish services to defined and fill an array of primitives which can be passed directly to graphics rendering API.)#");
    py::class_<Graphic3d_WorldViewProjState ,std::unique_ptr<Graphic3d_WorldViewProjState>  >(m,"Graphic3d_WorldViewProjState",R"#(Helper class for keeping reference on world-view-projection state. Helpful for synchronizing state of WVP dependent data structures.)#");
    py::class_<Graphic3d_ArrayOfQuadrangles ,opencascade::handle<Graphic3d_ArrayOfQuadrangles>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfQuadrangles",R"#(Contains quadrangles array definition. WARNING! Quadrangle primitives might be unsupported by graphics library. Triangulation should be used instead of quads for better compatibility.Contains quadrangles array definition. WARNING! Quadrangle primitives might be unsupported by graphics library. Triangulation should be used instead of quads for better compatibility.)#");
    py::class_<Graphic3d_CTexture ,std::unique_ptr<Graphic3d_CTexture>  >(m,"Graphic3d_CTexture",R"#(None)#");
    py::class_<Graphic3d_ClipPlane ,opencascade::handle<Graphic3d_ClipPlane>  , Standard_Transient >(m,"Graphic3d_ClipPlane",R"#(Container for properties describing graphic driver clipping planes. It is up to application to create instances of this class and specify its properties. The instances are passed into graphic driver or other facilities that implement clipping features (e.g. selection). Depending on usage context the class can be used to specify: - Global clipping applied over the whole scene. - Object-level clipping applied for each particular object. The plane equation is specified in "world" coordinate system. Please note that the set of planes can define convex clipping volume. Be aware that number of clip planes supported by OpenGl is implementation dependent: at least 6 planes are available. Thus, take into account number of clipping planes passed for rendering: the object planes plus the view defined ones.Container for properties describing graphic driver clipping planes. It is up to application to create instances of this class and specify its properties. The instances are passed into graphic driver or other facilities that implement clipping features (e.g. selection). Depending on usage context the class can be used to specify: - Global clipping applied over the whole scene. - Object-level clipping applied for each particular object. The plane equation is specified in "world" coordinate system. Please note that the set of planes can define convex clipping volume. Be aware that number of clip planes supported by OpenGl is implementation dependent: at least 6 planes are available. Thus, take into account number of clipping planes passed for rendering: the object planes plus the view defined ones.)#");
    py::class_<Graphic3d_ViewAffinity ,opencascade::handle<Graphic3d_ViewAffinity>  , Standard_Transient >(m,"Graphic3d_ViewAffinity",R"#(Structure display state.Structure display state.)#");
    py::class_<Graphic3d_ArrayOfQuadrangleStrips ,opencascade::handle<Graphic3d_ArrayOfQuadrangleStrips>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfQuadrangleStrips",R"#(Contains quadrangles strip array definition. WARNING! Quadrangle primitives might be unsupported by graphics library. Triangulation should be used instead of quads for better compatibility.Contains quadrangles strip array definition. WARNING! Quadrangle primitives might be unsupported by graphics library. Triangulation should be used instead of quads for better compatibility.)#");
    py::class_<Graphic3d_ArrayOfPolygons ,opencascade::handle<Graphic3d_ArrayOfPolygons>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfPolygons",R"#(Contains polygons array definition. WARNING! Polygon primitives might be unsupported by graphics library. Triangulation should be used instead of quads for better compatibility.Contains polygons array definition. WARNING! Polygon primitives might be unsupported by graphics library. Triangulation should be used instead of quads for better compatibility.)#");
    py::class_<Graphic3d_ArrayOfTriangles ,opencascade::handle<Graphic3d_ArrayOfTriangles>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfTriangles",R"#(Contains triangles array definitionContains triangles array definition)#");
    py::class_<Graphic3d_ArrayOfPoints ,opencascade::handle<Graphic3d_ArrayOfPoints>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfPoints",R"#(Contains points array definition.Contains points array definition.)#");
    py::class_<Graphic3d_CView ,opencascade::handle<Graphic3d_CView> ,Py_Graphic3d_CView , Graphic3d_DataStructureManager >(m,"Graphic3d_CView",R"#(Base class of a graphical view that carries out rendering process for a concrete implementation of graphical driver. Provides virtual interfaces for redrawing its contents, management of displayed structures and render settings. The source code of the class itself implements functionality related to management of computed (HLR or "view-dependent") structures.Base class of a graphical view that carries out rendering process for a concrete implementation of graphical driver. Provides virtual interfaces for redrawing its contents, management of displayed structures and render settings. The source code of the class itself implements functionality related to management of computed (HLR or "view-dependent") structures.Base class of a graphical view that carries out rendering process for a concrete implementation of graphical driver. Provides virtual interfaces for redrawing its contents, management of displayed structures and render settings. The source code of the class itself implements functionality related to management of computed (HLR or "view-dependent") structures.)#");
    py::class_<Graphic3d_GraduatedTrihedron ,std::unique_ptr<Graphic3d_GraduatedTrihedron>  >(m,"Graphic3d_GraduatedTrihedron",R"#(Defines the class of a graduated trihedron. It contains main style parameters for implementation of graduated trihedron)#");
    py::class_<Graphic3d_ArrayOfSegments ,opencascade::handle<Graphic3d_ArrayOfSegments>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfSegments",R"#(Contains segments array definition.Contains segments array definition.)#");
    py::class_<Graphic3d_ShaderObject ,opencascade::handle<Graphic3d_ShaderObject>  , Standard_Transient >(m,"Graphic3d_ShaderObject",R"#(This class is responsible for managing shader objects.This class is responsible for managing shader objects.)#");
    py::class_<Graphic3d_AspectMarker3d ,opencascade::handle<Graphic3d_AspectMarker3d>  , Standard_Transient >(m,"Graphic3d_AspectMarker3d",R"#(Creates and updates an attribute group for marker type primitives. This group contains the type of marker, its color, and its scale factor.Creates and updates an attribute group for marker type primitives. This group contains the type of marker, its color, and its scale factor.)#");
    py::class_<Graphic3d_ShaderAttribute ,opencascade::handle<Graphic3d_ShaderAttribute>  , Standard_Transient >(m,"Graphic3d_ShaderAttribute",R"#(Describes custom vertex shader attribute.Describes custom vertex shader attribute.)#");
    py::class_<Graphic3d_ShaderProgram ,opencascade::handle<Graphic3d_ShaderProgram>  , Standard_Transient >(m,"Graphic3d_ShaderProgram",R"#(This class is responsible for managing shader programs.This class is responsible for managing shader programs.)#");
    py::class_<Graphic3d_Camera ,opencascade::handle<Graphic3d_Camera>  , Standard_Transient >(m,"Graphic3d_Camera",R"#(Camera class provides object-oriented approach to setting up projection and orientation properties of 3D view.Camera class provides object-oriented approach to setting up projection and orientation properties of 3D view.)#");
    py::class_<Graphic3d_SequenceOfHClipPlane ,opencascade::handle<Graphic3d_SequenceOfHClipPlane>  , Standard_Transient >(m,"Graphic3d_SequenceOfHClipPlane",R"#(Class defining the sequence of clipping planes.Class defining the sequence of clipping planes.)#");
    py::class_<Graphic3d_ArrayOfPolylines ,opencascade::handle<Graphic3d_ArrayOfPolylines>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfPolylines",R"#(Contains polylines array definition.Contains polylines array definition.)#");
    py::class_<Graphic3d_Structure ,opencascade::handle<Graphic3d_Structure>  , Standard_Transient >(m,"Graphic3d_Structure",R"#(This class allows the definition a graphic object. This graphic structure can be displayed, erased, or highlighted. This graphic structure can be connected with another graphic structure. Keywords: Structure, StructureManager, Display, Erase, Highlight, UnHighlight, Visible, Priority, Selectable, Visible, Visual, Connection, Ancestors, Descendants, TransformationThis class allows the definition a graphic object. This graphic structure can be displayed, erased, or highlighted. This graphic structure can be connected with another graphic structure. Keywords: Structure, StructureManager, Display, Erase, Highlight, UnHighlight, Visible, Priority, Selectable, Visible, Visual, Connection, Ancestors, Descendants, TransformationThis class allows the definition a graphic object. This graphic structure can be displayed, erased, or highlighted. This graphic structure can be connected with another graphic structure. Keywords: Structure, StructureManager, Display, Erase, Highlight, UnHighlight, Visible, Priority, Selectable, Visible, Visual, Connection, Ancestors, Descendants, Transformation)#");
    py::class_<Graphic3d_Buffer ,opencascade::handle<Graphic3d_Buffer>  , NCollection_Buffer >(m,"Graphic3d_Buffer",R"#(Buffer of vertex attributes.Buffer of vertex attributes.)#");
    py::class_<Graphic3d_BSDF ,std::unique_ptr<Graphic3d_BSDF>  >(m,"Graphic3d_BSDF",R"#(Describes material's BSDF (Bidirectional Scattering Distribution Function) used for physically-based rendering (in path tracing engine). BSDF is represented as weighted mixture of basic BRDFs/BTDFs (Bidirectional Reflectance (Transmittance) Distribution Functions).)#");
    py::class_<Graphic3d_IndexBuffer ,opencascade::handle<Graphic3d_IndexBuffer>  , Graphic3d_Buffer >(m,"Graphic3d_IndexBuffer",R"#(Index buffer.Index buffer.)#");
    py::class_<Graphic3d_ArrayOfTriangleStrips ,opencascade::handle<Graphic3d_ArrayOfTriangleStrips>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfTriangleStrips",R"#(Contains triangles strip array definition.Contains triangles strip array definition.)#");
    py::class_<Graphic3d_TextureParams ,opencascade::handle<Graphic3d_TextureParams>  , Standard_Transient >(m,"Graphic3d_TextureParams",R"#(This class describes texture parameters.This class describes texture parameters.)#");
    py::class_<Graphic3d_TextureRoot ,opencascade::handle<Graphic3d_TextureRoot>  , Standard_Transient >(m,"Graphic3d_TextureRoot",R"#(This is the texture root class enable the dialog with the GraphicDriver allows the loading of texture.This is the texture root class enable the dialog with the GraphicDriver allows the loading of texture.)#");
    py::class_<Graphic3d_TextureMap ,opencascade::handle<Graphic3d_TextureMap>  , Graphic3d_TextureRoot >(m,"Graphic3d_TextureMap",R"#(This is an abstract class for managing texture applyable on polygons.This is an abstract class for managing texture applyable on polygons.This is an abstract class for managing texture applyable on polygons.)#");
    py::class_<Graphic3d_CameraTile ,std::unique_ptr<Graphic3d_CameraTile>  >(m,"Graphic3d_CameraTile",R"#(Class defines the area (Tile) inside a view.)#");
    py::class_<Graphic3d_MarkerImage ,opencascade::handle<Graphic3d_MarkerImage>  , Standard_Transient >(m,"Graphic3d_MarkerImage",R"#(This class is used to store bitmaps and images for markers rendering. It can convert bitmap texture stored in TColStd_HArray1OfByte to Image_PixMap and vice versa.This class is used to store bitmaps and images for markers rendering. It can convert bitmap texture stored in TColStd_HArray1OfByte to Image_PixMap and vice versa.)#");
    py::class_<Graphic3d_TextureEnv ,opencascade::handle<Graphic3d_TextureEnv>  , Graphic3d_TextureRoot >(m,"Graphic3d_TextureEnv",R"#(This class provides environment texture.This class provides environment texture.This class provides environment texture.)#");
    py::class_<Graphic3d_ArrayOfTriangleFans ,opencascade::handle<Graphic3d_ArrayOfTriangleFans>  , Graphic3d_ArrayOfPrimitives >(m,"Graphic3d_ArrayOfTriangleFans",R"#(Contains triangles fan array definitionContains triangles fan array definition)#");
    py::class_<Graphic3d_Texture2D ,opencascade::handle<Graphic3d_Texture2D>  , Graphic3d_TextureMap >(m,"Graphic3d_Texture2D",R"#(This abstract class for managing 2D texturesThis abstract class for managing 2D textures)#");
    py::class_<Graphic3d_Texture1D ,opencascade::handle<Graphic3d_Texture1D>  , Graphic3d_TextureMap >(m,"Graphic3d_Texture1D",R"#(This is an abstract class for managing 1D textures.This is an abstract class for managing 1D textures.This is an abstract class for managing 1D textures.)#");
    py::class_<Graphic3d_Texture1Dmanual ,opencascade::handle<Graphic3d_Texture1Dmanual>  , Graphic3d_Texture1D >(m,"Graphic3d_Texture1Dmanual",R"#(This class provides the implementation of a manual 1D texture. you MUST provides texture coordinates on your facets if you want to see your texture.This class provides the implementation of a manual 1D texture. you MUST provides texture coordinates on your facets if you want to see your texture.This class provides the implementation of a manual 1D texture. you MUST provides texture coordinates on your facets if you want to see your texture.)#");
    py::class_<Graphic3d_Texture1Dsegment ,opencascade::handle<Graphic3d_Texture1Dsegment>  , Graphic3d_Texture1D >(m,"Graphic3d_Texture1Dsegment",R"#(This class provides the implementation of a 1D texture applyable along a segment. You might use the SetSegment() method to set the way the texture is "streched" on facets.This class provides the implementation of a 1D texture applyable along a segment. You might use the SetSegment() method to set the way the texture is "streched" on facets.This class provides the implementation of a 1D texture applyable along a segment. You might use the SetSegment() method to set the way the texture is "streched" on facets.)#");
    py::class_<Graphic3d_Texture2Dplane ,opencascade::handle<Graphic3d_Texture2Dplane>  , Graphic3d_Texture2D >(m,"Graphic3d_Texture2Dplane",R"#(This class allows the management of a 2D texture defined from a plane equation Use the SetXXX() methods for positioning the texture as you want.This class allows the management of a 2D texture defined from a plane equation Use the SetXXX() methods for positioning the texture as you want.This class allows the management of a 2D texture defined from a plane equation Use the SetXXX() methods for positioning the texture as you want.)#");
    py::class_<Graphic3d_Texture2Dmanual ,opencascade::handle<Graphic3d_Texture2Dmanual>  , Graphic3d_Texture2D >(m,"Graphic3d_Texture2Dmanual",R"#(This class defined a manual texture 2D facets MUST define texture coordinate if you want to see somethings on.This class defined a manual texture 2D facets MUST define texture coordinate if you want to see somethings on.)#");

// pre-register typdefs
// ./opencascade/Graphic3d_ZLayerSettings.hxx
// ./opencascade/Graphic3d_HighlightStyle.hxx
// ./opencascade/Graphic3d_AspectTextDefinitionError.hxx
// ./opencascade/Graphic3d_PolygonOffset.hxx
// ./opencascade/Graphic3d_TypeOfBackfacingModel.hxx
// ./opencascade/Graphic3d_WorldViewProjState.hxx
// ./opencascade/Graphic3d_ExportFormat.hxx
// ./opencascade/Graphic3d_Mat4.hxx
    preregister_template_NCollection_Mat4<Standard_ShortReal>(m,"Graphic3d_Mat4");  
// ./opencascade/Graphic3d_StructureManager.hxx
// ./opencascade/Graphic3d_NameOfTexturePlane.hxx
// ./opencascade/Graphic3d_SequenceOfGroup.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Graphic3d_Group> >(m,"Graphic3d_SequenceOfGroup");  
// ./opencascade/Graphic3d_Camera.hxx
    preregister_template_NCollection_Lerp<opencascade::handle<Graphic3d_Camera> >(m,"Graphic3d_CameraLerp");  
// ./opencascade/Graphic3d_MapOfObject.hxx
// ./opencascade/Graphic3d_ArrayOfQuadrangles.hxx
// ./opencascade/Graphic3d_TypeOfBackground.hxx
// ./opencascade/Graphic3d_AspectFillArea3d.hxx
// ./opencascade/Graphic3d_TypeOfTextureFilter.hxx
// ./opencascade/Graphic3d_DiagnosticInfo.hxx
// ./opencascade/Graphic3d_TypeOfConnection.hxx
// ./opencascade/Graphic3d_TextureRoot.hxx
// ./opencascade/Graphic3d_TextureSet.hxx
// ./opencascade/Graphic3d_VerticalTextAlignment.hxx
// ./opencascade/Graphic3d_CTexture.hxx
// ./opencascade/Graphic3d_GroupDefinitionError.hxx
// ./opencascade/Graphic3d_SequenceOfHClipPlane.hxx
// ./opencascade/Graphic3d_BoundBuffer.hxx
// ./opencascade/Graphic3d_TypeOfAnswer.hxx
// ./opencascade/Graphic3d_ClipPlane.hxx
// ./opencascade/Graphic3d_ArrayOfTriangleFans.hxx
// ./opencascade/Graphic3d_HatchStyle.hxx
// ./opencascade/Graphic3d_ViewAffinity.hxx
// ./opencascade/Graphic3d_MapOfStructure.hxx
// ./opencascade/Graphic3d_ArrayOfPolylines.hxx
// ./opencascade/Graphic3d_TextureUnit.hxx
// ./opencascade/Graphic3d_ArrayOfQuadrangleStrips.hxx
// ./opencascade/Graphic3d_TypeOfPrimitiveArray.hxx
// ./opencascade/Graphic3d_TextureMap.hxx
// ./opencascade/Graphic3d_RenderingMode.hxx
// ./opencascade/Graphic3d_TypeOfShadingModel.hxx
// ./opencascade/Graphic3d_BndBox4d.hxx
    preregister_template_BVH_Box<Standard_Real, 4>(m,"Graphic3d_BndBox4d");  
// ./opencascade/Graphic3d_Texture1Dsegment.hxx
// ./opencascade/Graphic3d_ArrayOfPolygons.hxx
// ./opencascade/Graphic3d_AlphaMode.hxx
// ./opencascade/Graphic3d_HorizontalTextAlignment.hxx
// ./opencascade/Graphic3d_TransformPers.hxx
// ./opencascade/Graphic3d_Structure.hxx
// ./opencascade/Graphic3d_GraphicDriver.hxx
// ./opencascade/Graphic3d_TypeOfMaterial.hxx
// ./opencascade/Graphic3d_MaterialDefinitionError.hxx
// ./opencascade/Graphic3d_TypeOfReflection.hxx
// ./opencascade/Graphic3d_PresentationAttributes.hxx
// ./opencascade/Graphic3d_StructureDefinitionError.hxx
// ./opencascade/Graphic3d_Texture2D.hxx
// ./opencascade/Graphic3d_ShaderVariable.hxx
    preregister_template_Graphic3d_UniformValue<Standard_Integer>(m,"Graphic3d_UniformInt");  
    preregister_template_Graphic3d_UniformValue<Graphic3d_Vec2i>(m,"Graphic3d_UniformVec2i");  
    preregister_template_Graphic3d_UniformValue<Graphic3d_Vec3i>(m,"Graphic3d_UniformVec3i");  
    preregister_template_Graphic3d_UniformValue<Graphic3d_Vec4i>(m,"Graphic3d_UniformVec4i");  
    preregister_template_Graphic3d_UniformValue<Standard_ShortReal>(m,"Graphic3d_UniformFloat");  
    preregister_template_Graphic3d_UniformValue<Graphic3d_Vec2>(m,"Graphic3d_UniformVec2");  
    preregister_template_Graphic3d_UniformValue<Graphic3d_Vec3>(m,"Graphic3d_UniformVec3");  
    preregister_template_Graphic3d_UniformValue<Graphic3d_Vec4>(m,"Graphic3d_UniformVec4");  
// ./opencascade/Graphic3d_ArrayOfTriangles.hxx
// ./opencascade/Graphic3d_RenderingParams.hxx
// ./opencascade/Graphic3d_Buffer.hxx
    preregister_template_NCollection_Array1<Graphic3d_Attribute>(m,"Graphic3d_Array1OfAttribute");  
// ./opencascade/Graphic3d_ArrayOfPoints.hxx
// ./opencascade/Graphic3d_Vec4.hxx
    preregister_template_NCollection_Vec4<Standard_ShortReal>(m,"Graphic3d_Vec4");  
    preregister_template_NCollection_Vec4<Standard_Real>(m,"Graphic3d_Vec4d");  
    preregister_template_NCollection_Vec4<Standard_Integer>(m,"Graphic3d_Vec4i");  
    preregister_template_NCollection_Vec4<Standard_Byte>(m,"Graphic3d_Vec4ub");  
    preregister_template_NCollection_Vec4<Standard_Character>(m,"Graphic3d_Vec4b");  
// ./opencascade/Graphic3d_AspectText3d.hxx
// ./opencascade/Graphic3d_SequenceOfStructure.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Graphic3d_Structure> >(m,"Graphic3d_SequenceOfStructure");  
// ./opencascade/Graphic3d_Vec3.hxx
    preregister_template_NCollection_Vec3<Standard_ShortReal>(m,"Graphic3d_Vec3");  
    preregister_template_NCollection_Vec3<Standard_Integer>(m,"Graphic3d_Vec3i");  
    preregister_template_NCollection_Vec3<Standard_Byte>(m,"Graphic3d_Vec3ub");  
    preregister_template_NCollection_Vec3<Standard_Character>(m,"Graphic3d_Vec3b");  
// ./opencascade/Graphic3d_MapIteratorOfMapOfStructure.hxx
// ./opencascade/Graphic3d_TypeOfLightSource.hxx
// ./opencascade/Graphic3d_CameraTile.hxx
// ./opencascade/Graphic3d_BndBox3d.hxx
    preregister_template_BVH_Box<Standard_Real, 3>(m,"Graphic3d_BndBox3d");  
// ./opencascade/Graphic3d_CLight.hxx
// ./opencascade/Graphic3d_Texture2Dmanual.hxx
// ./opencascade/Graphic3d_TypeOfStructure.hxx
// ./opencascade/Graphic3d_CView.hxx
// ./opencascade/Graphic3d_LightSet.hxx
// ./opencascade/Graphic3d_TypeOfShaderObject.hxx
// ./opencascade/Graphic3d_TransformError.hxx
// ./opencascade/Graphic3d_Mat4d.hxx
    preregister_template_NCollection_Mat4<Standard_Real>(m,"Graphic3d_Mat4d");  
// ./opencascade/Graphic3d_IndexedMapOfAddress.hxx
// ./opencascade/Graphic3d_GraduatedTrihedron.hxx
// ./opencascade/Graphic3d_MaterialAspect.hxx
// ./opencascade/Graphic3d_TransModeFlags.hxx
// ./opencascade/Graphic3d_RenderTransparentMethod.hxx
// ./opencascade/Graphic3d_MarkerImage.hxx
// ./opencascade/Graphic3d_PriorityDefinitionError.hxx
// ./opencascade/Graphic3d_NameOfTexture1D.hxx
// ./opencascade/Graphic3d_ArrayOfSegments.hxx
// ./opencascade/Graphic3d_Vec2.hxx
    preregister_template_NCollection_Vec2<Standard_ShortReal>(m,"Graphic3d_Vec2");  
    preregister_template_NCollection_Vec2<Standard_Real>(m,"Graphic3d_Vec2d");  
    preregister_template_NCollection_Vec2<Standard_Integer>(m,"Graphic3d_Vec2i");  
    preregister_template_NCollection_Vec2<Standard_Byte>(m,"Graphic3d_Vec2ub");  
    preregister_template_NCollection_Vec2<Standard_Character>(m,"Graphic3d_Vec2b");  
// ./opencascade/Graphic3d_SortType.hxx
// ./opencascade/Graphic3d_BSDF.hxx
// ./opencascade/Graphic3d_Group.hxx
// ./opencascade/Graphic3d_ShaderObject.hxx
// ./opencascade/Graphic3d_Texture1D.hxx
// ./opencascade/Graphic3d_TypeOfVisualization.hxx
// ./opencascade/Graphic3d_CStructure.hxx
// ./opencascade/Graphic3d_TypeOfTextureMode.hxx
// ./opencascade/Graphic3d_AspectMarker3d.hxx
// ./opencascade/Graphic3d_Texture2Dplane.hxx
// ./opencascade/Graphic3d_GroupAspect.hxx
// ./opencascade/Graphic3d_IndexBuffer.hxx
// ./opencascade/Graphic3d_TypeOfLimit.hxx
// ./opencascade/Graphic3d_TypeOfTexture.hxx
// ./opencascade/Graphic3d_Vec.hxx
// ./opencascade/Graphic3d_Texture1Dmanual.hxx
// ./opencascade/Graphic3d_ZLayerId.hxx
// ./opencascade/Graphic3d_CappingFlags.hxx
// ./opencascade/Graphic3d_BufferType.hxx
// ./opencascade/Graphic3d_DataStructureManager.hxx
// ./opencascade/Graphic3d_BndBox4f.hxx
    preregister_template_BVH_Box<Standard_ShortReal, 4>(m,"Graphic3d_BndBox4f");  
// ./opencascade/Graphic3d_TypeOfComposition.hxx
// ./opencascade/Graphic3d_ShaderAttribute.hxx
// ./opencascade/Graphic3d_ArrayOfTriangleStrips.hxx
// ./opencascade/Graphic3d_LevelOfTextureAnisotropy.hxx
// ./opencascade/Graphic3d_Vertex.hxx
// ./opencascade/Graphic3d_NMapOfTransient.hxx
// ./opencascade/Graphic3d_TextureEnv.hxx
// ./opencascade/Graphic3d_TextPath.hxx
// ./opencascade/Graphic3d_NameOfTexture2D.hxx
// ./opencascade/Graphic3d_AspectLine3d.hxx
// ./opencascade/Graphic3d_ToneMappingMethod.hxx
// ./opencascade/Graphic3d_ShaderProgram.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Graphic3d_ShaderObject> >(m,"Graphic3d_ShaderObjectList");  
    preregister_template_NCollection_Sequence<opencascade::handle<Graphic3d_ShaderVariable> >(m,"Graphic3d_ShaderVariableList");  
    preregister_template_NCollection_Sequence<opencascade::handle<Graphic3d_ShaderAttribute> >(m,"Graphic3d_ShaderAttributeList");  
// ./opencascade/Graphic3d_TransformUtils.hxx
// ./opencascade/Graphic3d_ArrayOfPrimitives.hxx
// ./opencascade/Graphic3d_NameOfTextureEnv.hxx
// ./opencascade/Graphic3d_TextureParams.hxx
// ./opencascade/Graphic3d_NameOfMaterial.hxx
// ./opencascade/Graphic3d_StereoMode.hxx

};

// user-defined post-inclusion per module

// user-defined post
