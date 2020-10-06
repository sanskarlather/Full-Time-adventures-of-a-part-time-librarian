#include <stdbool.h>
#include <stdio.h>
#include "object.h"
static const char* tags0[] = { "lakshagriha"
, NULL };
static const char* tags1[] = { "west","east","south"
, NULL };
static const char* tags2[] = { "entrance"
, NULL };
static const char* tags3[] = { "lakshagrihacastle"
, NULL };
static const char* tags4[] = { "north","lakshagrihacastle"
, NULL };
static const char* tags5[] = { "east","west"
, NULL };
static const char* tags6[] = { "south","exit"
, NULL };
static const char* tags7[] = { "road"
, NULL };
static const char* tags8[] = { "road"
, NULL };
static const char* tags9[] = { "west","east","north"
, NULL };
static const char* tags10[] = { "exit"
, NULL };
static const char* tags11[] = { "village"
, NULL };
static const char* tags12[] = { "entrance","south"
, NULL };
static const char* tags13[] = { "west","east"
, NULL };
static const char* tags14[] = { "exit"
, NULL };
static const char* tags15[] = { "road"
, NULL };
static const char* tags16[] = { "north"
, NULL };
static const char* tags17[] = { "west","east"
, NULL };
static const char* tags18[] = { "exit"
, NULL };
static const char* tags19[] = { "hastinapurcastle"
, NULL };
static const char* tags20[] = { "east"
, NULL };
static const char* tags21[] = { "north"
, NULL };
static const char* tags22[] = { "meetinghall"
, NULL };
static const char* tags23[] = { "south"
, NULL };
static const char* tags24[] = { "guard", "burly guard"
, NULL };
static const char* tags25[] = { "yourself"
, NULL };

