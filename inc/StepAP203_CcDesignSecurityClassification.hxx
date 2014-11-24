// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_CcDesignSecurityClassification_HeaderFile
#define _StepAP203_CcDesignSecurityClassification_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP203_CcDesignSecurityClassification.hxx>

#include <Handle_StepAP203_HArray1OfClassifiedItem.hxx>
#include <StepBasic_SecurityClassificationAssignment.hxx>
#include <Handle_StepBasic_SecurityClassification.hxx>
class StepAP203_HArray1OfClassifiedItem;
class StepBasic_SecurityClassification;


//! Representation of STEP entity CcDesignSecurityClassification
class StepAP203_CcDesignSecurityClassification : public StepBasic_SecurityClassificationAssignment
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepAP203_CcDesignSecurityClassification();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_SecurityClassification)& aSecurityClassificationAssignment_AssignedSecurityClassification, const Handle(StepAP203_HArray1OfClassifiedItem)& aItems) ;
  
  //! Returns field Items
  Standard_EXPORT   Handle(StepAP203_HArray1OfClassifiedItem) Items()  const;
  
  //! Set field Items
  Standard_EXPORT   void SetItems (const Handle(StepAP203_HArray1OfClassifiedItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP203_CcDesignSecurityClassification)

protected:




private: 


  Handle(StepAP203_HArray1OfClassifiedItem) theItems;


};







#endif // _StepAP203_CcDesignSecurityClassification_HeaderFile
