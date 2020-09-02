#include <stdbool.h>
#include <stdio.h>
#include "object.h"
static const char* tags0[] = { "bathroom","south", NULL };
static const char* tags1[] = { "bedroom","north", NULL };
static const char* tags2[] = { "library", NULL };
static const char* tags3[] = { "toothbrush", "tooth brush", "brush", NULL };
static const char* tags4[] = { "washroom", "toilet", NULL };
static const char* tags5[] = { "shower", "bath", NULL };
static const char* tags6[] = { "backpack", "bag", "backpack", NULL };
static const char* tags7[] = { "keychain", "keys", "key set", NULL };
static const char* tags8[] = { "guard", "burly guard", NULL };
static const char* tags9[] = { "yourself", NULL };

OBJECT objs[] = {
	{	/* 0 = bathroom */
		 "a smelly bathroom",
		tags0,
		NULL,
		 bedroom,
		 bathroom,
		 99999
	},
	{	/* 1 = bedroom */
		 "your bedroom",
		tags1,
		NULL,
		 bathroom,
		 bedroom,
		 99999
	},
	{	/* 2 = library */
		 "an old dusty library",
		tags2,
		NULL,
		 bedroom,
		 library,
		 99999
	},
	{	/* 3 = toothbrush */
		 "a chewed out toothbrush",
		tags3,
		 "You have brushed your teeth",
		 bathroom,
		NULL,
		NULL
	},
	{	/* 4 = toilet */
		 "a toilet with a bidet",
		tags4,
		 "You have used your toilet",
		 bathroom,
		NULL,
		NULL
	},
	{	/* 5 = shower */
		 "a shower",
		tags5,
		 "You have taken a shower",
		 bathroom,
		NULL,
		NULL
	},
	{	/* 6 = backpack */
		 "a worn out backpack",
		tags6,
		 "You have packed your backpack",
		 bedroom,
		NULL,
		NULL
	},
	{	/* 7 = keys */
		 "a set of keys with a sonic screwdriver keychain",
		tags7,
		NULL,
		 bedroom,
		NULL,
		NULL
	},
	{	/* 8 = guard */
		 "a burly guard",
		tags8,
		NULL,
		NULL,
		NULL,
		NULL
	},
	{	/* 9 = player */
		 "yourself",
		tags9,
		NULL,
		 bedroom,
		NULL,
		NULL
	}
};
