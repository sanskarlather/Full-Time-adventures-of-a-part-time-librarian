#include <stdio.h>
#include "object.h"
OBJECT objs[] = {
   {"a smelly bathroom", "bathroom", NULL, NULL},
   {"your bedroom", "room", NULL,NULL},
   {"an old dusty library", "library", NULL, NULL},
   {"an old chewed out toothbrush"  , "toothbrush"    , bathroom, NULL  },
   {"a toilet with a bidet", "toilet"   , bathroom, NULL },
   {"a rainfall type shower", "shower"   , bathroom, NULL },
   {"keys with a sonic screwdriver keychain", "keys"   , bedroom, NULL },
   {"a beatup slightly torn backpack", "backpack"   , bedroom, NULL },
   {"yourself"     , "yourself", bedroom, NULL },
   {"your house exit"     , "exit", bedroom, roadLibrary },
   {"entrance to library down to road"     , "library entrance", roadLibrary, library }
    
};