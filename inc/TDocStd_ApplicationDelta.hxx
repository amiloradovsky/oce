// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_ApplicationDelta_HeaderFile
#define _TDocStd_ApplicationDelta_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDocStd_ApplicationDelta.hxx>

#include <TDocStd_SequenceOfDocument.hxx>
#include <TCollection_ExtendedString.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_OStream.hxx>
class TDocStd_SequenceOfDocument;
class TCollection_ExtendedString;



class TDocStd_ApplicationDelta : public MMgt_TShared
{

public:

  
  Standard_EXPORT TDocStd_ApplicationDelta();
  
      TDocStd_SequenceOfDocument& GetDocuments() ;
  
     const  TCollection_ExtendedString& GetName()  const;
  
      void SetName (const TCollection_ExtendedString& theName) ;
  
  Standard_EXPORT   void Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDocStd_ApplicationDelta)

protected:




private: 


  TDocStd_SequenceOfDocument myDocuments;
  TCollection_ExtendedString myName;


};


#include <TDocStd_ApplicationDelta.lxx>





#endif // _TDocStd_ApplicationDelta_HeaderFile
