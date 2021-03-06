// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_DataMapIteratorOfMetaDataLookUpTable_HeaderFile
#define _CDM_DataMapIteratorOfMetaDataLookUpTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_CDM_MetaData.hxx>
#include <Handle_CDM_DataMapNodeOfMetaDataLookUpTable.hxx>
class Standard_NoSuchObject;
class TCollection_ExtendedString;
class CDM_MetaData;
class CDM_MetaDataLookUpTable;
class CDM_DataMapNodeOfMetaDataLookUpTable;



class CDM_DataMapIteratorOfMetaDataLookUpTable  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT CDM_DataMapIteratorOfMetaDataLookUpTable();
  
  Standard_EXPORT CDM_DataMapIteratorOfMetaDataLookUpTable(const CDM_MetaDataLookUpTable& aMap);
  
  Standard_EXPORT   void Initialize (const CDM_MetaDataLookUpTable& aMap) ;
  
  Standard_EXPORT  const  TCollection_ExtendedString& Key()  const;
  
  Standard_EXPORT  const  Handle(CDM_MetaData)& Value()  const;




protected:





private:





};







#endif // _CDM_DataMapIteratorOfMetaDataLookUpTable_HeaderFile
