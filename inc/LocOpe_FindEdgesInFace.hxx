// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_FindEdgesInFace_HeaderFile
#define _LocOpe_FindEdgesInFace_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>
#include <Standard_Boolean.hxx>
class Standard_ConstructionError;
class Standard_NoSuchObject;
class Standard_NoMoreObject;
class TopoDS_Shape;
class TopoDS_Face;
class TopoDS_Edge;



class LocOpe_FindEdgesInFace 
{
public:

  DEFINE_STANDARD_ALLOC

  
    LocOpe_FindEdgesInFace();
  
    LocOpe_FindEdgesInFace(const TopoDS_Shape& S, const TopoDS_Face& F);
  
  Standard_EXPORT   void Set (const TopoDS_Shape& S, const TopoDS_Face& F) ;
  
      void Init() ;
  
      Standard_Boolean More()  const;
  
     const  TopoDS_Edge& Edge()  const;
  
      void Next() ;




protected:





private:



  TopoDS_Shape myShape;
  TopoDS_Face myFace;
  TopTools_ListOfShape myList;
  TopTools_ListIteratorOfListOfShape myIt;


};


#include <LocOpe_FindEdgesInFace.lxx>





#endif // _LocOpe_FindEdgesInFace_HeaderFile
