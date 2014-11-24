// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Approx_SequenceOfHArray1OfReal_HeaderFile
#define _Approx_SequenceOfHArray1OfReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_Approx_SequenceNodeOfSequenceOfHArray1OfReal.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColStd_HArray1OfReal;
class Approx_SequenceNodeOfSequenceOfHArray1OfReal;



class Approx_SequenceOfHArray1OfReal  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Approx_SequenceOfHArray1OfReal();
  
  Standard_EXPORT Approx_SequenceOfHArray1OfReal(const Approx_SequenceOfHArray1OfReal& Other);
  
  Standard_EXPORT   void Clear() ;
~Approx_SequenceOfHArray1OfReal()
{
  Clear();
}
  
  Standard_EXPORT  const  Approx_SequenceOfHArray1OfReal& Assign (const Approx_SequenceOfHArray1OfReal& Other) ;
 const  Approx_SequenceOfHArray1OfReal& operator = (const Approx_SequenceOfHArray1OfReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(TColStd_HArray1OfReal)& T) ;
  
      void Append (Approx_SequenceOfHArray1OfReal& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColStd_HArray1OfReal)& T) ;
  
      void Prepend (Approx_SequenceOfHArray1OfReal& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(TColStd_HArray1OfReal)& T) ;
  
      void InsertBefore (const Standard_Integer Index, Approx_SequenceOfHArray1OfReal& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(TColStd_HArray1OfReal)& T) ;
  
      void InsertAfter (const Standard_Integer Index, Approx_SequenceOfHArray1OfReal& S) ;
  
  Standard_EXPORT  const  Handle(TColStd_HArray1OfReal)& First()  const;
  
  Standard_EXPORT  const  Handle(TColStd_HArray1OfReal)& Last()  const;
  
      void Split (const Standard_Integer Index, Approx_SequenceOfHArray1OfReal& Sub) ;
  
  Standard_EXPORT  const  Handle(TColStd_HArray1OfReal)& Value (const Standard_Integer Index)  const;
 const  Handle(TColStd_HArray1OfReal)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(TColStd_HArray1OfReal)& I) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal)& ChangeValue (const Standard_Integer Index) ;
  Handle(TColStd_HArray1OfReal)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(TColStd_HArray1OfReal)
#define SeqItem_hxx <TColStd_HArray1OfReal.hxx>
#define TCollection_SequenceNode Approx_SequenceNodeOfSequenceOfHArray1OfReal
#define TCollection_SequenceNode_hxx <Approx_SequenceNodeOfSequenceOfHArray1OfReal.hxx>
#define Handle_TCollection_SequenceNode Handle_Approx_SequenceNodeOfSequenceOfHArray1OfReal
#define TCollection_SequenceNode_Type_() Approx_SequenceNodeOfSequenceOfHArray1OfReal_Type_()
#define TCollection_Sequence Approx_SequenceOfHArray1OfReal
#define TCollection_Sequence_hxx <Approx_SequenceOfHArray1OfReal.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Approx_SequenceOfHArray1OfReal_HeaderFile