OBJECT objs[] = {
	{	/* 0 = lakshagriha
 */
		 "place with the burning castle"
,
		tags0,
		NULL,
		NULL,
		NULL,
		 "You are in the city of lakshagriha\n"
,
		NULL,
		 99999
	},
	{	/* 1 = jungle
 */
		 "jungle"
,
		tags1,
		NULL,
		 lakshagriha
,
		NULL,
		 "Their is nothing but the jungle all over here\n"
,
		NULL,
		 99999
	},
	{	/* 2 = lakshagrihaEntrance
 */
		 "Entrance of the lakshagriha area"
,
		tags2,
		NULL,
		 lakshagriha
,
		 lakshagriha
,
		 "You entred the lakshagriha area\n"
,
		NULL,
		 99999
	},
	{	/* 3 = lakshagrihacastle
 */
		 "lakshagrihacastle\n"
,
		tags3,
		NULL,
		NULL,
		NULL,
		 "You entred the lakshagrihacastle\n"
,
		NULL,
		 99999
	},
	{	/* 4 = lakshagrihacastleEntrance
 */
		 "Entrance of the lakshagrihacastle"
,
		tags4,
		NULL,
		 lakshagriha
,
		 lakshagrihacastle
,
		 "You entred the lakshagriha Castle\n"
,
		NULL,
		 99999
	},
	{	/* 5 = lakshagrihacastleWalls
 */
		 "lakshagrihacastle walls"
,
		tags5,
		NULL,
		 lakshagrihacastle
,
		NULL,
		 "There is nothing but walls there\n"
,
		NULL,
		 99999
	},
	{	/* 6 = lakshagrihacastleExit
 */
		 "Exit of the lakshagrihacastle"
,
		tags6,
		NULL,
		 lakshagrihacastle
,
		 road
,
		 "You are on the road towards village\n"
,
		NULL,
		 99999
	},
	{	/* 7 = road
 */
		 "the road leads to the village"
,
		tags7,
		NULL,
		NULL,
		NULL,
		 "You are on the road that leads you to the village"
,
		NULL,
		NULL
	},
	{	/* 8 = roadentrance
 */
		 "The Road leads to the Village"
,
		tags8,
		NULL,
		 lakshagriha
,
		 road
,
		 "You are on the road that leads to the Village\n"
,
		NULL,
		 99999
	},
	{	/* 9 = roadWalls
 */
		 "only jungle"
,
		tags9,
		NULL,
		 road
,
		NULL,
		 "There is nothing but jungle all around and a narrow road that leads to small village\n"
,
		NULL,
		 99999
	},
	{	/* 10 = roadexit
 */
		 "The exit "
,
		tags10,
		NULL,
		 road
,
		 lakshagriha
,
		 "You are on the road that leads to the Village\n"
,
		NULL,
		 99999
	},
	{	/* 11 = village
 */
		 "an old small village"
,
		tags11,
		NULL,
		NULL,
		NULL,
		 "You are here so that you can understand the language speak by the people of the Village and hide from the Fireman so that he couldn't kill you......\n You are in the front of the village\n"
,
		NULL,
		 99999
	},
	{	/* 12 = villageEntrance
 */
		 "entrance to the village"
,
		tags12,
		NULL,
		 road
,
		 village
,
		 "You entred the village\n"
,
		NULL,
		 99999
	},
	{	/* 13 = villageWalls
 */
		 "surrounded by mountains"
,
		tags13,
		NULL,
		 village
,
		NULL,
		 "Whole village is surronded by the mountains and the jungle\n"
,
		NULL,
		 99999
	},
	{	/* 14 = villagexit
 */
		 "exit to the village"
,
		tags14,
		NULL,
		 village
,
		 road1
,
		 "You have exited the village and move towards the Hatinapur castle where pandavas appeared after long time and demand for their own Kingdom\n"
,
		NULL,
		 99999
	},
	{	/* 15 = road1
 */
		 "the road leads to the Hastinapur Castle\n"
,
		tags15,
		NULL,
		NULL,
		NULL,
		 "You are on the road that leads you to the village"
,
		NULL,
		NULL
	},
	{	/* 16 = road1entrance
 */
		 "The Road leads to the Hatinapur Castle\n"
,
		tags16,
		NULL,
		 road1
,
		 hastinapurcastle
,
		 "You are on the road that leads to the Hastinapur Castle\n"
,
		NULL,
		 99999
	},
	{	/* 17 = road1Walls
 */
		 "only jungle"
,
		tags17,
		NULL,
		 road
,
		NULL,
		 "There is nothing but jungle all around and a narrow road that leads to Hastinapur Castle\n "
,
		NULL,
		 99999
	},
	{	/* 18 = road1exit
 */
		 "back to village"
,
		tags18,
		NULL,
		 road1
,
		 village
,
		 "back to village\n"
,
		NULL,
		 99999
	},
	{	/* 19 = hastinapurcastle
 */
		 "Welcome to the castle"
,
		tags19,
		NULL,
		NULL,
		NULL,
		 "You are at the glorious castle"
,
		NULL,
		 99999
	},
	{	/* 20 = hastinapurcastlgate
 */
		 "You were at the gate of the Castle\n"
,
		tags20,
		NULL,
		 hastinapurcastle
,
		NULL,
		 "You were at the Gate for Entering the Castle\n"
,
		NULL,
		 99999
	},
	{	/* 21 = hastinapurcastleentrance
 */
		 "Entered to the Castle\n"
,
		tags21,
		NULL,
		 hastinapurcastle
,
		 meetinghall
,
		 "Entered to the Castle Hastinapur Castle and Headed towards the Meeting hall\n "
,
		NULL,
		 99999
	},
	{	/* 22 = meetinghall
 */
		 "Meeting Hall\n"
,
		tags22,
		NULL,
		NULL,
		NULL,
		 "Place where the game of Politics begins\n"
,
		NULL,
		 99999
	},
	{	/* 23 = meetinghallentrance
 */
		 "Entrance"
,
		tags23,
		NULL,
		 meetinghall
,
		NULL,
		 "At the Entrance of the Meeting Hall\n"
,
		NULL,
		 99999
	},
	{	/* 24 = guard
 */
		 "a burly guard"
,
		tags24,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 25 = player
 */
		 "yourself"
,
		tags25,
		NULL,
		 lakshagriha,
		NULL,
		NULL,
		NULL,
		NULL
	}
};
