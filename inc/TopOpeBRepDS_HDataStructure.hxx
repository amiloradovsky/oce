// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_HDataStructure_HeaderFile
#define _TopOpeBRepDS_HDataStructure_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepDS_HDataStructure.hxx>

#include <TopOpeBRepDS_DataStructure.hxx>
#include <Standard_Boolean.hxx>
#include <TCollection_AsciiString.hxx>
#include <MMgt_TShared.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Standard_Integer.hxx>
#include <TopOpeBRepDS_Config.hxx>
#include <TopOpeBRepDS_Kind.hxx>
#include <Standard_Real.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
class TopoDS_Shape;
class TopOpeBRepDS_DataStructure;
class TopOpeBRepDS_Surface;
class TopOpeBRepDS_CurveIterator;
class TopOpeBRepDS_Curve;
class TopOpeBRepDS_PointIterator;
class TopOpeBRepDS_Point;
class TopTools_ListIteratorOfListOfShape;
class TopOpeBRepDS_SurfaceIterator;
class TopOpeBRepDS_ListOfInterference;
class TopOpeBRepDS_ListIteratorOfListOfInterference;
class TopOpeBRepDS_Interference;



class TopOpeBRepDS_HDataStructure : public MMgt_TShared
{

public:

  
  Standard_EXPORT TopOpeBRepDS_HDataStructure();
  
  Standard_EXPORT   void AddAncestors (const TopoDS_Shape& S) ;
  
  //! Update  the data structure with  shapes of type T1
  //! containing a subshape of type T2 which is stored
  //! in the DS.
  //! Used by the previous one.
  Standard_EXPORT   void AddAncestors (const TopoDS_Shape& S, const TopAbs_ShapeEnum T1, const TopAbs_ShapeEnum T2) ;
  
  //! perform post processing of the DS.
  Standard_EXPORT   void Complete() ;
  
  //! Check the integrity of the DS
  Standard_EXPORT   void ChkIntg() ;
  
  Standard_EXPORT  const  TopOpeBRepDS_DataStructure& DS()  const;
  
  Standard_EXPORT   TopOpeBRepDS_DataStructure& ChangeDS() ;
  
  Standard_EXPORT   Standard_Integer NbSurfaces()  const;
  
  Standard_EXPORT   Standard_Integer NbCurves()  const;
  
  Standard_EXPORT   Standard_Integer NbPoints()  const;
  
  //! Returns the surface of index <I>.
  Standard_EXPORT  const  TopOpeBRepDS_Surface& Surface (const Standard_Integer I)  const;
  
  //! Returns an iterator  on the curves on  the surface
  //! <I>.
  Standard_EXPORT   TopOpeBRepDS_CurveIterator SurfaceCurves (const Standard_Integer I)  const;
  
  //! Returns the Curve of index <I>.
  Standard_EXPORT  const  TopOpeBRepDS_Curve& Curve (const Standard_Integer I)  const;
  
  //! Returns the Curve of index <I>.
  Standard_EXPORT   TopOpeBRepDS_Curve& ChangeCurve (const Standard_Integer I) ;
  
  //! Returns an iterator   on the points on  the  curve
  //! <I>.
  Standard_EXPORT   TopOpeBRepDS_PointIterator CurvePoints (const Standard_Integer I)  const;
  
  //! Returns the point of index <I>.
  Standard_EXPORT  const  TopOpeBRepDS_Point& Point (const Standard_Integer I)  const;
  
  Standard_EXPORT   Standard_Integer NbShapes()  const;
  
  //! Returns the shape of index <I> in the DS
  Standard_EXPORT  const  TopoDS_Shape& Shape (const Standard_Integer I, const Standard_Boolean FindKeep = Standard_True)  const;
  
  //! Returns the index of shape <S> in the DS
  //! returns 0 if <S> is not in the DS
  Standard_EXPORT   Standard_Integer Shape (const TopoDS_Shape& S, const Standard_Boolean FindKeep = Standard_True)  const;
  
  //! Returns True if <S> has new geometries.
  Standard_EXPORT   Standard_Boolean HasGeometry (const TopoDS_Shape& S)  const;
  
  //! Returns True if <S> has new geometries (SOLID,FACE,EDGE)
  //! or if <S> (SHELL,WIRE) has sub-shape (FACE,EDGE)
  //! with new geometries
  Standard_EXPORT   Standard_Boolean HasShape (const TopoDS_Shape& S, const Standard_Boolean FindKeep = Standard_True)  const;
  
  //! Returns True if <S> share a geometrical domain with
  //! some other shapes.
  Standard_EXPORT   Standard_Boolean HasSameDomain (const TopoDS_Shape& S, const Standard_Boolean FindKeep = Standard_True)  const;
  
  //! Returns an iterator on the SameDomain shapes attached
  //! to the shape <S>.
  Standard_EXPORT   TopTools_ListIteratorOfListOfShape SameDomain (const TopoDS_Shape& S)  const;
  
  //! Returns orientation of shape <S> compared with its
  //! reference shape
  Standard_EXPORT   TopOpeBRepDS_Config SameDomainOrientation (const TopoDS_Shape& S)  const;
  
  //! Returns orientation of shape <S> compared with its
  //! reference shape
  Standard_EXPORT   Standard_Integer SameDomainReference (const TopoDS_Shape& S)  const;
  
