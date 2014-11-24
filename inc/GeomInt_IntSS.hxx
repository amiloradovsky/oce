// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_IntSS_HeaderFile
#define _GeomInt_IntSS_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <IntPatch_Intersection.hxx>
#include <GeomInt_LineConstructor.hxx>
#include <Handle_GeomAdaptor_HSurface.hxx>
#include <Standard_Integer.hxx>
#include <TColGeom_SequenceOfCurve.hxx>
#include <TColGeom2d_SequenceOfCurve.hxx>
#include <Standard_Real.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Handle_Adaptor3d_TopolTool.hxx>
class GeomAdaptor_HSurface;
class StdFail_NotDone;
class Standard_OutOfRange;
class Geom_Surface;
class Geom_Curve;
class Geom2d_Curve;
class gp_Pnt2d;
class Adaptor3d_TopolTool;



class GeomInt_IntSS 
{
public:

  DEFINE_STANDARD_ALLOC

  
    GeomInt_IntSS();
  
  //! performs general intersection of two surfaces just now
    GeomInt_IntSS(const Handle(Geom_Surface)& S1, const Handle(Geom_Surface)& S2, const Standard_Real Tol, const Standard_Boolean Approx = Standard_True, const Standard_Boolean ApproxS1 = Standard_False, const Standard_Boolean ApproxS2 = Standard_False);
  
  //! general intersection of two surfaces
  Standard_EXPORT   void Perform (const Handle(Geom_Surface)& S1, const Handle(Geom_Surface)& S2, const Standard_Real Tol, const Standard_Boolean Approx = Standard_True, const Standard_Boolean ApproxS1 = Standard_False, const Standard_Boolean ApproxS2 = Standard_False) ;
  
  //! intersection of adapted surfaces
      void Perform (const Handle(GeomAdaptor_HSurface)& HS1, const Handle(GeomAdaptor_HSurface)& HS2, const Standard_Real Tol, const Standard_Boolean Approx = Standard_True, const Standard_Boolean ApproxS1 = Standard_False, const Standard_Boolean ApproxS2 = Standard_False) ;
  
  //! general intersection using a starting point
  Standard_EXPORT   void Perform (const Handle(Geom_Surface)& S1, const Handle(Geom_Surface)& S2, const Standard_Real Tol, const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2, const Standard_Boolean Approx = Standard_True, const Standard_Boolean ApproxS1 = Standard_False, const Standard_Boolean ApproxS2 = Standard_False) ;
  
  //! intersection of adapted surfaces using a starting point
      void Perform (const Handle(GeomAdaptor_HSurface)& HS1, const Handle(GeomAdaptor_HSurface)& HS2, const Standard_Real Tol, const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2, const Standard_Boolean Approx = Standard_True, const Standard_Boolean ApproxS1 = Standard_False, const Standard_Boolean ApproxS2 = Standard_False) ;
  
      Standard_Boolean IsDone()  const;
  
      Standard_Real TolReached3d()  const;
  
      Standard_Real TolReached2d()  const;
  
      Standard_Integer NbLines()  const;
  
  Standard_EXPORT  const  Handle(Geom_Curve)& Line (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Boolean HasLineOnS1 (const Standard_Integer Index)  const;
  
  Standard_EXPORT  const  Handle(Geom2d_Curve)& LineOnS1 (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Boolean HasLineOnS2 (const Standard_Integer Index)  const;
  
  Standard_EXPORT  const  Handle(Geom2d_Curve)& LineOnS2 (const Standard_Integer Index)  const;
  
      Standard_Integer NbBoundaries()  const;
  
  Standard_EXPORT  const  Handle(Geom_Curve)& Boundary (const Standard_Integer Index)  const;
  
      Standard_Integer NbPoints()  const;
  
      gp_Pnt Point (const Standard_Integer Index)  const;
  
  Standard_EXPORT   gp_Pnt2d Pnt2d (const Standard_Integer Index, const Standard_Boolean OnFirst)  const;
  
  Standard_EXPORT   void SetTolFixTangents (const Standard_Real aTolCheck, const Standard_Real aTolAngCheck) ;
  
  Standard_EXPORT   void TolFixTangents (Standard_Real& aTolCheck, Standard_Real& aTolAngCheck) ;




protected:

  
  Standard_EXPORT   void InternalPerform (const Standard_Real Tol, const Standard_Boolean Approx, const Standard_Boolean ApproxS1, const Standard_Boolean ApproxS2, const Standard_Boolean useStart, const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2) ;
  
  Standard_EXPORT   void MakeCurve (const Standard_Integer Ind, const Handle(Adaptor3d_TopolTool)& D1, const Handle(Adaptor3d_TopolTool)& D2, const Standard_Real Tol, const Standard_Boolean Approx, const Standard_Boolean Approx1, const Standard_Boolean Approx2) ;




private:



  IntPatch_Intersection myIntersector;
  GeomInt_LineConstructor myLConstruct;
  Handle(GeomAdaptor_HSurface) myHS1;
  Handle(GeomAdaptor_HSurface) myHS2;
  Standard_Integer myNbrestr;
  TColGeom_SequenceOfCurve sline;
  TColGeom2d_SequenceOfCurve slineS1;
  TColGeom2d_SequenceOfCurve slineS2;
  Standard_Real myTolReached2d;
  Standard_Real myTolReached3d;
  Standard_Real myTolCheck;
  Standard_Real myTolAngCheck;


};


#include <GeomInt_IntSS.lxx>





#endif // _GeomInt_IntSS_HeaderFile
