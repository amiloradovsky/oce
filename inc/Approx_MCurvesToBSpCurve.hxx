// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Approx_MCurvesToBSpCurve_HeaderFile
#define _Approx_MCurvesToBSpCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <AppParCurves_MultiBSpCurve.hxx>
#include <Standard_Boolean.hxx>
#include <AppParCurves_SequenceOfMultiCurve.hxx>
class AppParCurves_MultiCurve;
class AppParCurves_SequenceOfMultiCurve;
class AppParCurves_MultiBSpCurve;



class Approx_MCurvesToBSpCurve 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Approx_MCurvesToBSpCurve();
  
  Standard_EXPORT   void Reset() ;
  
  Standard_EXPORT   void Append (const AppParCurves_MultiCurve& MC) ;
  
  Standard_EXPORT   void Perform() ;
  
  Standard_EXPORT   void Perform (const AppParCurves_SequenceOfMultiCurve& TheSeq) ;
  
  //! return the composite MultiCurves as a MultiBSpCurve.
  Standard_EXPORT  const  AppParCurves_MultiBSpCurve& Value()  const;
  
  //! return the composite MultiCurves as a MultiBSpCurve.
  Standard_EXPORT  const  AppParCurves_MultiBSpCurve& ChangeValue() ;




protected:





private:



  AppParCurves_MultiBSpCurve mySpline;
  Standard_Boolean myDone;
  AppParCurves_SequenceOfMultiCurve myCurves;


};







#endif // _Approx_MCurvesToBSpCurve_HeaderFile
