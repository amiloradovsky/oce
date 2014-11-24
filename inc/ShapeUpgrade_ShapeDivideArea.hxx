// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_ShapeDivideArea_HeaderFile
#define _ShapeUpgrade_ShapeDivideArea_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <ShapeUpgrade_ShapeDivide.hxx>
#include <Handle_ShapeUpgrade_FaceDivide.hxx>
class TopoDS_Shape;
class ShapeUpgrade_FaceDivide;


//! Divides faces from sprcified shape  by max area criterium.
class ShapeUpgrade_ShapeDivideArea  : public ShapeUpgrade_ShapeDivide
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ShapeUpgrade_ShapeDivideArea();
  
  //! Initialize by a Shape.
  Standard_EXPORT ShapeUpgrade_ShapeDivideArea(const TopoDS_Shape& S);
  
  //! Set max area allowed for faces
      Standard_Real& MaxArea() ;




protected:

  
  //! Returns the tool for splitting faces.
  Standard_EXPORT virtual   Handle(ShapeUpgrade_FaceDivide) GetSplitFaceTool()  const;




private:



  Standard_Real myMaxArea;


};


#include <ShapeUpgrade_ShapeDivideArea.lxx>





#endif // _ShapeUpgrade_ShapeDivideArea_HeaderFile
