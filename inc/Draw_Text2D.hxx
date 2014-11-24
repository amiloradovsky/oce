// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Text2D_HeaderFile
#define _Draw_Text2D_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Draw_Text2D.hxx>

#include <gp_Pnt2d.hxx>
#include <Draw_Color.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_Integer.hxx>
#include <Draw_Drawable2D.hxx>
#include <Standard_CString.hxx>
class gp_Pnt2d;
class Draw_Color;
class Draw_Display;



class Draw_Text2D : public Draw_Drawable2D
{

public:

  
  Standard_EXPORT Draw_Text2D(const gp_Pnt2d& p, const Standard_CString T, const Draw_Color& col);
  
  Standard_EXPORT Draw_Text2D(const gp_Pnt2d& p, const Standard_CString T, const Draw_Color& col, const Standard_Integer moveX, const Standard_Integer moveY);
  
  Standard_EXPORT   void SetPnt2d (const gp_Pnt2d& p) ;
  
  Standard_EXPORT   void DrawOn (Draw_Display& dis)  const;




  DEFINE_STANDARD_RTTI(Draw_Text2D)

protected:




private: 


  gp_Pnt2d myPoint;
  Draw_Color myColor;
  TCollection_AsciiString myText;
  Standard_Integer mymoveX;
  Standard_Integer mymoveY;


};







#endif // _Draw_Text2D_HeaderFile
