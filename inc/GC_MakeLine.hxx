// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeLine_HeaderFile
#define _GC_MakeLine_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_Line.hxx>
#include <GC_Root.hxx>
class Geom_Line;
class StdFail_NotDone;
class gp_Ax1;
class gp_Lin;
class gp_Pnt;
class gp_Dir;


//! This class implements the following algorithms used
//! to create a Line from Geom.
//! * Create a Line parallel to another and passing
//! through a point.
//! * Create a Line passing through 2 points.
//! A MakeLine object provides a framework for:
//! -   defining the construction of the line,
//! -   implementing the construction algorithm, and
//! -   consulting the results. In particular, the Value
//! function returns the constructed line.
class GC_MakeLine  : public GC_Root
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Creates a line located in 3D space with the axis placement A1.
  //! The Location of A1 is the origin of the line.
  Standard_EXPORT GC_MakeLine(const gp_Ax1& A1);
  

  //! Creates a line from a non persistent line from package gp.
  Standard_EXPORT GC_MakeLine(const gp_Lin& L);
  

  //! P is the origin and V is the direction of the line.
  Standard_EXPORT GC_MakeLine(const gp_Pnt& P, const gp_Dir& V);
  
  //! Make a Line from Geom <TheLin> parallel to another
  //! Lin <Lin> and passing through a Pnt <Point>.
  Standard_EXPORT GC_MakeLine(const gp_Lin& Lin, const gp_Pnt& Point);
  
  //! Make a Line from Geom <TheLin> passing through 2
  //! Pnt <P1>,<P2>.
  //! It returns false if <p1> and <P2> are confused.
  //! Warning
  //! If the points P1 and P2 are coincident (that is, when
  //! IsDone returns false), the Status function returns gce_ConfusedPoints.
  Standard_EXPORT GC_MakeLine(const gp_Pnt& P1, const gp_Pnt& P2);
  
  //! Returns the constructed line.
  //! Exceptions StdFail_NotDone if no line is constructed.
  Standard_EXPORT  const  Handle(Geom_Line)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom_Line)& Operator()  const;
Standard_EXPORT operator Handle_Geom_Line() const;




protected:





private:



  Handle(Geom_Line) TheLine;


};







#endif // _GC_MakeLine_HeaderFile