  //! Returns an iterator on the  surfaces attached to the
  //! solid <S>.
  Standard_EXPORT   TopOpeBRepDS_SurfaceIterator SolidSurfaces (const TopoDS_Shape& S)  const;
  
  //! Returns an iterator on the  surfaces attached to the
  //! solid <I>.
  Standard_EXPORT   TopOpeBRepDS_SurfaceIterator SolidSurfaces (const Standard_Integer I)  const;
  
  //! Returns an iterator on the  curves attached to the
  //! face <F>.
  Standard_EXPORT   TopOpeBRepDS_CurveIterator FaceCurves (const TopoDS_Shape& F)  const;
  
  //! Returns an iterator on the  curves attached to the
  //! face <I>.
  Standard_EXPORT   TopOpeBRepDS_CurveIterator FaceCurves (const Standard_Integer I)  const;
  
  //! Returns an iterator on the points  attached to the
  //! edge <E>.
  Standard_EXPORT   TopOpeBRepDS_PointIterator EdgePoints (const TopoDS_Shape& E)  const;
  
  Standard_EXPORT   Standard_Integer MakeCurve (const TopOpeBRepDS_Curve& C1, TopOpeBRepDS_Curve& C2) ;
  
  Standard_EXPORT   void RemoveCurve (const Standard_Integer iC) ;
  
  Standard_EXPORT   void RemoveShape (const Standard_Integer iS) ;
  
  Standard_EXPORT   Standard_Integer NbGeometry (const TopOpeBRepDS_Kind K)  const;
  
  Standard_EXPORT   Standard_Integer NbTopology (const TopOpeBRepDS_Kind K)  const;
  
  Standard_EXPORT   Standard_Integer NbTopology()  const;
  
  //! returns True if all the edges stored as shapes in the DS
  //! are SameParameter, otherwise False.
  Standard_EXPORT   Standard_Boolean EdgesSameParameter()  const;
  
  Standard_EXPORT   void SortOnParameter (const TopOpeBRepDS_ListOfInterference& L1, TopOpeBRepDS_ListOfInterference& L2)  const;
  
  Standard_EXPORT   void SortOnParameter (TopOpeBRepDS_ListOfInterference& L)  const;
  
  Standard_EXPORT   void MinMaxOnParameter (const TopOpeBRepDS_ListOfInterference& L, Standard_Real& Min, Standard_Real& Max)  const;
  

  //! Search, among a list of interferences accessed by the iterator
  //! <IT>, a geometry <G> whose 3D point is identical to the 3D point
  //! of the TheDSPoint <PDS>.
  //! returns True if such an interference has been found, False else.
  //! if True, iterator It points (by the Value() method) on the first
  //! interference accessing an identical 3D point.
  Standard_EXPORT   Standard_Boolean ScanInterfList (TopOpeBRepDS_ListIteratorOfListOfInterference& IT, const TopOpeBRepDS_Point& PDS)  const;
  

  //! Get the geometry of a DS point <PDS>.
  //! Search for it with ScanInterfList (previous method).
  //! if found, set <G,K> to the geometry,kind of the interference found.
  //! returns the value of ScanInterfList().
  Standard_EXPORT   Standard_Boolean GetGeometry (TopOpeBRepDS_ListIteratorOfListOfInterference& IT, const TopOpeBRepDS_Point& PDS, Standard_Integer& G, TopOpeBRepDS_Kind& K)  const;
  

  //! Add interference <I> to list <LI>.
  Standard_EXPORT   void StoreInterference (const Handle(TopOpeBRepDS_Interference)& I, TopOpeBRepDS_ListOfInterference& LI, const TCollection_AsciiString& str = "") ;
  

  //! Add interference <I> to list of interference of shape <S>.
  Standard_EXPORT   void StoreInterference (const Handle(TopOpeBRepDS_Interference)& I, const TopoDS_Shape& S, const TCollection_AsciiString& str = "") ;
  

  //! Add interference <I> to list of interference of shape <IS>.
  Standard_EXPORT   void StoreInterference (const Handle(TopOpeBRepDS_Interference)& I, const Standard_Integer IS, const TCollection_AsciiString& str = "") ;
  
  Standard_EXPORT   void StoreInterferences (const TopOpeBRepDS_ListOfInterference& LI, const TopoDS_Shape& S, const TCollection_AsciiString& str = "") ;
  
  Standard_EXPORT   void StoreInterferences (const TopOpeBRepDS_ListOfInterference& LI, const Standard_Integer IS, const TCollection_AsciiString& str = "") ;
  
  Standard_EXPORT   void ClearStoreInterferences (const TopOpeBRepDS_ListOfInterference& LI, const TopoDS_Shape& S, const TCollection_AsciiString& str = "") ;
  
  Standard_EXPORT   void ClearStoreInterferences (const TopOpeBRepDS_ListOfInterference& LI, const Standard_Integer IS, const TCollection_AsciiString& str = "") ;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_HDataStructure)

protected:




private: 


  TopOpeBRepDS_DataStructure myDS;
  Standard_Boolean myEdgesSameParameter;
  TCollection_AsciiString myAscii;


};







#endif // _TopOpeBRepDS_HDataStructure_HeaderFile
