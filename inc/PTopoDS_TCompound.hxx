// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_TCompound_HeaderFile
#define _PTopoDS_TCompound_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PTopoDS_TCompound.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <PTopoDS_TShape.hxx>


class PTopoDS_TCompound : public PTopoDS_TShape
{

public:

  
  //! the new TCompound is empty.
  Standard_EXPORT PTopoDS_TCompound();
  
  Standard_EXPORT   TopAbs_ShapeEnum ShapeType()  const;

PTopoDS_TCompound(const Storage_stCONSTclCOM& a) : PTopoDS_TShape(a)
{
  
}



  DEFINE_STANDARD_RTTI(PTopoDS_TCompound)

protected:




private: 




};







#endif // _PTopoDS_TCompound_HeaderFile
