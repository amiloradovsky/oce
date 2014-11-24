// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomAdaptor_HeaderFile
#define _GeomAdaptor_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom_Surface.hxx>
class Geom_Curve;
class Adaptor3d_Curve;
class Geom_Surface;
class Adaptor3d_Surface;
class GeomAdaptor_Curve;
class GeomAdaptor_Surface;
class GeomAdaptor_GHSurface;
class GeomAdaptor_HSurface;
class GeomAdaptor_GHCurve;
class GeomAdaptor_HCurve;


//! this package contains the  geometric definition of
//! curve and surface necessary to use algorithmes.
class GeomAdaptor 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Inherited  from    GHCurve.   Provides a  curve
  //! handled by reference.
  //! Build a Geom_Curve using the informations from the
  //! Curve from Adaptor3d
  Standard_EXPORT static   Handle(Geom_Curve) MakeCurve (const Adaptor3d_Curve& C) ;
  
  //! Build a Geom_Surface using the informations from the
  //! Surface from Adaptor3d
  Standard_EXPORT static   Handle(Geom_Surface) MakeSurface (const Adaptor3d_Surface& S) ;




protected:





private:




friend class GeomAdaptor_Curve;
friend class GeomAdaptor_Surface;
friend class GeomAdaptor_GHSurface;
friend class GeomAdaptor_HSurface;
friend class GeomAdaptor_GHCurve;
friend class GeomAdaptor_HCurve;

};







#endif // _GeomAdaptor_HeaderFile
