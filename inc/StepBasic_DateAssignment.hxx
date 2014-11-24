// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DateAssignment_HeaderFile
#define _StepBasic_DateAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_DateAssignment.hxx>

#include <Handle_StepBasic_Date.hxx>
#include <Handle_StepBasic_DateRole.hxx>
#include <MMgt_TShared.hxx>
class StepBasic_Date;
class StepBasic_DateRole;



class StepBasic_DateAssignment : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_Date)& aAssignedDate, const Handle(StepBasic_DateRole)& aRole) ;
  
  Standard_EXPORT   void SetAssignedDate (const Handle(StepBasic_Date)& aAssignedDate) ;
  
  Standard_EXPORT   Handle(StepBasic_Date) AssignedDate()  const;
  
  Standard_EXPORT   void SetRole (const Handle(StepBasic_DateRole)& aRole) ;
  
  Standard_EXPORT   Handle(StepBasic_DateRole) Role()  const;




  DEFINE_STANDARD_RTTI(StepBasic_DateAssignment)

protected:




private: 


  Handle(StepBasic_Date) assignedDate;
  Handle(StepBasic_DateRole) role;


};







#endif // _StepBasic_DateAssignment_HeaderFile
