// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapOfOrientedShapeShape_HeaderFile
#define _TopTools_DataMapOfOrientedShapeShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopTools_DataMapNodeOfDataMapOfOrientedShapeShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class TopTools_DataMapNodeOfDataMapOfOrientedShapeShape;
class TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape;



class TopTools_DataMapOfOrientedShapeShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_DataMapOfOrientedShapeShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopTools_DataMapOfOrientedShapeShape& Assign (const TopTools_DataMapOfOrientedShapeShape& Other) ;
  TopTools_DataMapOfOrientedShapeShape& operator = (const TopTools_DataMapOfOrientedShapeShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopTools_DataMapOfOrientedShapeShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const TopoDS_Shape& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Find (const TopoDS_Shape& K)  const;
 const  TopoDS_Shape& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopoDS_Shape& ChangeFind (const TopoDS_Shape& K) ;
  TopoDS_Shape& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopTools_DataMapOfOrientedShapeShape(const TopTools_DataMapOfOrientedShapeShape& Other);




};







#endif // _TopTools_DataMapOfOrientedShapeShape_HeaderFile
