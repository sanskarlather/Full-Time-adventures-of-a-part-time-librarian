#include <stdbool.h>
#include <stdio.h>
#include "object.h"
static const char *tags0[] = {NULL};
static const char *tags1[] = { "apartment","inside", NULL};
static const char *tags2[] = { "card", NULL};
static const char *tags3[] = { NULL};
static const char *tags4[] = { "outside","exit","back", NULL};
static const char *tags5[] = { NULL};
static const char *tags6[] = { "upstairs","up", NULL};
static const char *tags7[] = { "downstairs","down","back", NULL};
static const char *tags8[] = {NULL};
static const char *tags9[] = { "living hall","hall", NULL};
static const char *tags10[] = { "upstairs","back", NULL};
static const char *tags11[] = { NULL};
static const char *tags12[] = { "bedroom", NULL};
static const char *tags13[] = { "living hall","hall","back", NULL};
static const char *tags14[] = { "guard", "burly guard", NULL};
static const char *tags15[] = { "yourself", NULL};

OBJECT objs[] = {
	{	/* 0 = spawnlocation */
		 "an unknown location",
		tags0,
		NULL,
		NULL,
		NULL,
		 "You are in an unknown location where the surrounding is similar to Victoria England.\nYou see an apartment right in front of you.\nThere is also card on the ground.Perhaps you should 'examine' the card.",
		NULL,
		NULL
	},
	{	/* 1 = intobasement */
		 "An unknown apartment",
		tags1,
		NULL,
		 spawnlocation,
		 basement ,
		 "You are in 221B Baker Street where Sherlock Holmes lives.\nYou are currently in the basement of the Apartment.\nYou see stairs that leads to his Room.",
		NULL,
		NULL
	},
	{	/* 2 = card */
		 "Card lying on the ground" ,
		tags2,
		NULL,
		 spawnlocation ,
		NULL,
		NULL,
		 "The card reads 'Save and you shall leave'.",
		NULL
	},
	{	/* 3 = basement */
		 "221 B Baker Street Aparatment Basement",
		tags3,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 4 = exit_apartment */
		 "The exit",
		tags4,
		NULL,
		 basement,
		NULL,
		 "The door is locked.You can't go outside.Moreover, nothing is visible outside.\nLike a void.",
		NULL,
		NULL
	},
	{	/* 5 = upstairs */
		 "stairs that lead to Sherlocks' Room",
		tags5,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 6 = upstairs_entrance */
		 "Stairs leading to Sherlocks' Room",
		tags6,
		NULL,
		 basement,
		 upstairs,
		NULL,
		NULL,
		NULL
	},
	{	/* 7 = upstairs_exit */
		 "Stairs leading to the basement",
		tags7,
		NULL,
		 upstairs,
		 basement,
		NULL,
		NULL,
		NULL
	},
	{	/* 8 = livinghall */
		 "The Living Room",
		tags8,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 9 = livinghall_entrance */
		 "The living room",
		tags9,
		NULL,
		 upstairs ,
		 livinghall,
		NULL,
		NULL,
		NULL
	},
	{	/* 10 = livinghall_exit */
		 "The Stairs",
		tags10,
		NULL,
		 livinghall ,
		 upstairs ,
		NULL,
		NULL,
		NULL
	},
	{	/* 11 = bedroom */
		 "The Bedroom",
		tags11,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 12 = bedroom_entrance */
		 "The bedroom",
		tags12,
		NULL,
		 livinghall ,
		 bedroom,
		NULL,
		NULL,
		NULL
	},
	{	/* 13 = bedroom_exit */
		 "The Living Room",
		tags13,
		NULL,
		 bedroom ,
		 livinghall ,
		NULL,
		NULL,
		NULL
	},
	{	/* 14 = guard */
		 "a burly guard",
		tags14,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 15 = player */
		 "yourself",
		tags15,
		NULL,
		 spawnlocation,
		NULL,
		NULL,
		NULL,
		NULL
	}
};
