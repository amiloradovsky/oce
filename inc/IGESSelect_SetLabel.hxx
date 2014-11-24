// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SetLabel_HeaderFile
#define _IGESSelect_SetLabel_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SetLabel.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <IGESSelect_ModelModifier.hxx>
#include <Handle_IGESData_IGESModel.hxx>
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Sets/Clears Short Label of Entities, those designated by the
//! Selection. No Selection means all the file
//!
//! May enforce, else it sets only if no label is yet set
//! Mode : 0 to clear (always enforced)
//! 1 to set label to DE number (changes it if already set)
class IGESSelect_SetLabel : public IGESSelect_ModelModifier
{

public:

  
  //! Creates a SetLabel for IGESEntity
  //! Mode : see Purpose of the class
  Standard_EXPORT IGESSelect_SetLabel(const Standard_Integer mode, const Standard_Boolean enforce);
  
  //! Specific action : Sets or Clears the Label
  Standard_EXPORT   void Performing (IFSelect_ContextModif& ctx, const Handle(IGESData_IGESModel)& target, Interface_CopyTool& TC)  const;
  
  //! Returns a text which is
  //! "Clear Short Label"  or  "Set Label to DE"
  //! With possible additional information " (enforced)"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SetLabel)

protected:




private: 


  Standard_Integer themode;
  Standard_Boolean theforce;


};







#endif // _IGESSelect_SetLabel_HeaderFile
