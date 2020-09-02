#include <stdbool.h>
#include <stdio.h>
#include "object.h"
static const char* tags0[] = { "bathroom", NULL };
static const char* tags1[] = { "west","east","north", NULL };
static const char* tags2[] = { "entrance","south", NULL };
static const char* tags3[] = { "bedroom", NULL };
static const char* tags4[] = { "east","west", NULL };
static const char* tags5[] = { "south", NULL };
static const char* tags6[] = { "north","exit", NULL };
static const char* tags7[] = { "road", NULL };
static const char* tags8[] = { "west","north","south", NULL };
static const char* tags9[] = { "entrance","east", NULL };
static const char* tags10[] = { "library", NULL };
static const char* tags11[] = { "toothbrush", "tooth brush", "brush", NULL };
static const char* tags12[] = { "washroom", "toilet", NULL };
static const char* tags13[] = { "shower", "bath", NULL };
static const char* tags14[] = { "backpack", "bag", "backpack", NULL };
static const char* tags15[] = { "keychain", "keys", "key set", NULL };
static const char* tags16[] = { "guard", "burly guard", NULL };
static const char* tags17[] = { "yourself", NULL };

OBJECT objs[] = {
	{	/* 0 = bathroom */
		 "a smelly bathroom",
		tags0,
		NULL,
		NULL,
		NULL,
		 "You entred the bathroom\n",
		 99999
	},
	{	/* 1 = bathroomWalls */
		 "bathroom walls",
		tags1,
		NULL,
		 bathroom,
		NULL,
		 "Their is nothing but walls here\n",
		 99999
	},
	{	/* 2 = bathroomEntrance */
		 "Entrance of the bathroom",
		tags2,
		NULL,
		 bedroom,
		 bathroom,
		 "You entred the bathroom\n",
		 99999
	},
	{	/* 3 = bedroom */
		 "Your bedroom",
		tags3,
		NULL,
		NULL,
		NULL,
		 "You entred the bedroom\n",
		 99999
	},
	{	/* 4 = bedroomWalls */
		 "Your bedroom walls",
		tags4,
		NULL,
		 bedroom,
		NULL,
		 "There is nothing but walls there\n",
		 99999
	},
	{	/* 5 = bedroomEntrance */
		 "Entrance of the bedroom",
		tags5,
		NULL,
		 bathroom,
		 bedroom,
		 "You entred the bedroom\n",
		 99999
	},
	{	/* 6 = bedroomExit */
		 "Exit of the house",
		tags6,
		NULL,
		 bedroom,
		 road,
		 "You are on the road\n",
		 99999
	},
	{	/* 7 = road */
		 "the road to the library",
		tags7,
		NULL,
		NULL,
		NULL,
		 "You are on the road",
		NULL
	},
	{	/* 8 = roadWalls */
		 "Some closed down shops",
		tags8,
		NULL,
		 road,
		NULL,
		 "There is nothing but locked shops there\n",
		 99999
	},
	{	/* 9 = libraryEntrance */
		 "entrance to the library",
		tags9,
		NULL,
		 road,
		 library,
		 "You entred the library\n",
		 99999
	},
	{	/* 10 = library */
		 "an old dusty library",
		tags10,
		NULL,
		NULL,
		NULL,
		 "You have entred the library",
		 99999
	},
	{	/* 11 = toothbrush */
		 "a chewed out toothbrush",
		tags11,
		 "You have brushed your teeth",
		 bathroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL
	},
	{	/* 12 = toilet */
		 "a toilet with a bidet",
		tags12,
		 "You have used your toilet",
		 bathroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL
	},
	{	/* 13 = shower */
		 "a shower",
		tags13,
		 "You have taken a shower",
		 bathroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL
	},
	{	/* 14 = backpack */
		 "a worn out backpack",
		tags14,
		 "You have packed your backpack",
		 bedroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL
	},
	{	/* 15 = keys */
		 "a set of keys with a sonic screwdriver keychain",
		tags15,
		NULL,
		 bedroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL
	},
	{	/* 16 = guard */
		 "a burly guard",
		tags16,
		NULL,
		NULL,
		NULL,
		"You can't get much closer than this.\n",
		NULL
	},
	{	/* 17 = player */
		 "yourself",
		tags17,
		NULL,
		 bedroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL
	}
};
