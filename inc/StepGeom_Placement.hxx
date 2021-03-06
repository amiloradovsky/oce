// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Placement_HeaderFile
#define _StepGeom_Placement_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_Placement.hxx>

#include <Handle_StepGeom_CartesianPoint.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepGeom_CartesianPoint;
class TCollection_HAsciiString;



class StepGeom_Placement : public StepGeom_GeometricRepresentationItem
{

public:

  
  //! Returns a Placement
  Standard_EXPORT StepGeom_Placement();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_CartesianPoint)& aLocation) ;
  
  Standard_EXPORT   void SetLocation (const Handle(StepGeom_CartesianPoint)& aLocation) ;
  
  Standard_EXPORT   Handle(StepGeom_CartesianPoint) Location()  const;




  DEFINE_STANDARD_RTTI(StepGeom_Placement)

protected:




private: 


  Handle(StepGeom_CartesianPoint) location;


};







#endif // _StepGeom_Placement_HeaderFile
