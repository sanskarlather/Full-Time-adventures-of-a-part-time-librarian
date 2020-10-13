#include <stdbool.h>
#include <stdio.h>
#include "object.h"
//bathroom
static const char* tags0[] = { "bathroom", NULL };
static const char* tags1[] = { "west","east","south", NULL };
static const char* tags2[] = { "north", NULL };
static const char* tags3[] = { "washroom", "toilet", NULL };
static const char* tags4[] = { "shower", "bath", NULL };
//bedroom
static const char* tags5[] = { "toothbrush", "tooth brush", "brush", NULL };
static const char* tags6[] = { "bedroom", NULL };
static const char* tags7[] = { "entrance","south", NULL };
static const char* tags8[] = { "east","west", NULL };
static const char* tags9[] = { "north","exit", NULL };
static const char* tags10[] = { "backpack", "bag", "backpack", NULL };
//road
static const char* tags11[] = { "keychain", "keys", "key set", NULL };
static const char* tags12[] = { "road", NULL };
static const char* tags13[] = { "west","north","south", NULL };
//library
static const char* tags14[] = { "entrance","east", NULL };
static const char* tags15[] = { "library", NULL };
static const char* tags16[] = { "exit","west", NULL };
static const char* tags17[] = { "reception", NULL };
//libraryShelf
static const char* tags18[] = { "east", NULL };
static const char* tags19[] = { "book shelf","shelves","shelf", NULL };
static const char* tags20[] = { "book shelf 1","shelf 1", NULL };
static const char* tags21[] = { "book shelf 2","shelf 2", NULL };
static const char* tags22[] = { "book shelf 3","shelf 3", NULL };
static const char* tags23[] = { "book shelf 4","shelf 4", NULL };
static const char* tags24[] = { "exit", NULL };
static const char* tags25[] = { "exit", NULL };
static const char* tags26[] = { "exit", NULL };
static const char* tags27[] = { "exit", NULL };
static const char* tags28[] = { NULL };
static const char* tags29[] = { NULL };
static const char* tags30[] = { NULL };
static const char* tags31[] = { NULL };
//libraryToilet
static const char* tags32[] = { NULL };
static const char* tags33[] = { "toilet","east", NULL };
static const char* tags34[] = { "wash basin","sink","south", NULL };
static const char* tags35[] = { "urinal","urinals", NULL };
static const char* tags36[] = { "supply closet","closet", NULL };
static const char* tags37[] = { "urinal cabin 1","cabin 1", NULL };
static const char* tags38[] = { "urinal cabin 2","cabin 2", NULL };
static const char* tags39[] = { "urinal cabin 3","cabin 3","north", NULL };
static const char* tags40[] = { "urinal cabin 3","cabin 3", NULL };
static const char* tags41[] = { "urinal cabin 4","cabin 4", NULL };
static const char* tags42[] = { "exit","toilet exit", NULL };
static const char* tags43[] = { "body","mysterious body","guard", NULL };
static const char* tags44[] = { NULL };
//alt world
//
static const char* tags45[] = { "portal","north", NULL };
static const char* tags46[] = { "toilet","east", NULL };
static const char* tags47[] = { "wash basin","sink", NULL };
static const char* tags48[] = { "urinal","urinals", NULL };
static const char* tags49[] = { "supply closet","closet", NULL };
static const char* tags50[] = { "urinal cabin 1","cabin 1", NULL };
static const char* tags51[] = { "urinal cabin 2","cabin 2", NULL };
static const char* tags52[] = { "urinal cabin 3","cabin 3", NULL };
static const char* tags53[] = { "urinal cabin 4","cabin 4", NULL };
static const char* tags54[] = { "exit","toilet exit", NULL };
static const char* tags55[] = { "book shelf","shelves","shelf", NULL };
static const char* tags56[] = { "book shelf 1","shelf 1", NULL };
static const char* tags57[] = { "book shelf 2","shelf 2", NULL };
static const char* tags58[] = { "book shelf 3","shelf 3", NULL };
static const char* tags59[] = { "book shelf 4","shelf 4", NULL };
static const char* tags60[] = { "exit", NULL };
static const char* tags61[] = { "exit", NULL };
static const char* tags62[] = { "exit", NULL };
static const char* tags63[] = { "exit", NULL };
static const char* tags64[] = { NULL };
static const char* tags65[] = { NULL };
static const char* tags66[] = { NULL };
static const char* tags67[] = { NULL };
static const char* tags68[] = { NULL };
static const char* tags69[] = { NULL };
static const char* tags70[] = { "book", NULL };
static const char* tags71[] = { "Exit", NULL };
static const char* tags72[] = { "wash basin","sink", NULL };
static const char* tags73[] = { "urinal","urinals", NULL };
static const char* tags74[] = { "supply closet","closet", NULL };
static const char* tags75[] = { "urinal cabin 1","cabin 1", NULL };
static const char* tags76[] = { "urinal cabin 2","cabin 2", NULL };
static const char* tags77[] = { "urinal cabin 3","cabin 3", NULL };
static const char* tags78[] = { "urinal cabin 4","cabin 4", NULL };
// alt_library
static const char* tags79[] = { "exit","toilet exit", NULL };
static const char* tags80[] = { "library", NULL };
static const char* tags81[] = { "exit","west", NULL };
static const char* tags82[] = { "reception", NULL };
static const char* tags83[] = { "east", NULL };
static const char* tags84[] = { "west","hall", NULL };
static const char* tags85[] = { "stairs","up", NULL };
//secondFloor
static const char* tags86[] = { "down","stairs", NULL };
static const char* tags87[] = { "second floor", NULL };
static const char* tags88[] = { "shelf","east", NULL };
static const char* tags89[] = { "book shelf 1","shelf 1", NULL };
static const char* tags90[] = { "book shelf 2","shelf 2", NULL };
static const char* tags91[] = { "book shelf 3","shelf 3", NULL };
static const char* tags92[] = { "book shelf 4","shelf 4", NULL };
static const char* tags93[] = { "hall","west", NULL };
static const char* tags94[] = { "exit","west", NULL };
static const char* tags95[] = { "exit","west", NULL };
static const char* tags96[] = { "exit","west", NULL };
static const char* tags97[] = { "exit","west", NULL };
// level 2
static const char* tags98[] = { "computer","computer corner", NULL };
static const char* tags99[] = { "book", NULL };
static const char* tags100[] = { NULL };
static const char* tags101[] = { "exit", NULL };
static const char* tags102[] = { "second floor", NULL };
static const char* tags103[] = { "shelf","east", NULL };
static const char* tags104[] = { "book shelf 1","shelf 1", NULL };
static const char* tags105[] = { "book shelf 2","shelf 2", NULL };
static const char* tags106[] = { "book shelf 3","shelf 3", NULL };
static const char* tags107[] = { "book shelf 4","shelf 4", NULL };
static const char* tags108[] = { "hall","west", NULL };
static const char* tags109[] = { "exit","west", NULL };
static const char* tags110[] = { "exit","west", NULL };
static const char* tags111[] = { "exit","west", NULL };
static const char* tags112[] = { "exit","west", NULL };
static const char* tags113[] = { "stairs","up", NULL };
static const char* tags114[] = { "stairs","up", NULL };
static const char* tags115[] = { "stairs","up", NULL };
static const char* tags116[] = { "stairs","up", NULL };
static const char* tags117[] = { "stairs","up", NULL };
static const char* tags118[] = { "third floor", NULL };
static const char* tags119[] = { "down","east","second floor", NULL };
static const char* tags120[] = { "table 1","west", NULL };
static const char* tags121[] = { "table 2","north", NULL };
static const char* tags122[] = { "table 2","south", NULL };
static const char* tags123[] = { "book", NULL };
static const char* tags124[] = { "surrounding", NULL };
static const char* tags125[] = { "north", NULL };
static const char* tags126[] = { "surrounding", NULL };
static const char* tags127[] = { "surrounding", NULL };
//hhd
// misc
static const char* tags128[] = { "surrounding", NULL };
//players	 
static const char* tags129[] = { "guard", "burly guard", NULL };
static const char* tags130[] = { "yourself", NULL };

