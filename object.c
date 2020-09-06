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
static const char* tags40[] = { "urinal cabin 4","cabin 4", NULL };
static const char* tags41[] = { "exit","toilet exit", NULL };
static const char* tags42[] = { "body","mysterious body","guard", NULL };
static const char* tags43[] = { NULL };
//alt world
//
static const char* tags44[] = { "portal","north", NULL };
static const char* tags45[] = { "toilet","east", NULL };
static const char* tags46[] = { "wash basin","sink", NULL };
static const char* tags47[] = { "urinal","urinals", NULL };
static const char* tags48[] = { "supply closet","closet", NULL };
static const char* tags49[] = { "urinal cabin 1","cabin 1", NULL };
static const char* tags50[] = { "urinal cabin 2","cabin 2", NULL };
static const char* tags51[] = { "urinal cabin 3","cabin 3", NULL };
static const char* tags52[] = { "urinal cabin 4","cabin 4", NULL };
static const char* tags53[] = { "exit","toilet exit", NULL };
static const char* tags54[] = { "book shelf","shelves","shelf", NULL };
static const char* tags55[] = { "book shelf 1","shelf 1", NULL };
static const char* tags56[] = { "book shelf 2","shelf 2", NULL };
static const char* tags57[] = { "book shelf 3","shelf 3", NULL };
static const char* tags58[] = { "book shelf 4","shelf 4", NULL };
static const char* tags59[] = { "exit", NULL };
static const char* tags60[] = { "exit", NULL };
static const char* tags61[] = { "exit", NULL };
static const char* tags62[] = { "exit", NULL };
static const char* tags63[] = { NULL };
static const char* tags64[] = { NULL };
static const char* tags65[] = { NULL };
static const char* tags66[] = { NULL };
static const char* tags67[] = { NULL };
static const char* tags68[] = { NULL };
static const char* tags69[] = { "book", NULL };
static const char* tags70[] = { "Exit", NULL };
static const char* tags71[] = { "wash basin","sink", NULL };
static const char* tags72[] = { "urinal","urinals", NULL };
static const char* tags73[] = { "supply closet","closet", NULL };
static const char* tags74[] = { "urinal cabin 1","cabin 1", NULL };
static const char* tags75[] = { "urinal cabin 2","cabin 2", NULL };
static const char* tags76[] = { "urinal cabin 3","cabin 3", NULL };
static const char* tags77[] = { "urinal cabin 4","cabin 4", NULL };
// alt_library
static const char* tags78[] = { "exit","toilet exit", NULL };
static const char* tags79[] = { "library", NULL };
static const char* tags80[] = { "exit","west", NULL };
static const char* tags81[] = { "reception", NULL };
static const char* tags82[] = { "east", NULL };
static const char* tags83[] = { "west","hall", NULL };
//secondFloor
static const char* tags84[] = { "stairs","up", NULL };
static const char* tags85[] = { "second floor", NULL };
static const char* tags86[] = { "shelf","east", NULL };
static const char* tags87[] = { "book shelf 1","shelf 1", NULL };
static const char* tags88[] = { "book shelf 2","shelf 2", NULL };
static const char* tags89[] = { "book shelf 3","shelf 3", NULL };
static const char* tags90[] = { "book shelf 4","shelf 4", NULL };
static const char* tags91[] = { "hall","west", NULL };
static const char* tags92[] = { "exit","west", NULL };
static const char* tags93[] = { "exit","west", NULL };
static const char* tags94[] = { "exit","west", NULL };
static const char* tags95[] = { "exit","west", NULL };
static const char* tags96[] = { "computer","computer corner", NULL };
static const char* tags97[] = { "book", NULL };
static const char* tags98[] = { NULL };
static const char* tags99[] = { "exit", NULL };
static const char* tags100[] = { "third floor", NULL };
static const char* tags101[] = { "second floor", NULL };
static const char* tags102[] = { "shelf","east", NULL };
static const char* tags103[] = { "book shelf 1","shelf 1", NULL };
static const char* tags104[] = { "book shelf 2","shelf 2", NULL };
static const char* tags105[] = { "book shelf 3","shelf 3", NULL };
static const char* tags106[] = { "book shelf 4","shelf 4", NULL };
static const char* tags107[] = { "hall","west", NULL };
static const char* tags108[] = { "exit","west", NULL };
static const char* tags109[] = { "exit","west", NULL };
static const char* tags110[] = { "exit","west", NULL };
static const char* tags111[] = { "exit","west", NULL };
static const char* tags112[] = { "stairs","up", NULL };
static const char* tags113[] = { "stairs","up", NULL };
static const char* tags114[] = { "stairs","up", NULL };
static const char* tags115[] = { "stairs","up", NULL };
static const char* tags116[] = { "stairs","up", NULL };
//hhd
// misc
static const char* tags117[] = { "down","stairs", NULL };
//players	 
static const char* tags118[] = { "guard", "burly guard", NULL };
static const char* tags119[] = { "yourself", NULL };

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
		{	/* 39 = urinalCabin_3 */
			 "Urinal Cabin 3",
			tags39,
			NULL,
			 libraryToilet,
			 urinalCabin_3,
			NULL,
			 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
			NULL
		},
		{	/* 40 = urinalCabin_4 */
			 "Urinal Cabin 4",
			tags40,
			NULL,
			 libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 41 = libraryToiletExit */
			 "Exit of the toilet",
			tags41,
			NULL,
			 libraryToilet,
			 libraryShelf,
			 "you have entered the book shelved",
			NULL,
			NULL
		},
		{	/* 42 = mysteryObject */
			 "Body of a guard in mysterious uniform",
			tags42,
			NULL,
			 urinalCabin_3,
			NULL,
			NULL,
			 "The guard appears to be dead. His uniform is slightly burnt and doesnt appear to normal guard uniform",
			NULL
		},
		{	/* 43 = portal */
			 "A portal type thing emanating green radiation",
			tags43,
			NULL,
			 urinalCabin_3,
			 alt_toilet,
			 "Where am I what is happening ? Where is the guard ? Where did the portal go ? Woah that was some strong acid yesterday",
			 "The portal is making very ominous sounds. You cant see through it. You can go through it......maybe",
			NULL
		},
	//alt world
	//
		{	/* 44 = alt_toilet */
			 "The library toilet",
			tags44,
			NULL,
			NULL,
			NULL,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This toilet looks eerily similar to the one you were in but there is some ominous feeling about it",
			 99999
		},
		{	/* 45 = alt_libraryToilet */
			 "The library toilet",
			tags45,
			NULL,
			NULL,
			NULL,
			NULL,
			 "It's dirty and has some weird mass lying around urinal cabin 3. It is glowing with some wierd glow",
			 99999
		},
		{	/* 46 = alt_sink */
			 "Wash Basin",
			tags46,
			 "You have washed your hands and face",
			 alt_toilet,
			NULL,
			NULL,
			 "The tap in the wash basin is leaking slowly and there is no way to close it properly",
			 99999
		},
		{	/* 47 = alt_urinal */
			 "Urinals",
			tags47,
			 "You have used the urinal",
			 alt_toilet,
			NULL,
			NULL,
			 "The urinals are stinky and stained",
			 99999
		},
		{	/* 48 = alt_supplyCloset */
			 "Supply Closet",
			tags48,
			 "The Supply Closet is locked",
			 alt_toilet,
			NULL,
			NULL,
			 "The Supply Closet is locked",
			 99999
		},
		{	/* 49 = alt_urinalCabin_1 */
			 "Urinal Cabin 1",
			tags49,
			NULL,
			 alt_toilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 50 = alt_urinalCabin_2 */
			 "Urinal Cabin 2",
			tags50,
			NULL,
			 alt_toilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 51 = alt_urinalCabin_3 */
			 "Urinal Cabin 3",
			tags51,
			NULL,
			 alt_toilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
			NULL
		},
		{	/* 52 = alt_urinalCabin_4 */
			 "Urinal Cabin 4",
			tags52,
			NULL,
			 alt_toilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 53 = alt_ToiletExit */
			 "Exit of the toilet",
			tags53,
			NULL,
			 alt_toilet,
			NULL,
			 "This locked that is strange. Why not try opening the book it looks out of place",
			NULL,
			NULL
		},
		{	/* 54 = alt_libraryShelf */
			 "The section with the book shelves",
			tags54,
			NULL,
			NULL,
			NULL,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 55 = alt_shelf_1 */
			 "Book Shelf Number 1\n",
			tags55,
			NULL,
			 alt_libraryShelf,
			 alt_shelf_1,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 56 = alt_shelf_2 */
			 "Book Shelf Number 2\n",
			tags56,
			NULL,
			 alt_libraryShelf,
			 alt_shelf_2,
			NULL,
			 "There is 1 books missing from this shelf.",
			 99999
		},
		{	/* 57 = alt_shelf_3 */
			 "Book Shelf Number 3\n",
			tags57,
			NULL,
			 alt_libraryShelf,
			 alt_shelf_3,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 58 = alt_shelf_4 */
			 "Book Shelf Number 4\n",
			tags58,
			NULL,
			 alt_libraryShelf,
			 alt_shelf_4,
			NULL,
			 "There are 2 books missing from this shelf.",
			 99999
		},
		{	/* 59 = alt_shelf_1_exit */
			 "Exit of the shelf",
			tags59,
			NULL,
			 alt_shelf_1,
			 alt_libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 60 = alt_shelf_2_exit */
			 "Exit of the shelf",
			tags60,
			NULL,
			 alt_shelf_2,
			 alt_libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 61 = alt_shelf_3_exit */
			 "Exit of the shelf",
			tags61,
			NULL,
			 alt_shelf_3,
			 alt_libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 62 = alt_shelf_4_exit */
			 "Exit of the shelf",
			tags62,
			NULL,
			 alt_shelf_4,
			 alt_libraryShelf,
			NULL,
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 63 = alt_shelf_1_toilet */
			 "Entrance of the toilet",
			tags63,
			NULL,
			 alt_shelf_1,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 64 = alt_shelf_2_toilet */
			 "Entrance of the toilet",
			tags64,
			NULL,
			 alt_shelf_2,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 65 = alt_shelf_3_toilet */
			 "Entrance of the toilet",
			tags65,
			NULL,
			 alt_shelf_3,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 66 = alt_shelf_4_toilet */
			 "Entrance of the toilet",
			tags66,
			NULL,
			 alt_shelf_4,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 67 = alt_shelf_toilet */
			 "Entrance of the toilet",
			tags67,
			NULL,
			 alt_libraryShelf,
			 alt_libraryToilet,
			 "You have entred the bathroom. There is some wierd light coming from cabin 3. There is also something on the floor",
			 "This is the exit of this shelf. Exit to explore the other shelves",
			 99999
		},
		{	/* 68 = level_1 */
			 "A book on the floor",
			tags68,
			NULL,
			 alt_toilet,
			 levelSherlock,
			 "What is this what apartment is this",
			 "It is a sherlock holmes book but why is it glowing",
			 99999
		},
		{	/* 69 = levelSherlock */
			 "221b placeholder text",
			tags69,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 70 = levelExit_1 */
			 "Exit of the level PLACEHOLDER",
			tags70,
			NULL,
			 levelSherlock,
			 alt_libraryToilet,
			NULL,
			NULL,
			NULL
		},
		{	/* 71 = alt_sink_level_exit */
			 "Wash Basin",
			tags71,
			 "You have washed your hands and face",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The tap in the wash basin is leaking slowly and there is no way to close it properly",
			 99999
		},
		{	/* 72 = alt_urinal_level_exit */
			 "Urinals",
			tags72,
			 "You have used the urinal",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The urinals are stinky and stained",
			 99999
		},
		{	/* 73 = alt_supplyCloset_level_exit */
			 "Supply Closet",
			tags73,
			 "The Supply Closet is locked",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The Supply Closet is locked",
			 99999
		},
		{	/* 74 = alt_urinalCabin_1_level_exit */
			 "Urinal Cabin 1",
			tags74,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 75 = alt_urinalCabin_2_level_exit */
			 "Urinal Cabin 2",
			tags75,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 76 = alt_urinalCabin_3_level_exit */
			 "Urinal Cabin 3",
			tags76,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
			NULL
		},
		{	/* 77 = alt_urinalCabin_4_level_exit */
			 "Urinal Cabin 4",
			tags77,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
	// alt_library
		{	/* 78 = alt_ToiletExit_locked */
			 "Exit of the toilet",
			tags78,
			NULL,
			 alt_libraryToilet,
			 alt_libraryShelf,
			 "This locked that is strange. Why not try opening the book it looks out of place",
			NULL,
			NULL
		},
		{	/* 79 = alt_library */
			 "an old dusty library",
			tags79,
			NULL,
			NULL,
			NULL,
			 "You have entred the library",
			NULL,
			 99999
		},
		{	/* 80 = alt_libraryExit */
			 "Exit of the library",
			tags80,
			NULL,
			 alt_library,
			NULL,
			 "It is locked",
			NULL,
			 99999
		},
		{	/* 81 = alt_libraryReception */
			 "The library reception",
			tags81,
			NULL,
			 alt_library,
			NULL,
			 "You are facing the reception",
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 82 = alt_libraryShelfEntrance */
			 "The gorund floor book shelves",
			tags82,
			NULL,
			 alt_library,
			 alt_libraryShelf,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 83 = alt_libraryShelfExit */
			 "The library hall",
			tags83,
			NULL,
			 alt_libraryShelf,
			 alt_library,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
	//secondFloor
		{	/* 84 = stairs_floor_2 */
			 "The second floor stairs",
			tags84,
			NULL,
			 alt_library,
			 secondFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 85 = secondFloor */
			 "The second floor",
			tags85,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 86 = secondFloorShelf */
			 "Second Floor book shelves",
			tags86,
			NULL,
			 secondFloor,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 87 = secondFloorShelf_1 */
			 "Book Shelf 1",
			tags87,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_1,
			NULL,
			NULL,
			NULL
		},
		{	/* 88 = secondFloorShelf_2 */
			 "Book Shelf 2",
			tags88,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_2,
			NULL,
			NULL,
			NULL
		},
		{	/* 89 = secondFloorShelf_3 */
			 "Book Shelf 3",
			tags89,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_3,
			NULL,
			NULL,
			NULL
		},
		{	/* 90 = secondFloorShelf_4 */
			 "Book Shelf 4",
			tags90,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_4,
			NULL,
			NULL,
			NULL
		},
		{	/* 91 = secondFloorShelf_hall */
			 "Second floor Hall",
			tags91,
			NULL,
			 secondFloorShelf,
			 secondFloor,
			NULL,
			NULL,
			NULL
		},
		{	/* 92 = secondFloorShelf_1_exit */
			 "Exit of the shelf",
			tags92,
			NULL,
			 secondFloorShelf_1,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 93 = secondFloorShelf_2_exit */
			 "Exit of the shelf",
			tags93,
			NULL,
			 secondFloorShelf_2,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 94 = secondFloorShelf_3_exit */
			 "Exit of the shelf",
			tags94,
			NULL,
			 secondFloorShelf_3,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 95 = secondFloorShelf_4_exit */
			 "Exit of the shelf",
			tags95,
			NULL,
			 secondFloorShelf_4,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 96 = computerCorner */
			 "Computer area for research",
			tags96,
			 "The power is down try again later",
			 secondFloor,
			NULL,
			 "You are in front of a computer",
			NULL,
			NULL
		},
		{	/* 97 = level_2 */
			 "A mysterious book",
			tags97,
			NULL,
			 secondFloorShelf_3,
			 levelMahabharat,
			 "What is this PLACEHOLDER",
			NULL,
			NULL
		},
		{	/* 98 = levelMahabharat */
			 "Placeholder",
			tags98,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 99 = levelExit_2 */
			 "Level Exit PLACEHOLDER",
			tags99,
			NULL,
			 levelMahabharat,
			 secondFloorShelf_3_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 100 = thirdFloor */
			 "The third floor of the library",
			tags100,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 101 = secondFloor_alt */
			 "The second floor",
			tags101,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 102 = secondFloorShelf_alt */
			 "Second Floor book shelves",
			tags102,
			NULL,
			 secondFloor_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 103 = secondFloorShelf_1_alt */
			 "Book Shelf 1",
			tags103,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_1_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 104 = secondFloorShelf_2_alt */
			 "Book Shelf 2",
			tags104,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_2_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 105 = secondFloorShelf_3_alt */
			 "Book Shelf 3",
			tags105,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_3_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 106 = secondFloorShelf_4_alt */
			 "Book Shelf 4",
			tags106,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_4_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 107 = secondFloorShelf_hall_alt */
			 "Second floor Hall",
			tags107,
			NULL,
			 secondFloorShelf_alt,
			NULL,
			 "GO FORWARD EVERYTHING IS ON FIRE HERE",
			NULL,
			NULL
		},
		{	/* 108 = secondFloorShelf_1_exit_alt */
			 "Exit of the shelf",
			tags108,
			NULL,
			 secondFloorShelf_1_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 109 = secondFloorShelf_2_exit */
			 "Exit of the shelf",
			tags109,
			NULL,
			 secondFloorShelf_2_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 110 = secondFloorShelf_3_exit */
			 "Exit of the shelf",
			tags110,
			NULL,
			 secondFloorShelf_3_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 111 = secondFloorShelf_4_exit */
			 "Exit of the shelf",
			tags111,
			NULL,
			 secondFloorShelf_4_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 112 = stairs_floor_3_1 */
			 "The third floor stairs",
			tags112,
			NULL,
			 secondFloorShelf_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 113 = stairs_floor_3_1 */
			 "The third floor stairs",
			tags113,
			NULL,
			 secondFloorShelf_1_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 114 = stairs_floor_3_2 */
			 "The third floor stairs",
			tags114,
			NULL,
			 secondFloorShelf_2_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 115 = stairs_floor_3_3 */
			 "The third floor stairs",
			tags115,
			NULL,
			 secondFloorShelf_3_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 116 = stairs_floor_3_4 */
			 "The third floor stairs",
			tags116,
			NULL,
			 secondFloorShelf_4_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
	//hhd
	// misc
		{	/* 117 = firstFloor */
			 "The first floor stairs",
			tags117,
			NULL,
			 secondFloor,
			 alt_library,
			 "The first floor",
			NULL,
			NULL
		},
	//players	 
		{	/* 118 = guard */
			 "a burly guard",
			tags118,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 119 = player */
			 "yourself",
			tags119,
			NULL,
			 bedroom,
			NULL,
			NULL,
			NULL,
			NULL
		}
};
