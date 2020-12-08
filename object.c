#include <stdio.h>
#include "object.h"
#include "toggle.h"
static const char* tags0[] = { "firetruck"
, NULL };
static const char* tags1[] = { "firetruckinterior"
, NULL };
static const char* tags2[] = { "handle","left","east"
, NULL };
static const char* tags3[] = { "west","north","south"
, NULL };
static const char* tags4[] = { "west","north","south"
, NULL };
static const char* tags5[] = { "house","east"
, NULL };
static const char* tags6[] = { "east","Living Room"
, NULL };
static const char* tags7[] = { "north","south"
, NULL };
static const char* tags8[] = { "west","exit","street"
, NULL };
static const char* tags9[] = { "bedroom","east"
, NULL };
static const char* tags10[] = { "south","north"
, NULL };
static const char* tags11[] = { "bed","east"
, NULL };
static const char* tags12[] = { "telephone"
, NULL };
static const char* tags13[] = { "bedroom exit","west"
, NULL };
static const char* tags14[] = { "firetruck"
, NULL };
static const char* tags15[] = { "Captain Beatty","Captain"
, NULL };
static const char* tags16[] = { "Captain Beatty","Captain"
, NULL };
static const char* tags17[] = { "Captain Beatty","Captain"
, NULL };
static const char* tags18[] = { "Hound"
, NULL };
static const char* tags19[] = { " tall fireman","fireman"
, NULL };
static const char* tags20[] = { "west","flamethrower"
, NULL };
static const char* tags21[] = { "yourself"
, NULL };

static bool alwaysTrue(void) { return true; }