OBJECT objs[] = {
	//bathroom
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
		{	/* 1 = bathroomWallToilet */
			 "bathroom walls",
			tags1,
			NULL,
			 bathroom,
			NULL,
			 "Their is nothing but walls here\n",
			 "The bathroom wall is tiled with yellow and white tiles\n",
			 99999
		},
		{	/* 2 = bedroomEntrance */
			 "Entrance of the bedroom",
			tags2,
			NULL,
			 bathroom,
			 bedroom,
			 "You entred the bedroom\n",
			NULL,
			 99999
		},
		{	/* 3 = toilet */
			 "a toilet with a bidet",
			tags3,
			 "You have used your toilet",
			 bathroom,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 4 = shower */
			 "a shower",
			tags4,
			 "You have taken a shower",
			 bathroom,
			NULL,
			NULL,
			NULL,
			NULL
		},
	//bedroom
		{	/* 5 = toothbrush */
			 "a chewed out toothbrush",
			tags5,
			 "You have brushed your teeth",
			 bathroom,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 6 = bedroom */
			 "Your bedroom",
			tags6,
			NULL,
			NULL,
			NULL,
			 "You entred the bedroom\n",
			NULL,
			 99999
		},
		{	/* 7 = bathroomEntrance */
			 "Entrance of the bathroom",
			tags7,
			NULL,
			 bedroom,
			 bathroom,
			 "You entred the bathroom\n",
			NULL,
			 99999
		},
		{	/* 8 = bedroomWalls */
			 "Your bedroom walls",
			tags8,
			NULL,
			 bedroom,
			NULL,
			 "There is nothing but walls there\n",
			NULL,
			 99999
		},
		{	/* 9 = bedroomExit */
			 "Exit of the house",
			tags9,
			NULL,
			 bedroom,
			 road,
			 "You are on the road\n",
			NULL,
			 99999
		},
		{	/* 10 = backpack */
			 "a worn out backpack",
			tags10,
			 "You have packed your backpack",
			 bedroom,
			NULL,
			NULL,
			 "The bag has many pockets to carry all your essentials",
			NULL
		},
	//road
		{	/* 11 = keys */
			 "a set of keys with a sonic screwdriver keychain",
			tags11,
			NULL,
			 bedroom,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 12 = road */
			 "the road to the library",
			tags12,
			NULL,
			NULL,
			NULL,
			 "You are on the road",
			NULL,
			NULL
		},
		{	/* 13 = roadWalls */
			 "Some closed down shops",
			tags13,
			NULL,
			 road,
			NULL,
			 "There is nothing but locked shops there\n",
			NULL,
			 99999
		},
	//library
		{	/* 14 = libraryEntrance */
			 "Entrance of the library",
			tags14,
			NULL,
			 road,
			 library,
			 "You entred the library\n",
			NULL,
			 99999
		},
		{	/* 15 = library */
			 "an old dusty library",
			tags15,
			NULL,
			NULL,
			 libraryReception,
			 "You have entred the library",
			NULL,
			 99999
		},
		{	/* 16 = libraryExit */
			 "Exit of the library",
			tags16,
			NULL,
			 library,
			 road,
			 "You exited the library\n",
			NULL,
			 99999
		},
		{	/* 17 = libraryReception */
			 "The library reception",
			tags17,
			NULL,
			NULL,
			NULL,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
	//libraryShelf
		{	/* 18 = libraryShelfEntrance */
			 "The section with the book shelves",
			tags18,
			NULL,
			 library,
			 libraryShelf,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 19 = libraryShelf */
			 "The section with the book shelves",
			tags19,
			NULL,
			NULL,
			NULL,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 20 = shelf_1 */
			 "Book Shelf Number 1\n",
			tags20,
			NULL,
			 libraryShelf,
			 shelf_1,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 21 = shelf_2 */
			 "Book Shelf Number 2\n",
			tags21,
			NULL,
			 libraryShelf,
			 shelf_2,
			NULL,
			 "There is 1 books missing from this shelf.",
			 99999
		},
		{	/* 22 = shelf_3 */
			 "Book Shelf Number 3\n",
			tags22,
			NULL,
			 libraryShelf,
			 shelf_3,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 23 = shelf_4 */
			 "Book Shelf Number 4\n",
			tags23,
			NULL,
			 libraryShelf,
			 shelf_4,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 24 = shelf_1_exit */
			 "Exit of the shelf",
			tags24,
			NULL,
			 shelf_1,
			 libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 25 = shelf_2_exit */
			 "Exit of the shelf",
			tags25,
			NULL,
			 shelf_2,
			 libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 26 = shelf_3_exit */
			 "Exit of the shelf",
			tags26,
			NULL,
			 shelf_3,
			 libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 27 = shelf_4_exit */
			 "Exit of the shelf",
			tags27,
			NULL,
			 shelf_4,
			 libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 28 = shelf_1_toilet */
			 "Entrance of the toilet",
			tags28,
			NULL,
			 shelf_1,
			 libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 29 = shelf_2_toilet */
			 "Entrance of the toilet",
			tags29,
			NULL,
			 shelf_2,
			 libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 30 = shelf_3_toilet */
			 "Entrance of the toilet",
			tags30,
			NULL,
			 shelf_3,
			 libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 31 = shelf_4_toilet */
			 "Entrance of the toilet",
			tags31,
			NULL,
			 shelf_4,
			 libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
	//libraryToilet
		{	/* 32 = shelf_toilet */
			 "Entrance of the toilet",
			tags32,
			NULL,
			 libraryShelf,
			 libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 33 = libraryToilet */
			 "The library toilet",
			tags33,
			NULL,
			NULL,
			NULL,
			NULL,
			 "It's dirty and has some weird mass lying around urinal cabin 3. It is glowing with some wierd glow",
			 99999
		},
		{	/* 34 = sink */
			 "Wash Basin",
			tags34,
			 "You have washed your hands and face",
			 libraryToilet,
			NULL,
			 "You see the wash basin and the urinal on this side of the toilet",
			 "The tap in the wash basin is leaking slowly and there is no way to close it properly",
			 99999
		},
		{	/* 35 = urinal */
			 "Urinals",
			tags35,
			 "You have used the urinal",
			 libraryToilet,
			NULL,
			NULL,
			 "The urinals are stinky and stained",
			 99999
		},
		{	/* 36 = supplyCloset */
			 "Supply Closet",
			tags36,
			 "The Supply Closet is locked",
			 libraryToilet,
			NULL,
			 "You see the supply closet on this side of the toilet",
			 "The Supply Closet is locked",
			 99999
		},
		{	/* 37 = urinalCabin_1 */
			 "Urinal Cabin 1",
			tags37,
			NULL,
			 libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 38 = urinalCabin_2 */
			 "Urinal Cabin 2",
			tags38,
			NULL,
			 libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 39 = urinalCabin_3_entrance */
			 "Urinal Cabin 3",
			tags39,
			NULL,
			 libraryToilet,
			 urinalCabin_3,
			NULL,
			 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
			NULL
		},
		{	/* 40 = urinalCabin_3 */
			 "Urinal Cabin 3",
			tags40,
			NULL,
			NULL,
			NULL,
			NULL,
			 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
			NULL
		},
		{	/* 41 = urinalCabin_4 */
			 "Urinal Cabin 4",
			tags41,
			NULL,
			 libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 42 = libraryToiletExit */
			 "Exit of the toilet",
			tags42,
			NULL,
			 libraryToilet,
			 libraryShelf,
			 "you have entered the book shelved",
			NULL,
			NULL
		},
		{	/* 43 = mysteryObject */
			 "Body of a guard in mysterious uniform",
			tags43,
			NULL,
			 urinalCabin_3,
			NULL,
			NULL,
			 "The guard appears to be dead. His uniform is slightly burnt and doesnt appear to normal guard uniform",
			NULL
		},
		{	/* 44 = portal */
			 "A portal type thing emanating green radiation",
			tags44,
			NULL,
			 urinalCabin_3,
			 alt_toilet,
			 "Where am I what is happening ? Where is the guard ? Where did the portal go ? Woah that was some strong acid yesterday",
			 "The portal is making very ominous sounds. You cant see through it. You can go through it......maybe",
			NULL
		},
	//alt world
	//
		{	/* 45 = alt_toilet */
			 "The library toilet",
			tags45,
			NULL,
			NULL,
			NULL,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This toilet looks eerily similar to the one you were in but there is some ominous feeling about it",
			 99999
		},
		{	/* 46 = alt_libraryToilet */
			 "The library toilet",
			tags46,
			NULL,
			NULL,
			NULL,
			NULL,
			 "It's dirty and has some weird mass lying around urinal cabin 3. It is glowing with some wierd glow",
			 99999
		},
		{	/* 47 = alt_sink */
			 "Wash Basin",
			tags47,
			 "You have washed your hands and face",
			 alt_toilet,
			NULL,
			NULL,
			 "The tap in the wash basin is leaking slowly and there is no way to close it properly",
			 99999
		},
		{	/* 48 = alt_urinal */
			 "Urinals",
			tags48,
			 "You have used the urinal",
			 alt_toilet,
			NULL,
			NULL,
			 "The urinals are stinky and stained",
			 99999
		},
		{	/* 49 = alt_supplyCloset */
			 "Supply Closet",
			tags49,
			 "The Supply Closet is locked",
			 alt_toilet,
			NULL,
			NULL,
			 "The Supply Closet is locked",
			 99999
		},
		{	/* 50 = alt_urinalCabin_1 */
			 "Urinal Cabin 1",
			tags50,
			NULL,
			 alt_toilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 51 = alt_urinalCabin_2 */
			 "Urinal Cabin 2",
			tags51,
			NULL,
			 alt_toilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 52 = alt_urinalCabin_3 */
			 "Urinal Cabin 3",
			tags52,
			NULL,
			 alt_toilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
			NULL
		},
		{	/* 53 = alt_urinalCabin_4 */
			 "Urinal Cabin 4",
			tags53,
			NULL,
			 alt_toilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 54 = alt_ToiletExit */
			 "Exit of the toilet",
			tags54,
			NULL,
			 alt_toilet,
			NULL,
			 "This locked that is strange. Why not try opening the book it looks out of place",
			NULL,
			NULL
		},
		{	/* 55 = alt_libraryShelf */
			 "The section with the book shelves",
			tags55,
			NULL,
			NULL,
			NULL,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 56 = alt_shelf_1 */
			 "Book Shelf Number 1\n",
			tags56,
			NULL,
			 alt_libraryShelf,
			 alt_shelf_1,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 57 = alt_shelf_2 */
			 "Book Shelf Number 2\n",
			tags57,
			NULL,
			 alt_libraryShelf,
			 alt_shelf_2,
			NULL,
			 "There is 1 books missing from this shelf.",
			 99999
		},
		{	/* 58 = alt_shelf_3 */
			 "Book Shelf Number 3\n",
			tags58,
			NULL,
			 alt_libraryShelf,
			 alt_shelf_3,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 59 = alt_shelf_4 */
			 "Book Shelf Number 4\n",
			tags59,
			NULL,
			 alt_libraryShelf,
			 alt_shelf_4,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 60 = alt_shelf_1_exit */
			 "Exit of the shelf",
			tags60,
			NULL,
			 alt_shelf_1,
			 alt_libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 61 = alt_shelf_2_exit */
			 "Exit of the shelf",
			tags61,
			NULL,
			 alt_shelf_2,
			 alt_libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 62 = alt_shelf_3_exit */
			 "Exit of the shelf",
			tags62,
			NULL,
			 alt_shelf_3,
			 alt_libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 63 = alt_shelf_4_exit */
			 "Exit of the shelf",
			tags63,
			NULL,
			 alt_shelf_4,
			 alt_libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 64 = alt_shelf_1_toilet */
			 "Entrance of the toilet",
			tags64,
			NULL,
			 alt_shelf_1,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 65 = alt_shelf_2_toilet */
			 "Entrance of the toilet",
			tags65,
			NULL,
			 alt_shelf_2,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 66 = alt_shelf_3_toilet */
			 "Entrance of the toilet",
			tags66,
			NULL,
			 alt_shelf_3,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 67 = alt_shelf_4_toilet */
			 "Entrance of the toilet",
			tags67,
			NULL,
			 alt_shelf_4,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 68 = alt_shelf_toilet */
			 "Entrance of the toilet",
			tags68,
			NULL,
			 alt_libraryShelf,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 69 = level_1 */
			 "A book on the floor",
			tags69,
			NULL,
			 alt_toilet,
			 levelSherlock,
			 "What is this what apartment is this",
			 "It is a sherlock holmes book but why is it glowing",
			 99999
		},
		{	/* 70 = levelSherlock */
			 "221b placeholder text",
			tags70,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 71 = levelExit_1 */
			 "Exit of the level PLACEHOLDER",
			tags71,
			NULL,
			 levelSherlock,
			 alt_libraryToilet,
			NULL,
			NULL,
			NULL
		},
		{	/* 72 = alt_sink_level_exit */
			 "Wash Basin",
			tags72,
			 "You have washed your hands and face",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The tap in the wash basin is leaking slowly and there is no way to close it properly",
			 99999
		},
		{	/* 73 = alt_urinal_level_exit */
			 "Urinals",
			tags73,
			 "You have used the urinal",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The urinals are stinky and stained",
			 99999
		},
		{	/* 74 = alt_supplyCloset_level_exit */
			 "Supply Closet",
			tags74,
			 "The Supply Closet is locked",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The Supply Closet is locked",
			 99999
		},
		{	/* 75 = alt_urinalCabin_1_level_exit */
			 "Urinal Cabin 1",
			tags75,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 76 = alt_urinalCabin_2_level_exit */
			 "Urinal Cabin 2",
			tags76,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 77 = alt_urinalCabin_3_level_exit */
			 "Urinal Cabin 3",
			tags77,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
			NULL
		},
		{	/* 78 = alt_urinalCabin_4_level_exit */
			 "Urinal Cabin 4",
			tags78,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
	// alt_library
		{	/* 79 = alt_ToiletExit_locked */
			 "Exit of the toilet",
			tags79,
			NULL,
			 alt_libraryToilet,
			 alt_libraryShelf,
			 "This locked that is strange. Why not try opening the book it looks out of place",
			NULL,
			NULL
		},
		{	/* 80 = alt_library */
			 "an old dusty library",
			tags80,
			NULL,
			NULL,
			NULL,
			 "You have entred the library",
			NULL,
			 99999
		},
		{	/* 81 = alt_libraryExit */
			 "Exit of the library",
			tags81,
			NULL,
			 alt_library,
			NULL,
			 "It is locked",
			NULL,
			 99999
		},
		{	/* 82 = alt_libraryReception */
			 "The library reception",
			tags82,
			NULL,
			 alt_library,
			NULL,
			 "You are facing the reception",
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 83 = alt_libraryShelfEntrance */
			 "The gorund floor book shelves",
			tags83,
			NULL,
			 alt_library,
			 alt_libraryShelf,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 84 = alt_libraryShelfExit */
			 "The library hall",
			tags84,
			NULL,
			 alt_libraryShelf,
			 alt_library,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 85 = stairs_floor_2 */
			 "The second floor stairs",
			tags85,
			NULL,
			 alt_library,
			 secondFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
	//secondFloor
		{	/* 86 = firstFloor */
			 "The first floor stairs",
			tags86,
			NULL,
			 secondFloor,
			 alt_library,
			 "The first floor",
			NULL,
			NULL
		},
		{	/* 87 = secondFloor */
			 "The second floor",
			tags87,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 88 = secondFloorShelf */
			 "Second Floor book shelves",
			tags88,
			NULL,
			 secondFloor,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 89 = secondFloorShelf_1 */
			 "Book Shelf 1",
			tags89,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_1,
			NULL,
			NULL,
			NULL
		},
		{	/* 90 = secondFloorShelf_2 */
			 "Book Shelf 2",
			tags90,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_2,
			NULL,
			NULL,
			NULL
		},
		{	/* 91 = secondFloorShelf_3 */
			 "Book Shelf 3",
			tags91,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_3,
			NULL,
			NULL,
			NULL
		},
		{	/* 92 = secondFloorShelf_4 */
			 "Book Shelf 4",
			tags92,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_4,
			NULL,
			NULL,
			NULL
		},
		{	/* 93 = secondFloorShelf_hall */
			 "Second floor Hall",
			tags93,
			NULL,
			 secondFloorShelf,
			 secondFloor,
			NULL,
			NULL,
			NULL
		},
		{	/* 94 = secondFloorShelf_1_exit */
			 "Exit of the shelf",
			tags94,
			NULL,
			 secondFloorShelf_1,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 95 = secondFloorShelf_2_exit */
			 "Exit of the shelf",
			tags95,
			NULL,
			 secondFloorShelf_2,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 96 = secondFloorShelf_3_exit */
			 "Exit of the shelf",
			tags96,
			NULL,
			 secondFloorShelf_3,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 97 = secondFloorShelf_4_exit */
			 "Exit of the shelf",
			tags97,
			NULL,
			 secondFloorShelf_4,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
	// level 2
		{	/* 98 = computerCorner */
			 "Computer area for research",
			tags98,
			 "The power is down try again later",
			 secondFloor,
			NULL,
			 "You are in front of a computer",
			NULL,
			NULL
		},
		{	/* 99 = level_2 */
			 "A mysterious book",
			tags99,
			NULL,
			 secondFloorShelf_3,
			 levelMahabharat,
			 "What is this PLACEHOLDER",
			NULL,
			NULL
		},
		{	/* 100 = levelMahabharat */
			 "Placeholder",
			tags100,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 101 = levelExit_2 */
			 "Level Exit PLACEHOLDER",
			tags101,
			NULL,
			 levelMahabharat,
			 secondFloorShelf_3_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 102 = secondFloor_alt */
			 "The second floor",
			tags102,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 103 = secondFloorShelf_alt */
			 "Second Floor book shelves",
			tags103,
			NULL,
			 secondFloor_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 104 = secondFloorShelf_1_alt */
			 "Book Shelf 1",
			tags104,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_1_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 105 = secondFloorShelf_2_alt */
			 "Book Shelf 2",
			tags105,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_2_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 106 = secondFloorShelf_3_alt */
			 "Book Shelf 3",
			tags106,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_3_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 107 = secondFloorShelf_4_alt */
			 "Book Shelf 4",
			tags107,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_4_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 108 = secondFloorShelf_hall_alt */
			 "Second floor Hall",
			tags108,
			NULL,
			 secondFloorShelf_alt,
			NULL,
			 "GO FORWARD EVERYTHING IS ON FIRE HERE",
			NULL,
			NULL
		},
		{	/* 109 = secondFloorShelf_1_exit_alt */
			 "Exit of the shelf",
			tags109,
			NULL,
			 secondFloorShelf_1_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 110 = secondFloorShelf_2_exit */
			 "Exit of the shelf",
			tags110,
			NULL,
			 secondFloorShelf_2_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 111 = secondFloorShelf_3_exit */
			 "Exit of the shelf",
			tags111,
			NULL,
			 secondFloorShelf_3_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 112 = secondFloorShelf_4_exit */
			 "Exit of the shelf",
			tags112,
			NULL,
			 secondFloorShelf_4_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 113 = stairs_floor_3_1 */
			 "The third floor stairs",
			tags113,
			NULL,
			 secondFloorShelf_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 114 = stairs_floor_3_1 */
			 "The third floor stairs",
			tags114,
			NULL,
			 secondFloorShelf_1_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 115 = stairs_floor_3_2 */
			 "The third floor stairs",
			tags115,
			NULL,
			 secondFloorShelf_2_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 116 = stairs_floor_3_3 */
			 "The third floor stairs",
			tags116,
			NULL,
			 secondFloorShelf_3_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 117 = stairs_floor_3_4 */
			 "The third floor stairs",
			tags117,
			NULL,
			 secondFloorShelf_4_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 118 = thirdFloor */
			 "the third floor reading room",
			tags118,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 119 = stairsSecondFloorDown */
			 "Stairs to the second floor",
			tags119,
			NULL,
			 thirdFloor,
			 secondFloorShelf_alt,
			 "You went down the stairs to the shelf",
			NULL,
			NULL
		},
		{	/* 120 = table_1 */
			 "Reading room table 1",
			tags120,
			NULL,
			 thirdFloor,
			NULL,
			 "You are facing table 1",
			NULL,
			NULL
		},
		{	/* 121 = table_2 */
			 "Reading room table 2",
			tags121,
			NULL,
			 thirdFloor,
			NULL,
			 "You are facing table 2",
			NULL,
			NULL
		},
		{	/* 122 = table_3 */
			 "Reading room table 3",
			tags122,
			NULL,
			 thirdFloor,
			NULL,
			 "You are facing table 3",
			NULL,
			NULL
		},
		{	/* 123 = level_3 */
			 "A book on table 3",
			tags123,
			NULL,
			 thirdFloor,
			 porcelianPalace,
			 "What place is this why are there these paintings on the wall? What is it this time",
			NULL,
			NULL
		},
		{	/* 124 = porcelianPalace */
			 "a mysterious alley",
			tags124,
			NULL,
			NULL,
			NULL,
			 "You cant get much closer than this",
			 "This looks like a mueseum of some sort there are paintings on the wall. Fossils all around and many things you don't recoganize",
			NULL
		},
		{	/* 125 = porcelianPalaceWalls_N */
			 "multiple fossils",
			tags125,
			NULL,
			NULL,
			NULL,
			 "You are facing multiple fossils",
			 "Multiple fossils some familar ones like the dinosaurs but others look like the could be human",
			NULL
		},
		{	/* 126 = porcelianPalaceWalls_S */
			 "a wall with multiple paintings",
			tags126,
			NULL,
			NULL,
			NULL,
			 "You cant get much closer than this",
			 "This looks like a mueseum of some sort there are paintings on the wall. Fossils all around and many things you don't recoganize",
			NULL
		},
		{	/* 127 = porcelianPalaceWalls_W */
			 "a mysterious alley",
			tags127,
			NULL,
			NULL,
			NULL,
			 "You cant get much closer than this",
			 "This looks like a mueseum of some sort there are paintings on the wall. Fossils all around and many things you don't recoganize",
			NULL
		},
	//hhd
	// misc
		{	/* 128 = porcelianPalaceWalls_E */
			 "a mysterious alley",
			tags128,
			NULL,
			NULL,
			NULL,
			 "You cant get much closer than this",
			 "This looks like a mueseum of some sort there are paintings on the wall. Fossils all around and many things you don't recoganize",
			NULL
		},
	//players	 
		{	/* 129 = guard */
			 "a burly guard",
			tags129,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 130 = player */
			 "yourself",
			tags130,
			NULL,
			 bedroom,
			NULL,
			NULL,
			NULL,
			NULL
		}
};
