#include <stdbool.h>
#include <stdio.h>
#include "object.h"
static const char* tags0[] = { "lakshagriha"
, NULL };
static const char* tags1[] = { "east", "west"
, NULL };
static const char* tags2[] = { "lakshagrihacastle","north"
, NULL };
static const char* tags3[] = { "east","west"
, NULL };
static const char* tags4[] = { "south","lakshagriha"
, NULL };
static const char* tags5[] = { "village","south"
, NULL };
static const char* tags6[] = { "west","north","south"
, NULL };
static const char* tags7[] = { "hindi", "language"
, NULL };
//players	 
static const char* tags8[] = { "guard", "burly guard"
, NULL };
static const char* tags9[] = { "yourself"
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
	{	/* 1 = forest
 */
		 "a forest"
,
		tags1,
		NULL,
		 lakshagriha
,
		NULL,
		 "Their is nothing but jungle all over here\n"
,
		NULL,
		 99999
	},
	{	/* 2 = lakshagrihacastle
 */
		 "Lakshagriha castle"
,
		tags2,
		NULL,
		 lakshagriha
,
		 lakshagrihacastle
,
		 "You entred the castle of lakshagriha\n"
,
		NULL,
		 99999
	},
	{	/* 3 = castleWalls
 */
		 "castle walls"
,
		tags3,
		NULL,
		 lakshagrihacastle
,
		NULL,
		 "There is nothing but walls there\n"
,
		NULL,
		 99999
	},
	{	/* 4 = lakshagrihacastleExit
 */
		 "back to place with burning castle"
,
		tags4,
		NULL,
		 lakshagrihacastle
,
		 lakshagriha
,
		 "You are back on the city of lakshagriha\n"
,
		NULL,
		 99999
	},
	{	/* 5 = village
 */
		 "the way to the village"
,
		tags5,
		NULL,
		 lakshagriha
,
		 village
,
		 "You are on the village"
,
		NULL,
		NULL
	},
	{	/* 6 = villageWalls
 */
		 "village perimeter"
,
		tags6,
		NULL,
		 village
,
		NULL,
		 "There is nothing but villageWalls\n"
,
		NULL,
		 99999
	},
	{	/* 7 = hindi
 */
		 "language used by people at the time"
,
		tags7,
		 "You have learned new language - Hindi"
,
		 village
,
		NULL,
		NULL,
		NULL,
		NULL
	},
	//players	 
		{	/* 8 = guard
	 */
			 "a burly guard"
	,
			tags8,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL,
			NULL
		},
		{	/* 9 = player
	 */
			 "yourself"
	,
			tags9,
			NULL,
			 lakshagriha
	,
			NULL,
			NULL,
			NULL,
			NULL
		}
};