OBJECT objs[] = {
	{	/* 0 = firetruck
 */
		0,
		alwaysTrue,
		 "The Firetruck."
,
		"That is something that can not be used\n",
		tags0,
		 street
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		"You can't get much closer than this.\n",
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 1 = firetruckinterior
 */
		0,
		alwaysTrue,
		 "Gyu Montag's house in flames"
,
		"That is something that can not be used\n",
		tags1,
		 firetruck
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "You look around and see that your friend Montag's house in flames\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 2 = firetruckHandle
 */
		0,
		alwaysTrue,
		 "Firetruck door handle"
,
		 "You have opened the firetruck door"
,
		tags2,
		 firetruck
,
		 street
,
		 street
,
		"You see nothing special.\n",
		"You see",
		 "You are in the street and feel the warmth of the burning house infont.\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 3 = street
 */
		0,
		alwaysTrue,
		 "street"
,
		"That is something that can not be used\n",
		tags3,
		NULL,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "Their is nothing but blocks of apartment running along the street\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 4 = street2
 */
		0,
		alwaysTrue,
		 "You have called Granger and Faber a while ago, they may have approached till now while you were struggling your way out of the house.\n You should find yourself a wapon in order to defend yourself from the Hound"
,
		"That is something that can not be used\n",
		tags4,
		NULL,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "Their is nothing but blocks of apartment running along the street\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 5 = houseEntrance
 */
		0,
		alwaysTrue,
		 "Entrance of Montag's house"
,
		"That is something that can not be used\n",
		tags5,
		 street
,
		 Montagslivingroom
,
		 Montagslivingroom
,
		"You see nothing special.\n",
		"You see",
		 "You are in front of Montag's house. You should probably find the boooks you have given to Guy Montag in order to go back to your World.\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 6 = Montagslivingroom
 */
		0,
		alwaysTrue,
		 "Montag's Living Room is in flames"
,
		"That is something that can not be used\n",
		tags6,
		 Montagslivingroom
,
		 Montagsbedroom
,
		 Montagsbedroom
,
		"You see nothing special.\n",
		"You see",
		 "You entred Montag's Living Room\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 7 = livingroomWalls
 */
		0,
		alwaysTrue,
		 "Livingroom walls all wrapped up in flames"
,
		"That is something that can not be used\n",
		tags7,
		 Montagslivingroom
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "There is nothing but burning walls there\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 8 = livingroomExit
 */
		0,
		alwaysTrue,
		 "Exit of Montag's living room"
,
		"That is something that can not be used\n",
		tags8,
		 Montagslivingroom
,
		 street2
,
		 street2
,
		"You see nothing special.\n",
		"You see",
		 "You are in the streets with Guy Montag\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 9 = Montagsbedroom
 */
		0,
		alwaysTrue,
		 "Montag's bedroom"
,
		"That is something that can not be used\n",
		tags9,
		 Montagsbedroom
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "You are in Montag's bedroom and everything is in fire.\n There is very less probability to get back the books admist the flames,Captain Beatty must have taken the books with him."
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 10 = bedroomWalls
 */
		0,
		alwaysTrue,
		 "bedroom walls all covered in fire"
,
		"That is something that can not be used\n",
		tags10,
		 Montagsbedroom
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "There is nothing but bedroom walls there\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 11 = bed
 */
		0,
		alwaysTrue,
		 "Bed where the flames had reached and a telephone beside it where the flames have not yet reached. \nYou can use the telephone to call Faber and Granger for HELP"
,
		"That is something that can not be used\n",
		tags11,
		 Montagsbedroom
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "You see a burning bed"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 12 = telephone
 */
		0,
		alwaysTrue,
		 "A telephone, yet away from the flames and can be used.If your books are with Captain Beatty use it to call Faber and Granger for support."
,
		 "You used the telephone to call Faber and Granger"
,
		tags12,
		 Montagsbedroom
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "Use the telephone to call faber and granger for Help\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 13 = bedroomexit
 */
		0,
		alwaysTrue,
		 "exit to the living room"
,
		"That is something that can not be used\n",
		tags13,
		 Montagsbedroom
,
		 Montagslivingroom
,
		 Montagslivingroom
,
		"You see nothing special.\n",
		"You see",
		 "you are in the living room\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 14 = firetruckPosterior
 */
		0,
		alwaysTrue,
		 "The Firetruck posterior, with many fire emergency equipments and a firethrower."
,
		"That is something that can not be used\n",
		tags14,
		 street2
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		"You can't get much closer than this.\n",
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 15 = Faber */
		0,
		alwaysTrue,
		 "Faber who has taken hold of 2 firemen."
,
		"That is something that can not be used\n",
		tags15,
		 street2
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "Captain Beatty has ordered the brutal Hound to kill both you and Guy Montag"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 16 = Granger */
		0,
		alwaysTrue,
		 "Granger with his comrades is dealing with the remaining firemen."
,
		"That is something that can not be used\n",
		tags16,
		 street2
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "Captain Beatty has ordered the brutal Hound to kill both you and Guy Montag"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 17 = CaptainBeatty
 */
		0,
		alwaysTrue,
		 "Captain Beatty who is now aware of the situation,has ordered the beast to hunt and kill you and Montag."
,
		"That is something that can not be used\n",
		tags17,
		 street2
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "Captain Beatty has ordered the brutal Hound to kill both you and Guy Montag"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 18 = Hound
 */
		0,
		alwaysTrue,
		 "A Large Mechanical Hound, a monstrous machine which is on its way to kill you and Montag. \n"
,
		"That is something that can not be used\n",
		tags18,
		 street2
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "The Hound has been set by Captain Beatty to kill you and Guy Montag"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		99,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 19 = fireman1
 */
		0,
		alwaysTrue,
		 "a tall and lean fireman grasped by Granger"
,
		"That is something that can not be used\n",
		tags19,
		 street2
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		"You can't get much closer than this.\n",
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		99,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 20 = Flamethrower
 */
		0,
		alwaysTrue,
		 "Flamethrower"
,
		 "You have the flamethrower and can use it to produce flames"
,
		tags20,
		 firetruckPosterior
,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		 "You see The Hound approachig you and Montag.\n You've noticed that your books are inside Captain Beatty waist coat.\n You've use the flame thrower on the hound, burning the beast into ashes.\n"
,
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		 99999
,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 21 = player
 */
		0,
		alwaysTrue,
		 "yourself"
,
		"That is something that can not be used\n",
		tags21,
		 firetruck,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		"You can't get much closer than this.\n",
		"I dont know anything about it.\n",
		"Level 1\n",
		"Level 2\n",
		"I dont know anything about it.\n",
		99,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	}
};
