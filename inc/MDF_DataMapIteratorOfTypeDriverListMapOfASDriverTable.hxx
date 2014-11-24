// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable_HeaderFile
#define _MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.hxx>
class Standard_NoSuchObject;
class Standard_Type;
class MDF_DriverListOfASDriverTable;
class TColStd_MapTransientHasher;
class MDF_TypeDriverListMapOfASDriverTable;
class MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable;



class MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable();
  
  Standard_EXPORT MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable(const MDF_TypeDriverListMapOfASDriverTable& aMap);
  
  Standard_EXPORT   void Initialize (const MDF_TypeDriverListMapOfASDriverTable& aMap) ;
  
  Standard_EXPORT  const  Handle(Standard_Type)& Key()  const;
  
  Standard_EXPORT  const  MDF_DriverListOfASDriverTable& Value()  const;




protected:





private:





};







#endif // _MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable_HeaderFile
