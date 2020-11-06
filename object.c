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
static const char* tags70[] = { "Exit", NULL };
static const char* tags71[] = { "book",NULL };
static const char* tags72[] = { "apartment","inside", NULL };
static const char* tags73[] = { "card", NULL };
static const char* tags74[] = { NULL };
static const char* tags75[] = { "outside","exit","back", NULL };
static const char* tags76[] = { NULL };
static const char* tags77[] = { "upstairs","up", NULL };
static const char* tags78[] = { "downstairs","down","back", NULL };
static const char* tags79[] = { NULL };
static const char* tags80[] = { "living hall","hall", NULL };
static const char* tags81[] = { "upstairs","back", NULL };
static const char* tags82[] = { NULL };
static const char* tags83[] = { "bedroom", NULL };
static const char* tags84[] = { "living hall","hall","back", NULL };
static const char* tags85[] = { NULL };
static const char* tags86[] = { "experiment table", NULL };
static const char* tags87[] = { "living hall","hall","back", NULL };
static const char* tags88[] = { NULL };
static const char* tags89[] = { "dining table", NULL };
static const char* tags90[] = { "living hall","hall","back", NULL };
static const char* tags91[] = { "wash basin","sink", NULL };
static const char* tags92[] = { "urinal","urinals", NULL };
static const char* tags93[] = { "supply closet","closet", NULL };
static const char* tags94[] = { "urinal cabin 1","cabin 1", NULL };
static const char* tags95[] = { "urinal cabin 2","cabin 2", NULL };
static const char* tags96[] = { "urinal cabin 3","cabin 3", NULL };
static const char* tags97[] = { "urinal cabin 4","cabin 4", NULL };
// alt_library
static const char* tags98[] = { "exit","toilet exit", NULL };
static const char* tags99[] = { "library", NULL };
static const char* tags100[] = { "exit","west", NULL };
static const char* tags101[] = { "reception", NULL };
static const char* tags102[] = { "east", NULL };
static const char* tags103[] = { "west","hall", NULL };
static const char* tags104[] = { "stairs","up", NULL };
//secondFloor
static const char* tags105[] = { "down","stairs", NULL };
static const char* tags106[] = { "second floor", NULL };
static const char* tags107[] = { "shelf","east", NULL };
static const char* tags108[] = { "book shelf 1","shelf 1", NULL };
static const char* tags109[] = { "book shelf 2","shelf 2", NULL };
static const char* tags110[] = { "book shelf 3","shelf 3", NULL };
static const char* tags111[] = { "book shelf 4","shelf 4", NULL };
static const char* tags112[] = { "hall","west", NULL };
static const char* tags113[] = { "exit","west", NULL };
static const char* tags114[] = { "exit","west", NULL };
static const char* tags115[] = { "exit","west", NULL };
static const char* tags116[] = { "exit","west", NULL };
// level 2
static const char* tags117[] = { "computer","computer corner", NULL };
static const char* tags118[] = { "book", NULL };
static const char* tags119[] = { "lakshagriha", NULL };
static const char* tags120[] = { "entrance", NULL };
static const char* tags121[] = { "lakshagrihacastle", NULL };
static const char* tags122[] = { "north","lakshagrihacastle", NULL };
static const char* tags123[] = { "east","west", NULL };
static const char* tags124[] = { "south","exit", NULL };
static const char* tags125[] = { "road", NULL };
static const char* tags126[] = { "road", NULL };
static const char* tags127[] = { "west","east","north", NULL };
static const char* tags128[] = { "exit", NULL };
static const char* tags129[] = { "village", NULL };
static const char* tags130[] = { "entrance","south", NULL };
static const char* tags131[] = { "west","east", NULL };
static const char* tags132[] = { "exit", NULL };
static const char* tags133[] = { "road", NULL };
static const char* tags134[] = { "north", NULL };
static const char* tags135[] = { "west","east", NULL };
static const char* tags136[] = { "exit", NULL };
static const char* tags137[] = { "hastinapurcastle", NULL };
static const char* tags138[] = { "east", NULL };
static const char* tags139[] = { "north", NULL };
static const char* tags140[] = { "meetinghall", NULL };
static const char* tags141[] = { "south", NULL };
static const char* tags142[] = { "exit", NULL };
static const char* tags143[] = { "second floor", NULL };
static const char* tags144[] = { "shelf","east", NULL };
static const char* tags145[] = { "book shelf 1","shelf 1", NULL };
static const char* tags146[] = { "book shelf 2","shelf 2", NULL };
static const char* tags147[] = { "book shelf 3","shelf 3", NULL };
static const char* tags148[] = { "book shelf 4","shelf 4", NULL };
static const char* tags149[] = { "hall","west", NULL };
static const char* tags150[] = { "exit","west", NULL };
static const char* tags151[] = { "exit","west", NULL };
static const char* tags152[] = { "exit","west", NULL };
static const char* tags153[] = { "exit","west", NULL };
static const char* tags154[] = { "stairs","up", NULL };
static const char* tags155[] = { "stairs","up", NULL };
static const char* tags156[] = { "stairs","up", NULL };
static const char* tags157[] = { "stairs","up", NULL };
static const char* tags158[] = { "stairs","up", NULL };
static const char* tags159[] = { "third floor", NULL };
static const char* tags160[] = { "down","east","second floor", NULL };
static const char* tags161[] = { "table 1","west", NULL };
static const char* tags162[] = { "table 2","north", NULL };
static const char* tags163[] = { "table 2","south", NULL };
static const char* tags164[] = { "book", NULL };
static const char* tags165[] = { "surrounding", NULL };
static const char* tags166[] = { "east", NULL };
//hhd
// misc
static const char* tags167[] = { NULL };
//players	 
static const char* tags168[] = { "guard", "burly guard", NULL };
static const char* tags169[] = { "yourself", NULL };

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
			 roadLibrary,
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
		{	/* 12 = roadLibrary */
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
			 roadLibrary,
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
			 roadLibrary,
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
			 roadLibrary,
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
			 spawnlocation,
			 "What is this what apartment is this",
			 "It is a sherlock holmes book but why is it glowing",
			 99999
		},
		{	/* 70 = levelExit_1 */
			 "Exit of the level PLACEHOLDER",
			tags70,
			NULL,
			 livinghall,
			 alt_libraryToilet,
			NULL,
			NULL,
			NULL
		},
		{	/* 71 = spawnlocation */
			 "an unknown location",
			tags71,
			NULL,
			NULL,
			NULL,
			 "You are in an unknown location where the surrounding is similar to Victoria England.\nYou see an apartment right in front of you.\nThere is also card on the ground.Perhaps you should 'examine' the card.",
			NULL,
			NULL
		},
		{	/* 72 = intobasement */
			 "An unknown apartment",
			tags72,
			NULL,
			 spawnlocation,
			 basement,
			 "You are in 221B Baker Street where Sherlock Holmes lives.\nYou are currently in the basement of the Apartment.\nYou see stairs that leads to his Room.",
			NULL,
			NULL
		},
		{	/* 73 = card */
			 "Card lying on the ground",
			tags73,
			NULL,
			 spawnlocation,
			NULL,
			NULL,
			 "The card reads 'Save and you shall leave'.",
			NULL
		},
		{	/* 74 = basement */
			 "221 B Baker Street Aparatment Basement",
			tags74,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 75 = exit_apartment */
			 "The exit",
			tags75,
			NULL,
			 basement,
			NULL,
			 "The door is locked.You can't go outside.Moreover, nothing is visible outside.\nLike a void.",
			NULL,
			NULL
		},
		{	/* 76 = upstairs */
			 "stairs that lead to Sherlocks' Room",
			tags76,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 77 = upstairs_entrance */
			 "Stairs leading to Sherlocks' Room",
			tags77,
			NULL,
			 basement,
			 upstairs,
			NULL,
			NULL,
			NULL
		},
		{	/* 78 = upstairs_exit */
			 "Stairs leading to the basement",
			tags78,
			NULL,
			 upstairs,
			 basement,
			NULL,
			NULL,
			NULL
		},
		{	/* 79 = livinghall */
			 "The Living Room",
			tags79,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 80 = livinghall_entrance */
			 "The living room",
			tags80,
			NULL,
			 upstairs,
			 livinghall,
			NULL,
			NULL,
			NULL
		},
		{	/* 81 = livinghall_exit */
			 "The Stairs",
			tags81,
			NULL,
			 livinghall,
			 upstairs,
			NULL,
			NULL,
			NULL
		},
		{	/* 82 = bedroomSherlock */
			 "The Bedroom",
			tags82,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 83 = bedroom_entranceSherlock */
			 "The bedroom",
			tags83,
			NULL,
			 livinghall,
			 bedroomSherlock,
			NULL,
			NULL,
			NULL
		},
		{	/* 84 = bedroom_exitSherlock */
			 "The Living Room",
			tags84,
			NULL,
			 bedroomSherlock,
			 livinghall,
			NULL,
			NULL,
			NULL
		},
		{	/* 85 = experimenttable */
			 "the Table where Sherlock Holmes does his experiment",
			tags85,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 86 = experimenttable_entrance */
			 "Experiment Table",
			tags86,
			NULL,
			 livinghall,
			 experimenttable,
			NULL,
			NULL,
			NULL
		},
		{	/* 87 = experimenttable_exit */
			 "The Living Room",
			tags87,
			NULL,
			 experimenttable,
			 livinghall,
			NULL,
			NULL,
			NULL
		},
		{	/* 88 = diningtable */
			 "the Dining Table",
			tags88,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 89 = diningtable_entrance */
			 "Dining Table",
			tags89,
			NULL,
			 livinghall,
			 diningtable,
			NULL,
			NULL,
			NULL
		},
		{	/* 90 = diningtable_exit */
			 "The Living Room",
			tags90,
			NULL,
			 diningtable,
			 livinghall,
			NULL,
			NULL,
			NULL
		},
		{	/* 91 = alt_sink_level_exit */
			 "Wash Basin",
			tags91,
			 "You have washed your hands and face",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The tap in the wash basin is leaking slowly and there is no way to close it properly",
			 99999
		},
		{	/* 92 = alt_urinal_level_exit */
			 "Urinals",
			tags92,
			 "You have used the urinal",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The urinals are stinky and stained",
			 99999
		},
		{	/* 93 = alt_supplyCloset_level_exit */
			 "Supply Closet",
			tags93,
			 "The Supply Closet is locked",
			 alt_libraryToilet,
			NULL,
			NULL,
			 "The Supply Closet is locked",
			 99999
		},
		{	/* 94 = alt_urinalCabin_1_level_exit */
			 "Urinal Cabin 1",
			tags94,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 95 = alt_urinalCabin_2_level_exit */
			 "Urinal Cabin 2",
			tags95,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
		{	/* 96 = alt_urinalCabin_3_level_exit */
			 "Urinal Cabin 3",
			tags96,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is open , it stinks very badly, there is a wierd glow eminating from the cabin,there also seems to be a mysterious object on the floor of the cabin",
			NULL
		},
		{	/* 97 = alt_urinalCabin_4_level_exit */
			 "Urinal Cabin 4",
			tags97,
			NULL,
			 alt_libraryToilet,
			NULL,
			 "The door is locked",
			 "The door is of blue color, it is locked from inside, it stinks very badly",
			NULL
		},
	// alt_library
		{	/* 98 = alt_ToiletExit_locked */
			 "Exit of the toilet",
			tags98,
			NULL,
			 alt_libraryToilet,
			 alt_libraryShelf,
			 "This locked that is strange. Why not try opening the book it looks out of place",
			NULL,
			NULL
		},
		{	/* 99 = alt_library */
			 "an old dusty library",
			tags99,
			NULL,
			NULL,
			NULL,
			 "You have entred the library",
			NULL,
			 99999
		},
		{	/* 100 = alt_libraryExit */
			 "Exit of the library",
			tags100,
			NULL,
			 alt_library,
			NULL,
			 "It is locked",
			NULL,
			 99999
		},
		{	/* 101 = alt_libraryReception */
			 "The library reception",
			tags101,
			NULL,
			 alt_library,
			NULL,
			 "You are facing the reception",
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 102 = alt_libraryShelfEntrance */
			 "The gorund floor book shelves",
			tags102,
			NULL,
			 alt_library,
			 alt_libraryShelf,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 103 = alt_libraryShelfExit */
			 "The library hall",
			tags103,
			NULL,
			 alt_libraryShelf,
			 alt_library,
			NULL,
			 "This is the reception of the library. This is your station you spend all your days here.",
			 99999
		},
		{	/* 104 = stairs_floor_2 */
			 "The second floor stairs",
			tags104,
			NULL,
			 alt_library,
			 secondFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
	//secondFloor
		{	/* 105 = firstFloor */
			 "The first floor stairs",
			tags105,
			NULL,
			 secondFloor,
			 alt_library,
			 "The first floor",
			NULL,
			NULL
		},
		{	/* 106 = secondFloor */
			 "The second floor",
			tags106,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 107 = secondFloorShelf */
			 "Second Floor book shelves",
			tags107,
			NULL,
			 secondFloor,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 108 = secondFloorShelf_1 */
			 "Book Shelf 1",
			tags108,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_1,
			NULL,
			NULL,
			NULL
		},
		{	/* 109 = secondFloorShelf_2 */
			 "Book Shelf 2",
			tags109,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_2,
			NULL,
			NULL,
			NULL
		},
		{	/* 110 = secondFloorShelf_3 */
			 "Book Shelf 3",
			tags110,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_3,
			NULL,
			NULL,
			NULL
		},
		{	/* 111 = secondFloorShelf_4 */
			 "Book Shelf 4",
			tags111,
			NULL,
			 secondFloorShelf,
			 secondFloorShelf_4,
			NULL,
			NULL,
			NULL
		},
		{	/* 112 = secondFloorShelf_hall */
			 "Second floor Hall",
			tags112,
			NULL,
			 secondFloorShelf,
			 secondFloor,
			NULL,
			NULL,
			NULL
		},
		{	/* 113 = secondFloorShelf_1_exit */
			 "Exit of the shelf",
			tags113,
			NULL,
			 secondFloorShelf_1,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 114 = secondFloorShelf_2_exit */
			 "Exit of the shelf",
			tags114,
			NULL,
			 secondFloorShelf_2,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 115 = secondFloorShelf_3_exit */
			 "Exit of the shelf",
			tags115,
			NULL,
			 secondFloorShelf_3,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
		{	/* 116 = secondFloorShelf_4_exit */
			 "Exit of the shelf",
			tags116,
			NULL,
			 secondFloorShelf_4,
			 secondFloorShelf,
			NULL,
			NULL,
			NULL
		},
	// level 2
		{	/* 117 = computerCorner */
			 "Computer area for research",
			tags117,
			 "The power is down try again later",
			 secondFloor,
			NULL,
			 "You are in front of a computer",
			NULL,
			NULL
		},
		{	/* 118 = level_2 */
			 "A mysterious book",
			tags118,
			NULL,
			 secondFloorShelf_3,
			 lakshagriha,
			 "What is this PLACEHOLDER",
			NULL,
			NULL
		},
		{	/* 119 = lakshagriha */
			 "place with the burning castle",
			tags119,
			NULL,
			NULL,
			NULL,
			 "You are in the city of lakshagriha\n",
			NULL,
			 99999
		},
		{	/* 120 = lakshagrihaEntrance */
			 "Entrance of the lakshagriha area",
			tags120,
			NULL,
			 lakshagriha,
			NULL,
			 "You entred the lakshagriha area\n",
			NULL,
			 99999
		},
		{	/* 121 = lakshagrihacastle */
			 "lakshagrihacastle\n",
			tags121,
			NULL,
			NULL,
			NULL,
			 "You entred the lakshagrihacastle\n",
			NULL,
			 99999
		},
		{	/* 122 = lakshagrihacastleEntrance */
			 "Entrance of the lakshagrihacastle",
			tags122,
			NULL,
			 lakshagriha,
			 lakshagrihacastle,
			 "You entred the lakshagriha Castle\n",
			NULL,
			 99999
		},
		{	/* 123 = lakshagrihacastleWalls */
			 "lakshagrihacastle walls",
			tags123,
			NULL,
			 lakshagrihacastle,
			NULL,
			 "There is nothing but walls there\n",
			NULL,
			 99999
		},
		{	/* 124 = lakshagrihacastleExit */
			 "Exit of the lakshagrihacastle",
			tags124,
			NULL,
			 lakshagrihacastle,
			 roadMahabharat,
			 "You are on the road towards village\n",
			NULL,
			 99999
		},
		{	/* 125 = roadMahabharat */
			 "the road leads to the village",
			tags125,
			NULL,
			NULL,
			NULL,
			 "You are on the road that leads you to the village",
			NULL,
			NULL
		},
		{	/* 126 = roadentranceMahabharat */
			 "The Road leads to the Village",
			tags126,
			NULL,
			 lakshagriha,
			 roadMahabharat,
			 "You are on the road that leads to the Village\n",
			NULL,
			 99999
		},
		{	/* 127 = roadWallsMahabharat */
			 "only jungle",
			tags127,
			NULL,
			 roadMahabharat,
			NULL,
			 "There is nothing but jungle all around and a narrow road that leads to small village\n",
			NULL,
			 99999
		},
		{	/* 128 = roadexit */
			 "The exit ",
			tags128,
			NULL,
			 roadMahabharat,
			 lakshagriha,
			 "You are on the road that leads to the Village\n",
			NULL,
			 99999
		},
		{	/* 129 = village */
			 "an old small village",
			tags129,
			NULL,
			NULL,
			NULL,
			 "You are here so that you can understand the language speak by the people of the Village and hide from the Fireman so that he couldn't kill you......\n You are in the front of the village\n",
			NULL,
			 99999
		},
		{	/* 130 = villageEntrance */
			 "entrance to the village",
			tags130,
			NULL,
			 roadMahabharat,
			 village,
			 "You entred the village\n",
			NULL,
			 99999
		},
		{	/* 131 = villageWalls */
			 "surrounded by mountains",
			tags131,
			NULL,
			 village,
			NULL,
			 "Whole village is surronded by the mountains and the jungle\n",
			NULL,
			 99999
		},
		{	/* 132 = villagexit */
			 "exit to the village",
			tags132,
			NULL,
			 village,
			 road1Mahabharat,
			 "You have exited the village and move towards the Hatinapur castle where pandavas appeared after long time and demand for their own Kingdom\n",
			NULL,
			 99999
		},
		{	/* 133 = road1Mahabharat */
			 "the road leads to the Hastinapur Castle\n",
			tags133,
			NULL,
			NULL,
			NULL,
			 "You are on the road that leads you to the village",
			NULL,
			NULL
		},
		{	/* 134 = road1entrance */
			 "The Road leads to the Hatinapur Castle\n",
			tags134,
			NULL,
			 road1Mahabharat,
			 hastinapurcastle,
			 "You are on the road that leads to the Hastinapur Castle\n",
			NULL,
			 99999
		},
		{	/* 135 = road1WallsMahabharat */
			 "only jungle",
			tags135,
			NULL,
			 road1Mahabharat,
			NULL,
			 "There is nothing but jungle all around and a narrow road that leads to Hastinapur Castle\n ",
			NULL,
			 99999
		},
		{	/* 136 = road1exitMahabharat */
			 "back to village",
			tags136,
			NULL,
			 road1Mahabharat,
			 village,
			 "back to village\n",
			NULL,
			 99999
		},
		{	/* 137 = hastinapurcastle */
			 "Welcome to the castle",
			tags137,
			NULL,
			NULL,
			NULL,
			 "You are at the glorious castle",
			NULL,
			 99999
		},
		{	/* 138 = hastinapurcastlgate */
			 "You were at the gate of the Castle\n",
			tags138,
			NULL,
			 hastinapurcastle,
			NULL,
			 "You were at the Gate for Entering the Castle\n",
			NULL,
			 99999
		},
		{	/* 139 = hastinapurcastleentrance */
			 "Entered to the Castle\n",
			tags139,
			NULL,
			 hastinapurcastle,
			 meetinghall,
			 "Entered to the Castle Hastinapur Castle and Headed towards the Meeting hall\n ",
			NULL,
			 99999
		},
		{	/* 140 = meetinghall */
			 "Meeting Hall\n",
			tags140,
			NULL,
			NULL,
			NULL,
			 "It's a Place where the game of Politics begins\n",
			NULL,
			 99999
		},
		{	/* 141 = meetinghallentrance */
			 "Entrance",
			tags141,
			NULL,
			 meetinghall,
			NULL,
			 "At the Entrance of the Meeting Hall\n",
			NULL,
			 99999
		},
		{	/* 142 = levelExit_2 */
			 "Level Exit PLACEHOLDER",
			tags142,
			NULL,
			 meetinghall,
			 secondFloorShelf_3_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 143 = secondFloor_alt */
			 "The second floor",
			tags143,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 144 = secondFloorShelf_alt */
			 "Second Floor book shelves",
			tags144,
			NULL,
			 secondFloor_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 145 = secondFloorShelf_1_alt */
			 "Book Shelf 1",
			tags145,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_1_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 146 = secondFloorShelf_2_alt */
			 "Book Shelf 2",
			tags146,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_2_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 147 = secondFloorShelf_3_alt */
			 "Book Shelf 3",
			tags147,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_3_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 148 = secondFloorShelf_4_alt */
			 "Book Shelf 4",
			tags148,
			NULL,
			 secondFloorShelf_alt,
			 secondFloorShelf_4_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 149 = secondFloorShelf_hall_alt */
			 "Second floor Hall",
			tags149,
			NULL,
			 secondFloorShelf_alt,
			NULL,
			 "GO FORWARD EVERYTHING IS ON FIRE HERE",
			NULL,
			NULL
		},
		{	/* 150 = secondFloorShelf_1_exit_alt */
			 "Exit of the shelf",
			tags150,
			NULL,
			 secondFloorShelf_1_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 151 = secondFloorShelf_2_exit */
			 "Exit of the shelf",
			tags151,
			NULL,
			 secondFloorShelf_2_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 152 = secondFloorShelf_3_exit */
			 "Exit of the shelf",
			tags152,
			NULL,
			 secondFloorShelf_3_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 153 = secondFloorShelf_4_exit */
			 "Exit of the shelf",
			tags153,
			NULL,
			 secondFloorShelf_4_alt,
			 secondFloorShelf_alt,
			NULL,
			NULL,
			NULL
		},
		{	/* 154 = stairs_floor_3_1 */
			 "The third floor stairs",
			tags154,
			NULL,
			 secondFloorShelf_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 155 = stairs_floor_3_1 */
			 "The third floor stairs",
			tags155,
			NULL,
			 secondFloorShelf_1_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 156 = stairs_floor_3_2 */
			 "The third floor stairs",
			tags156,
			NULL,
			 secondFloorShelf_2_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 157 = stairs_floor_3_3 */
			 "The third floor stairs",
			tags157,
			NULL,
			 secondFloorShelf_3_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 158 = stairs_floor_3_4 */
			 "The third floor stairs",
			tags158,
			NULL,
			 secondFloorShelf_4_alt,
			 thirdFloor,
			 "What these stairs were never here my library only had 1 floor",
			NULL,
			NULL
		},
		{	/* 159 = thirdFloor */
			 "the third floor reading room",
			tags159,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 160 = stairsSecondFloorDown */
			 "Stairs to the second floor",
			tags160,
			NULL,
			 thirdFloor,
			 secondFloorShelf_alt,
			 "You went down the stairs to the shelf",
			NULL,
			NULL
		},
		{	/* 161 = table_1 */
			 "Reading room table 1",
			tags161,
			NULL,
			 thirdFloor,
			NULL,
			 "You are facing table 1",
			NULL,
			NULL
		},
		{	/* 162 = table_2 */
			 "Reading room table 2",
			tags162,
			NULL,
			 thirdFloor,
			NULL,
			 "You are facing table 2",
			NULL,
			NULL
		},
		{	/* 163 = table_3 */
			 "Reading room table 3",
			tags163,
			NULL,
			 thirdFloor,
			NULL,
			 "You are facing table 3",
			NULL,
			NULL
		},
		{	/* 164 = level_3 */
			 "A book on table 3",
			tags164,
			NULL,
			 thirdFloor,
			 porcelianPalace,
			 "What place is this why are there these paintings on the wall? What is it this time",
			NULL,
			NULL
		},
		{	/* 165 = porcelianPalace */
			 "a mysterious alley",
			tags165,
			NULL,
			NULL,
			NULL,
			 "You cant get much closer than this",
			 "This looks like a mueseum of some sort there are paintings on the wall. Fossils all around and many things you don't recoganize",
			NULL
		},
		{	/* 166 = distantVoice */
			 "you hear pepole talking from far east",
			tags166,
			NULL,
			 "porcelianPalace",
			 "porcelianPalaceHall",
			 "That little child looks wierd I wonder what it is",
			 "There seems to be 2 pepole talking ",
			NULL
		},
	//hhd
	// misc
		{	/* 167 = porcelianPalaceHall */
			 "A large dusty hall",
			tags167,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
	//players	 
		{	/* 168 = guard */
			 "a burly guard",
			tags168,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 169 = player */
			 "yourself",
			tags169,
			NULL,
			 bedroom,
			NULL,
			NULL,
			NULL,
			NULL
		}
};
