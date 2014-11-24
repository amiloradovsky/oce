// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeRectangularTrimmedSurface_HeaderFile
#define _StepToGeom_MakeRectangularTrimmedSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Handle_StepGeom_RectangularTrimmedSurface.hxx>
#include <Handle_Geom_RectangularTrimmedSurface.hxx>
class StepGeom_RectangularTrimmedSurface;
class Geom_RectangularTrimmedSurface;


//! This class implements the mapping between classes
//! RectangularTrimmedSurface from StepGeom
//! and class RectangularTrimmedSurface from Geom
class StepToGeom_MakeRectangularTrimmedSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean Convert (const Handle(StepGeom_RectangularTrimmedSurface)& SS, Handle(Geom_RectangularTrimmedSurface)& CS) ;




protected:





private:





};







#endif // _StepToGeom_MakeRectangularTrimmedSurface_HeaderFile
