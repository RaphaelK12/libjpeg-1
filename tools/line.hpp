/*************************************************************************

    This project implements a complete(!) JPEG (Recommendation ITU-T
    T.81 | ISO/IEC 10918-1) codec, plus a library that can be used to
    encode and decode JPEG streams. 
    It also implements ISO/IEC 18477 aka JPEG XT which is an extension
    towards intermediate, high-dynamic-range lossy and lossless coding
    of JPEG. In specific, it supports ISO/IEC 18477-3/-6/-7/-8 encoding.

    Note that only Profiles C and D of ISO/IEC 18477-7 are supported
    here. Check the JPEG XT reference software for a full implementation
    of ISO/IEC 18477-7.

    Copyright (C) 2012-2018 Thomas Richter, University of Stuttgart and
    Accusoft. (C) 2019 Thomas Richter, Fraunhofer IIS.

    This program is available under two licenses, GPLv3 and the ITU
    Software licence Annex A Option 2, RAND conditions.

    For the full text of the GPU license option, see README.license.gpl.
    For the full text of the ITU license option, see README.license.itu.
    
    You may freely select between these two options.

    For the GPL option, please note the following:

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/
/*
**
** This class is a helper to keep a linked list of one-D lines
** for buffering purposes.
**
** $Id: line.hpp,v 1.8 2014/09/30 08:33:18 thor Exp $
**
*/

#ifndef TOOLS_LINE_HPP
#define TOOLS_LINE_HPP

/// Includes
#include "tools/environment.hpp"
///

/// struct Line
// A single line containing the source data for upsampling.
struct Line : public JObject {
  //
  // The data. Width is not kept here.
  LONG             *m_pData;
  //
  // Pointer to the next line.
  struct Line      *m_pNext;
  //
#if CHECK_LEVEL > 0
  void             *m_pOwner;
#endif
  //
  Line(void)
    : m_pData(NULL), m_pNext(NULL)
  { }
};
///

///
#endif
