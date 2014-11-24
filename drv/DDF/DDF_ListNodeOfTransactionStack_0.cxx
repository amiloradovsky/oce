// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <DDF_ListNodeOfTransactionStack.hxx>

#include <Standard_Type.hxx>

#include <DDF_Transaction.hxx>
#include <DDF_TransactionStack.hxx>
#include <DDF_ListIteratorOfTransactionStack.hxx>

 


IMPLEMENT_STANDARD_TYPE(DDF_ListNodeOfTransactionStack)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(DDF_ListNodeOfTransactionStack)


IMPLEMENT_DOWNCAST(DDF_ListNodeOfTransactionStack,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(DDF_ListNodeOfTransactionStack)


#define Item Handle(DDF_Transaction)
#define Item_hxx <DDF_Transaction.hxx>
#define TCollection_ListNode DDF_ListNodeOfTransactionStack
#define TCollection_ListNode_hxx <DDF_ListNodeOfTransactionStack.hxx>
#define TCollection_ListIterator DDF_ListIteratorOfTransactionStack
#define TCollection_ListIterator_hxx <DDF_ListIteratorOfTransactionStack.hxx>
#define Handle_TCollection_ListNode Handle_DDF_ListNodeOfTransactionStack
#define TCollection_ListNode_Type_() DDF_ListNodeOfTransactionStack_Type_()
#define TCollection_List DDF_TransactionStack
#define TCollection_List_hxx <DDF_TransactionStack.hxx>
#include <TCollection_ListNode.gxx>

