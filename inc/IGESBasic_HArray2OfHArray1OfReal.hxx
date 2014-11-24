// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_HArray2OfHArray1OfReal_HeaderFile
#define _IGESBasic_HArray2OfHArray1OfReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESBasic_HArray2OfHArray1OfReal.hxx>

#include <IGESBasic_Array2OfHArray1OfReal.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TColStd_HArray1OfReal;
class IGESBasic_Array2OfHArray1OfReal;



class IGESBasic_HArray2OfHArray1OfReal : public MMgt_TShared
{

public:

  
    IGESBasic_HArray2OfHArray1OfReal(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    IGESBasic_HArray2OfHArray1OfReal(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Handle(TColStd_HArray1OfReal)& V);
  
      void Init (const Handle(TColStd_HArray1OfReal)& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Handle(TColStd_HArray1OfReal)& Value) ;
  
     const  Handle(TColStd_HArray1OfReal)& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      Handle(TColStd_HArray1OfReal)& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  IGESBasic_Array2OfHArray1OfReal& Array2()  const;
  
      IGESBasic_Array2OfHArray1OfReal& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(IGESBasic_HArray2OfHArray1OfReal)

protected:




private: 


  IGESBasic_Array2OfHArray1OfReal myArray;


};

#define ItemHArray2 Handle(TColStd_HArray1OfReal)
#define ItemHArray2_hxx <TColStd_HArray1OfReal.hxx>
#define TheArray2 IGESBasic_Array2OfHArray1OfReal
#define TheArray2_hxx <IGESBasic_Array2OfHArray1OfReal.hxx>
#define TCollection_HArray2 IGESBasic_HArray2OfHArray1OfReal
#define TCollection_HArray2_hxx <IGESBasic_HArray2OfHArray1OfReal.hxx>
#define Handle_TCollection_HArray2 Handle_IGESBasic_HArray2OfHArray1OfReal
#define TCollection_HArray2_Type_() IGESBasic_HArray2OfHArray1OfReal_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _IGESBasic_HArray2OfHArray1OfReal_HeaderFile
