#include <stdio.h>
#include "object.h"
#include "misc.h"
#include "noun.h"
#include "move.h"

void executeGet(const char* noun)
{
	OBJECT* obj = getVisible("what you want to get", noun);
	switch (getDistance(player, obj))
	{
	case distSelf:
		printf("You should not be doing that to %s.\n", obj->description);
		break;
	case distHeld:
		printf("You already have %s.\n", obj->description);
		break;
	case distOverthere:
		printf("Too far away, move closer please.\n");
		break;
	case distUnknownObject:
		// already handled by getVisible
		break;
	default:
		if (obj->location == guard)
		{
			printf("You should ask %s nicely.\n", obj->location->description);
		}
		else
		{
			moveObject(obj, player);
		}
	}
}
void executeDrop(const char* noun)
{
	moveObject(getPossession(player, "drop", noun), player->location);
}
void executeAsk(const char* noun)
{
	moveObject(getPossession(actorHere(), "ask", noun), player);
}
void executeGive(const char* noun)
{
	moveObject(getPossession(player, "give", noun), actorHere());
}
void executeInventory(void)
{
	if (listObjectsAtLocation(player) == 0)
	{
		printf("You are empty-handed.\n");
	}
}
void executeHelp()
{
	printf("1. Look Around- To checkout what is in your room\n");
	printf("2.Movement- To move around use command [go]followed by either a dierection or a location ");
	printf("3.To Open A book you encounter- [open] followed by the name of the book");
}
