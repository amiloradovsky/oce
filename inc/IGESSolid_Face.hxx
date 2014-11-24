// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_Face_HeaderFile
#define _IGESSolid_Face_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_Face.hxx>

#include <Handle_IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_IGESSolid_HArray1OfLoop.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IGESSolid_Loop.hxx>
class IGESData_IGESEntity;
class IGESSolid_HArray1OfLoop;
class Standard_OutOfRange;
class IGESSolid_Loop;


//! defines Face, Type <510> Form Number <1>
//! in package IGESSolid
//! Face entity is a bound (partial) which has finite area
class IGESSolid_Face : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_Face();
  
  //! This method is used to set the fields of the class Face
  //! - aSurface      : Pointer to the underlying surface
  //! - outerLoopFlag : True means the first loop is the outer loop
  //! - loops         : Array of loops bounding the face
  Standard_EXPORT   void Init (const Handle(IGESData_IGESEntity)& aSurface, const Standard_Boolean outerLoopFlag, const Handle(IGESSolid_HArray1OfLoop)& loops) ;
  
  //! returns the underlying surface of the face
  Standard_EXPORT   Handle(IGESData_IGESEntity) Surface()  const;
  
  //! returns the number of the loops bounding the face
  Standard_EXPORT   Standard_Integer NbLoops()  const;
  
  //! checks whether there is an outer loop or not
  Standard_EXPORT   Standard_Boolean HasOuterLoop()  const;
  
  //! returns the Index'th loop that bounds the face
  //! raises exception if Index < 0 or Index >= NbLoops
  Standard_EXPORT   Handle(IGESSolid_Loop) Loop (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESSolid_Face)

protected:




private: 


  Handle(IGESData_IGESEntity) theSurface;
  Standard_Boolean hasOuterLoop;
  Handle(IGESSolid_HArray1OfLoop) theLoops;


};







#endif // _IGESSolid_Face_HeaderFile
