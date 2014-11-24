// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_UncertaintyMeasureWithUnit_HeaderFile
#define _StepBasic_UncertaintyMeasureWithUnit_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_UncertaintyMeasureWithUnit.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <Handle_StepBasic_MeasureValueMember.hxx>
class TCollection_HAsciiString;
class StepBasic_MeasureValueMember;
class StepBasic_Unit;



class StepBasic_UncertaintyMeasureWithUnit : public StepBasic_MeasureWithUnit
{

public:

  
  //! Returns a UncertaintyMeasureWithUnit
  Standard_EXPORT StepBasic_UncertaintyMeasureWithUnit();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_MeasureValueMember)& aValueComponent, const StepBasic_Unit& aUnitComponent) ;
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_MeasureValueMember)& aValueComponent, const StepBasic_Unit& aUnitComponent, const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;




  DEFINE_STANDARD_RTTI(StepBasic_UncertaintyMeasureWithUnit)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(TCollection_HAsciiString) description;


};







#endif // _StepBasic_UncertaintyMeasureWithUnit_HeaderFile
