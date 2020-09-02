#include <stdbool.h>
#include <stdio.h>
#include "object.h"
static const char* tags0[] = { "bathroom", NULL };
static const char* tags1[] = { "west","east","south", NULL };
static const char* tags2[] = { "entrance","south", NULL };
static const char* tags3[] = { "bedroom", NULL };
static const char* tags4[] = { "east","west", NULL };
static const char* tags5[] = { "south", NULL };
static const char* tags6[] = { "north","exit", NULL };
static const char* tags7[] = { "road", NULL };
static const char* tags8[] = { "west","north","south", NULL };
static const char* tags9[] = { "library", NULL };
static const char* tags10[] = { "entrance","east", NULL };
static const char* tags11[] = { "exit","west", NULL };
static const char* tags12[] = { "reception", NULL };
static const char* tags13[] = { "book shelf","shelves","shelf", NULL };
static const char* tags14[] = { "east", NULL };
static const char* tags15[] = { "book shelf 1","shelf 1", NULL };
static const char* tags16[] = { "book shelf 2","shelf 2", NULL };
static const char* tags17[] = { "book shelf 3","shelf 3", NULL };
static const char* tags18[] = { "book shelf 4","shelf 4", NULL };
static const char* tags19[] = { "toothbrush", "tooth brush", "brush", NULL };
static const char* tags20[] = { "washroom", "toilet", NULL };
static const char* tags21[] = { "shower", "bath", NULL };
static const char* tags22[] = { "backpack", "bag", "backpack", NULL };
static const char* tags23[] = { "keychain", "keys", "key set", NULL };
static const char* tags24[] = { "guard", "burly guard", NULL };
static const char* tags25[] = { "yourself", NULL };

OBJECT objs[] = {
	{	/* 0 = bathroom */
		 "a smelly bathroom",
		tags0,
		NULL,
		NULL,
		NULL,
		 "You entred the bathroom\n",
		 "The bathroom is crampped and has just the essentials",
		 99999
	},
	{	/* 1 = bathroomWalls */
		 "bathroom walls",
		tags1,
		NULL,
		 bathroom,
		NULL,
		 "Their is nothing but walls here\n",
		 "The bathroom wall is tiled with yellow and white tiles\n",
		 99999
	},
	{	/* 2 = bathroomEntrance */
		 "Entrance of the bathroom",
		tags2,
		NULL,
		 bedroom,
		 bathroom,
		 "You entred the bathroom\n",
		NULL,
		 99999
	},
	{	/* 3 = bedroom */
		 "Your bedroom",
		tags3,
		NULL,
		NULL,
		NULL,
		 "You entred the bedroom\n",
		NULL,
		 99999
	},
	{	/* 4 = bedroomWalls */
		 "Your bedroom walls",
		tags4,
		NULL,
		 bedroom,
		NULL,
		 "There is nothing but walls there\n",
		NULL,
		 99999
	},
	{	/* 5 = bedroomEntrance */
		 "Entrance of the bedroom",
		tags5,
		NULL,
		 bathroom,
		 bedroom,
		 "You entred the bedroom\n",
		NULL,
		 99999
	},
	{	/* 6 = bedroomExit */
		 "Exit of the house",
		tags6,
		NULL,
		 bedroom,
		 road,
		 "You are on the road\n",
		NULL,
		 99999
	},
	{	/* 7 = road */
		 "the road to the library",
		tags7,
		NULL,
		NULL,
		NULL,
		 "You are on the road",
		NULL,
		NULL
	},
	{	/* 8 = roadWalls */
		 "Some closed down shops",
		tags8,
		NULL,
		 road,
		NULL,
		 "There is nothing but locked shops there\n",
		NULL,
		 99999
	},
	{	/* 9 = library */
		 "an old dusty library",
		tags9,
		NULL,
		NULL,
		 libraryReception,
		 "You have entred the library",
		NULL,
		 99999
	},
	{	/* 10 = libraryEntrance */
		 "Entrance of the library",
		tags10,
		NULL,
		 road,
		 library,
		 "You entred the library\n",
		NULL,
		 99999
	},
	{	/* 11 = libraryExit */
		 "Exit of the library",
		tags11,
		NULL,
		 library,
		 road,
		 "You exited the library\n",
		NULL,
		 99999
	},
	{	/* 12 = libraryReception */
		 "The library reception",
		tags12,
		NULL,
		NULL,
		NULL,
		"You can't get much closer than this.\n",
		 "This is the reception of the library. This is your station you spend all your days here.",
		 99999
	},
	{	/* 13 = libraryShelf */
		 "The section with the book shelves",
		tags13,
		NULL,
		NULL,
		NULL,
		"You can't get much closer than this.\n",
		 "This is the reception of the library. This is your station you spend all your days here.",
		 99999
	},
	{	/* 14 = libraryShelfEntrance */
		 "The section with the book shelves",
		tags14,
		NULL,
		 library,
		 libraryShelf,
		"You can't get much closer than this.\n",
		 "This is the reception of the library. This is your station you spend all your days here.",
		 99999
	},
	{	/* 15 = shelf_1 */
		 "Book Shelf Number 1",
		tags15,
		NULL,
		 libraryShelf,
		 shelf_1,
		"You can't get much closer than this.\n",
		 "There are 2 books missing from this shelf.",
		 99999
	},
	{	/* 16 = shelf_2 */
		 "Book Shelf Number 2\n",
		tags16,
		NULL,
		 libraryShelf,
		 shelf_2,
		"You can't get much closer than this.\n",
		 "There is 1 books missing from this shelf.",
		 99999
	},
	{	/* 17 = shelf_3 */
		 "Book Shelf Number 3\n",
		tags17,
		NULL,
		 libraryShelf,
		 shelf_3,
		"You can't get much closer than this.\n",
		 "There are 2 books missing from this shelf.",
		 99999
	},
	{	/* 18 = shelf_4 */
		 "Book Shelf Number 4\n",
		tags18,
		NULL,
		 libraryShelf,
		 shelf_4,
		"You can't get much closer than this.\n",
		 "There are 2 books missing from this shelf.",
		 99999
	},
	{	/* 19 = toothbrush */
		 "a chewed out toothbrush",
		tags19,
		 "You have brushed your teeth",
		 bathroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL,
		NULL
	},
	{	/* 20 = toilet */
		 "a toilet with a bidet",
		tags20,
		 "You have used your toilet",
		 bathroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL,
		NULL
	},
	{	/* 21 = shower */
		 "a shower",
		tags21,
		 "You have taken a shower",
		 bathroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL,
		NULL
	},
	{	/* 22 = backpack */
		 "a worn out backpack",
		tags22,
		 "You have packed your backpack",
		 bedroom,
		NULL,
		"You can't get much closer than this.\n",
		 "The bag has many pockets to carry all your essentials",
		NULL
	},
	{	/* 23 = keys */
		 "a set of keys with a sonic screwdriver keychain",
		tags23,
		NULL,
		 bedroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL,
		NULL
	},
	{	/* 24 = guard */
		 "a burly guard",
		tags24,
		NULL,
		NULL,
		NULL,
		"You can't get much closer than this.\n",
		NULL,
		NULL
	},
	{	/* 25 = player */
		 "yourself",
		tags25,
		NULL,
		 bedroom,
		NULL,
		"You can't get much closer than this.\n",
		NULL,
		NULL
	}
};
