/*****************************************************************************/
/*!
\file   FlagOperation.h
\author Chi-Hao Kuo
\par    email: chihao.kuo\@digipen.edu
\par    DigiPen login: chihao.kuo
\par    Project: Chocolate Factory Adventure
\date   1/26/2014
\brief  
  This file contains flag operation functions.
      
<br>Functions include:
- flagSet
<br>Set desired flag.
- flagClear
<br>Clear desired flag.
- flagToggle
<br>Toggle desired flag.
- flagCheck
<br>Check if the flag(s) is(are) set.

  Disclaimer:
  Copyright (C) 2014 DigiPen Institute of Technology. 
  Reproduction or disclosure of this file or its contents without the prior 
  written consent of DigiPen Institute of Technology is prohibited.
*/
/*****************************************************************************/
#ifndef FLAGOPERATION_H
#define FLAGOPERATION_H

#include "DataStructures.h"

typedef unsigned int  u32;

/*****************************************************************************/
/*!
\fn void flagSet(u32 *objFlag, u32 flag)
    
\brief  
  Set desired flag.

\param *objFlag
  Flag of the object.

\param flag
  Flag to be applied.
*/
/*****************************************************************************/
void flagSet(u32 *objFlag, u32 flag);

/*****************************************************************************/
/*!
\fn void flagClear(u32 *objFlag, u32 flag)
    
\brief  
  Clear desired flag.

\param *objFlag
  Flag of the object.

\param flag
  Flag to be applied.
*/
/*****************************************************************************/
void flagClear(u32 *objFlag, u32 flag);

/*****************************************************************************/
/*!
\fn void flagToggle(u32 *objFlag, u32 flag)
    
\brief  
  Toggle desired flag.

\param *objFlag
  Flag of the object.

\param flag
  Flag to be applied.
*/
/*****************************************************************************/
void flagToggle(u32 *objFlag, u32 flag);

/*****************************************************************************/
/*!
\fn BOOL flagCheck(u32 objFlag, u32 flag)
    
\brief  
  Check if the flag(s) is(are) set.

\param *objFlag
  Flag of the object.

\param *flag
  Flag to be checked.

\return BOOL
  True/False.
*/
/*****************************************************************************/
BOOL flagCheck(u32 objFlag, u32 flag);


#endif
