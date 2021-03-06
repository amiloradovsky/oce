// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DataMapIteratorOfPersistentTransientMap_HeaderFile
#define _PTColStd_DataMapIteratorOfPersistentTransientMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_PTColStd_DataMapNodeOfPersistentTransientMap.hxx>
class Standard_NoSuchObject;
class Standard_Persistent;
class Standard_Transient;
class PTColStd_MapPersistentHasher;
class PTColStd_PersistentTransientMap;
class PTColStd_DataMapNodeOfPersistentTransientMap;



class PTColStd_DataMapIteratorOfPersistentTransientMap  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PTColStd_DataMapIteratorOfPersistentTransientMap();
  
  Standard_EXPORT PTColStd_DataMapIteratorOfPersistentTransientMap(const PTColStd_PersistentTransientMap& aMap);
  
  Standard_EXPORT   void Initialize (const PTColStd_PersistentTransientMap& aMap) ;
  
  Standard_EXPORT  const  Handle(Standard_Persistent)& Key()  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Value()  const;




protected:





private:





};







#endif // _PTColStd_DataMapIteratorOfPersistentTransientMap_HeaderFile
