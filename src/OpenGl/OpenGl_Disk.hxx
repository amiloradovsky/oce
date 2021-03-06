// Created on: 2014-10-15
// Created by: Denis Bogolepov
// Copyright (c) 2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef OpenGl_Disk_Header
#define OpenGl_Disk_Header

#include <OpenGl_Quadric.hxx>

//! Tool class for generating disk (circle) tessellation.
class OpenGl_Disk : public OpenGl_Quadric
{
public:

  //! Create uninitialized disk (circle) primitive.
  Standard_EXPORT OpenGl_Disk();

  //! Initialize disk (circle) primitive.
  Standard_EXPORT Standard_Boolean Init (const Standard_ShortReal theInnerRadius,
                                         const Standard_ShortReal theOuterRadius,
                                         const Standard_Integer   theNbSlices = 10,
                                         const Standard_Integer   theNbStacks = 10);

protected:

  //! Returns surface point for the given parameters.
  Standard_EXPORT virtual OpenGl_Vec3 evalVertex (const Standard_ShortReal theU,
                                                  const Standard_ShortReal theV) const Standard_OVERRIDE;

  //! Returns surface normal for the given parameters.
  Standard_EXPORT virtual OpenGl_Vec3 evalNormal (const Standard_ShortReal theU,
                                                  const Standard_ShortReal theV) const Standard_OVERRIDE;

private:

  Standard_ShortReal myInnerRadius; //!< Inner radius of the disk
  Standard_ShortReal myOuterRadius; //!< Outer radius of the disk

};

#endif // OpenGl_Disk_Header
