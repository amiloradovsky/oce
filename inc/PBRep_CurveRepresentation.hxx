// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_CurveRepresentation_HeaderFile
#define _PBRep_CurveRepresentation_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PBRep_CurveRepresentation.hxx>

#include <PTopLoc_Location.hxx>
#include <Handle_PBRep_CurveRepresentation.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Persistent.hxx>
class PTopLoc_Location;


class PBRep_CurveRepresentation : public Standard_Persistent
{

public:

  
  Standard_EXPORT   PTopLoc_Location Location()  const;
  
  Standard_EXPORT   Handle(PBRep_CurveRepresentation) Next()  const;
  
  Standard_EXPORT   void Next (const Handle(PBRep_CurveRepresentation)& N) ;
  
  //! A 3D curve representation.
  Standard_EXPORT virtual   Standard_Boolean IsCurve3D()  const;
  
  //! A curve in the parametric space of a surface.
  Standard_EXPORT virtual   Standard_Boolean IsCurveOnSurface()  const;
  
  //! A continuity between two surfaces.
  Standard_EXPORT virtual   Standard_Boolean IsRegularity()  const;
  
  //! A curve with two parametric   curves  on the  same
  //! surface.
  Standard_EXPORT virtual   Standard_Boolean IsCurveOnClosedSurface()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsGCurve()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsPolygon3D()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsPolygonOnTriangulation()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsPolygonOnClosedTriangulation()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsPolygonOnSurface()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsPolygonOnClosedSurface()  const;

PBRep_CurveRepresentation( )
{
  
}
PBRep_CurveRepresentation(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    const PTopLoc_Location& _CSFDB_GetPBRep_CurveRepresentationmyLocation() const { return myLocation; }
    Handle(PBRep_CurveRepresentation) _CSFDB_GetPBRep_CurveRepresentationmyNext() const { return myNext; }
    void _CSFDB_SetPBRep_CurveRepresentationmyNext(const Handle(PBRep_CurveRepresentation)& p) { myNext = p; }



  DEFINE_STANDARD_RTTI(PBRep_CurveRepresentation)

protected:

  
  Standard_EXPORT PBRep_CurveRepresentation(const PTopLoc_Location& L);



private: 


  PTopLoc_Location myLocation;
  Handle(PBRep_CurveRepresentation) myNext;


};







#endif // _PBRep_CurveRepresentation_HeaderFile
