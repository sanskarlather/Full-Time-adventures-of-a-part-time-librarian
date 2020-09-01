#include <stdio.h>
#include "object.h"
OBJECT objs[] = {
   {"a smelly bathroom", "bathroom",NULL, bedroom, bathroom},
   {"your bedroom", "bedroom", NULL,bathroom,bedroom},
   {"an old dusty library", "library", NULL,NULL, NULL},
   {"an old chewed out toothbrush"  , "toothbrush","You have brushed your teeth"    , bathroom, NULL  },
   {"a toilet with a bidet", "toilet","You have used the toilet"   , bathroom, NULL },
   {"a rainfall type shower", "shower","You have enjoyed your shower"   , bathroom, NULL },
   {"keys with a sonic screwdriver keychain", "keys",NULL   , bedroom, NULL },
   {"a beatup slightly torn backpack", "backpack","You have packed your backpag"   , bedroom, NULL },
   {"yourself"     , "yourself",NULL, bedroom, NULL },
   {"your house exit"     , "exit",NULL, bedroom, roadLibrary },
   {"entrance to library down to road"     , "library entrance",NULL, roadLibrary, library }
    
};