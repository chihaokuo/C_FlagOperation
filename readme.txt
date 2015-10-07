/*****************************************************************************/
/*!
\file   readme.txt
\author Chi-Hao Kuo
\par    email: chihao.kuo\@digipen.edu
\par    DigiPen login: chihao.kuo
\par    Project: Chocolate Factory Adventure
\date   1/26/2014
\brief  
  Info on flag operation functions.
      
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

  // define enum to be as followed.
  // then use given functions to change/check flag values
  
  typedef enum Example
  {
    EX_STATE1 = 0x1,
    EX_STATE2 = 0x2, 
    EX_STATE3 = 0x4, 
    EX_STATE4 = 0x8, 
    EX_STATE5 = 0x10,
    EX_STATE6 = 0x20,
    EX_STATE7 = 0x40,
    EX_STATE8 = 0x80,
    EX_STATE9 = 0x100,
  } Example;