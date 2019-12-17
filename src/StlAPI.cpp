
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <StlAPI_Writer.hxx>
#include <StlAPI_Reader.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <StlAPI.hxx>
#include <StlAPI_Reader.hxx>
#include <StlAPI_Writer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StlAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StlAPI"));


//Python trampoline classes

// classes

    register_default_constructor<StlAPI ,std::unique_ptr<StlAPI>>(m,"StlAPI");

    static_cast<py::class_<StlAPI ,std::unique_ptr<StlAPI>  >>(m.attr("StlAPI"))
        .def_static("Write_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const Standard_CString ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const Standard_CString ,  const Standard_Boolean  ) >(&StlAPI::Write),
                    R"#(Convert and write shape to STL format. File is written in binary if aAsciiMode is False otherwise it is written in Ascii (by default).)#"  , py::arg("theShape"),  py::arg("theFile"),  py::arg("theAsciiMode")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Read_s",
                    (Standard_Boolean (*)( TopoDS_Shape & ,  const Standard_CString  ) ) static_cast<Standard_Boolean (*)( TopoDS_Shape & ,  const Standard_CString  ) >(&StlAPI::Read),
                    R"#(None)#"  , py::arg("theShape"),  py::arg("aFile"))
;


    static_cast<py::class_<StlAPI_Writer ,std::unique_ptr<StlAPI_Writer>  >>(m.attr("StlAPI_Writer"))
        .def(py::init<  >()  )
        .def("ASCIIMode",
             (Standard_Boolean & (StlAPI_Writer::*)() ) static_cast<Standard_Boolean & (StlAPI_Writer::*)() >(&StlAPI_Writer::ASCIIMode),
             R"#(Returns the address to the flag defining the mode for writing the file. This address may be used to either read or change the flag. If the mode returns True (default value) the generated file is an ASCII file. If the mode returns False, the generated file is a binary file.)#" )
        .def("Write",
             (Standard_Boolean (StlAPI_Writer::*)( const TopoDS_Shape & ,  const Standard_CString  ) ) static_cast<Standard_Boolean (StlAPI_Writer::*)( const TopoDS_Shape & ,  const Standard_CString  ) >(&StlAPI_Writer::Write),
             R"#(Converts a given shape to STL format and writes it to file with a given filename.)#"  , py::arg("theShape"),  py::arg("theFileName"))
;

// functions
// ./opencascade/StlAPI.hxx
// ./opencascade/StlAPI_Writer.hxx
// ./opencascade/StlAPI_Reader.hxx

// operators

// register typdefs
// ./opencascade/StlAPI.hxx
// ./opencascade/StlAPI_Writer.hxx
// ./opencascade/StlAPI_Reader.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
