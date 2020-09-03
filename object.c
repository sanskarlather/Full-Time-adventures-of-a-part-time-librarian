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
static const char* tags19[] = { "exit", NULL };
static const char* tags20[] = { "exit", NULL };
static const char* tags21[] = { "exit", NULL };
static const char* tags22[] = { "exit", NULL };
static const char* tags23[] = { "east", NULL };
static const char* tags24[] = { "east", NULL };
static const char* tags25[] = { "east", NULL };
static const char* tags26[] = { "east", NULL };
static const char* tags27[] = { "toilet", NULL };
static const char* tags28[] = { "wash basin","sink", NULL };
static const char* tags29[] = { "urinal","urinals", NULL };
static const char* tags30[] = { "supply closet","closet", NULL };
static const char* tags31[] = { "urinal cabin 1","cabin 1", NULL };
static const char* tags32[] = { "urinal cabin 2","cabin 2", NULL };
static const char* tags33[] = { "urinal cabin 3","cabin 3", NULL };
static const char* tags34[] = { "urinal cabin 4","cabin 4", NULL };
static const char* tags35[] = { "body","mysterious body","guard", NULL };
static const char* tags36[] = { "north", NULL };
static const char* tags37[] = { "portal", NULL };
static const char* tags38[] = { "toothbrush", "tooth brush", "brush", NULL };
static const char* tags39[] = { "washroom", "toilet", NULL };
static const char* tags40[] = { "shower", "bath", NULL };
static const char* tags41[] = { "backpack", "bag", "backpack", NULL };
static const char* tags42[] = { "keychain", "keys", "key set", NULL };
static const char* tags43[] = { "guard", "burly guard", NULL };
static const char* tags44[] = { "yourself", NULL };

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
		NULL,
		 "This is the reception of the library. This is your station you spend all your days here.",
		 99999
	},
	{	/* 13 = libraryShelf */
		 "The section with the book shelves",
		tags13,
		NULL,
		NULL,
		NULL,
		NULL,
		 "This is the reception of the library. This is your station you spend all your days here.",
		 99999
	},
	{	/* 14 = libraryShelfEntrance */
		 "The section with the book shelves",
		tags14,
		NULL,
		 library,
		 libraryShelf,
		NULL,
		 "This is the reception of the library. This is your station you spend all your days here.",
		 99999
	},
	{	/* 15 = shelf_1 */
		 "Book Shelf Number 1\n",
		tags15,
		NULL,
		 libraryShelf,
		 shelf_1,
		NULL,
		 "There are 2 books missing from this shelf.",
		 99999
	},
	{	/* 16 = shelf_2 */
		 "Book Shelf Number 2\n",
		tags16,
		NULL,
		 libraryShelf,
		 shelf_2,
		NULL,
		 "There is 1 books missing from this shelf.",
		 99999
	},
	{	/* 17 = shelf_3 */
		 "Book Shelf Number 3\n",
		tags17,
		NULL,
		 libraryShelf,
		 shelf_3,
		NULL,
		 "There are 2 books missing from this shelf.",
		 99999
	},
	{	/* 18 = shelf_4 */
		 "Book Shelf Number 4\n",
		tags18,
		NULL,
		 libraryShelf,
		 shelf_4,
		NULL,
		 "There are 2 books missing from this shelf.",
		 99999
	},
	{	/* 19 = shelf_1_exit */
		 "Exit of the shelf",
		tags19,
		NULL,
		 shelf_1,
		 libraryShelf,
		NULL,
		 "This is the exit of this shelf. Exit to explore the other shelves",
		 99999
	},
	{	/* 20 = shelf_2_exit */
		 "Exit of the shelf",
		tags20,
		NULL,
		 shelf_2,
		 libraryShelf,
		NULL,
		 "This is the exit of this shelf. Exit to explore the other shelves",
		 99999
	},
	{	/* 21 = shelf_3_exit */
		 "Exit of the shelf",
		tags21,
		NULL,
		 shelf_3,
		 libraryShelf,
		NULL,
		 "This is the exit of this shelf. Exit to explore the other shelves",
		 99999
	},
	{	/* 22 = shelf_4_exit */
		 "Exit of the shelf",
		tags22,
		NULL,
		 shelf_4,
		 libraryShelf,
		NULL,
		 "This is the exit of this shelf. Exit to explore the other shelves",
		 99999
	},
	{	/* 23 = shelf_1_toilet */
		 "Entrance of the toilet",
		tags23,
		NULL,
		 shelf_1,
		 libraryToilet,
		 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
		 "This is the exit of this shelf. Exit to explore the other shelves",
		 99999
	},
	{	/* 24 = shelf_2_toilet */
		 "Entrance of the toilet",
		tags24,
		NULL,
		 shelf_2,
		 libraryToilet,
		 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
		 "This is the exit of this shelf. Exit to explore the other shelves",
		 99999
	},
	{	/* 25 = shelf_3_toilet */
		 "Entrance of the toilet",
		tags25,
		NULL,
		 shelf_3,
		 libraryToilet,
		 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
		 "This is the exit of this shelf. Exit to explore the other shelves",
		 99999
	},
	{	/* 26 = shelf_4_toilet */
		 "Entrance of the toilet",
		tags26,
		NULL,
		 shelf_4,
		 libraryToilet,
		 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
		 "This is the exit of this shelf. Exit to explore the other shelves",
		 99999
	},
	{	/* 27 = libraryToilet */
		 "The library toilet",
		tags27,
		NULL,
		NULL,
		NULL,
		 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
		 "It's dirty and has some weird mass lying around urinal cabin 3. It is glowing with some wierd glow",
		 99999
	},
	{	/* 28 = sink */
		 "Wash Basin",
		tags28,
		 "You have washed your hands and face",
		 libraryToilet,
		NULL,
		NULL,
		 "The tap in the wash basin is leaking slowly and there is no way to close it properly",
		 99999
	},
	{	/* 29 = urinal */
		 "Urinals",
		tags29,
		 "You have used the urinal",
		 libraryToilet,
		NULL,
		NULL,
		 "The urinals are stinky and stained",
		 99999
	},
	{	/* 30 = supplyCloset */
		 "Supply Closet",
		tags30,
		 "The Supply Closet is locked",
		 libraryToilet,
		NULL,
		NULL,
		 "The Supply Closet is locked",
		 99999
	},
	{	/* 31 = urinalCabin_1 */
		 "Urinal Cabin 1",
		tags31,
		NULL,
		 libraryToilet,
		NULL,
		 "The door is locked",
		 "The door is of blue color, it is locked from inside, it stinks very badly",
		NULL
	},
	{	/* 32 = urinalCabin_2 */
		 "Urinal Cabin 2",
		tags32,
		NULL,
		 libraryToilet,
		NULL,
		 "The door is locked",
		 "The door is of blue color, it is locked from inside, it stinks very badly",
		NULL
	},
	{	/* 33 = urinalCabin_3 */
		 "Urinal Cabin 3",
		tags33,
		NULL,
		 libraryToilet,
		 urinalCabin_3,
		 "",
		 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
		NULL
	},
	{	/* 34 = urinalCabin_4 */
		 "Urinal Cabin 4",
		tags34,
		NULL,
		 libraryToilet,
		NULL,
		 "The door is locked",
		 "The door is of blue color, it is locked from inside, it stinks very badly",
		NULL
	},
	{	/* 35 = mysteryObject */
		 "Body of a guard in mysterious uniform",
		tags35,
		NULL,
		 urinalCabin_3,
		NULL,
		NULL,
		 "The guard appears to be dead. His uniform is slightly burnt and doesnt appear to normal guard uniform",
		NULL
	},
	{	/* 36 = portal */
		 "A portal type thing emanating green radiation",
		tags36,
		NULL,
		 urinalCabin_3,
		 alt_toilet,
		 "Where am I what is happening ? Where is the guard ? Where did the portal go ? Woah that was some strong acid yesterday",
		 "The portal is making very ominous sounds. You cant see through it. you can go through it......maybe",
		NULL
	},
	{	/* 37 = alt_toiletoilet */
		 "The library toilet",
		tags37,
		NULL,
		NULL,
		NULL,
		 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
		 "It's dirty and has some weird mass lying around urinal cabin 3. It is glowing with some wierd glow",
		 99999
	},
	{	/* 38 = toothbrush */
		 "a chewed out toothbrush",
		tags38,
		 "You have brushed your teeth",
		 bathroom,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 39 = toilet */
		 "a toilet with a bidet",
		tags39,
		 "You have used your toilet",
		 bathroom,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 40 = shower */
		 "a shower",
		tags40,
		 "You have taken a shower",
		 bathroom,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 41 = backpack */
		 "a worn out backpack",
		tags41,
		 "You have packed your backpack",
		 bedroom,
		NULL,
		NULL,
		 "The bag has many pockets to carry all your essentials",
		NULL
	},
	{	/* 42 = keys */
		 "a set of keys with a sonic screwdriver keychain",
		tags42,
		NULL,
		 bedroom,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 43 = guard */
		 "a burly guard",
		tags43,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 44 = player */
		 "yourself",
		tags44,
		NULL,
		 bedroom,
		NULL,
		NULL,
		NULL,
		NULL
	}
};
