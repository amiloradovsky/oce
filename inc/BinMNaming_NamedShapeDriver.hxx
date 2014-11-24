// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMNaming_NamedShapeDriver_HeaderFile
#define _BinMNaming_NamedShapeDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_BinMNaming_NamedShapeDriver.hxx>

#include <BinTools_ShapeSet.hxx>
#include <Standard_Integer.hxx>
#include <BinMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Standard_Boolean.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>
#include <Standard_IStream.hxx>
#include <Standard_OStream.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class BinObjMgt_Persistent;
class BinTools_LocationSet;


//! NamedShape  Attribute Driver.
class BinMNaming_NamedShapeDriver : public BinMDF_ADriver
{

public:

  
  Standard_EXPORT BinMNaming_NamedShapeDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   Standard_Boolean Paste (const BinObjMgt_Persistent& Source, const Handle(TDF_Attribute)& Target, BinObjMgt_RRelocationTable& RelocTable)  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Source, BinObjMgt_Persistent& Target, BinObjMgt_SRelocationTable& RelocTable)  const;
  
  //! Input the shapes from Bin Document file
  Standard_EXPORT   void ReadShapeSection (Standard_IStream& theIS) ;
  
  //! Output the shapes into Bin Document file
  Standard_EXPORT   void WriteShapeSection (Standard_OStream& theOS) ;
  
  //! Clear myShapeSet
  Standard_EXPORT   void Clear() ;
  
  //! set whether to store triangulation
      void SetWithTriangles (const Standard_Boolean isWithTriangles) ;
  
  //! set the format of topology
  //! First : does not write CurveOnSurface UV Points into the file
  //! on reading calls Check() method.
  //! Second: stores CurveOnSurface UV Points.
      void SetFormatNb (const Standard_Integer theFormat) ;
  
  //! get the format of topology
      Standard_Integer GetFormatNb()  const;
  
  //! get the format of topology
      BinTools_LocationSet& GetShapesLocations() ;




  DEFINE_STANDARD_RTTI(BinMNaming_NamedShapeDriver)

protected:




private: 


  BinTools_ShapeSet myShapeSet;
  Standard_Integer myFormatNb;


};


#include <BinMNaming_NamedShapeDriver.lxx>





#endif // _BinMNaming_NamedShapeDriver_HeaderFile
