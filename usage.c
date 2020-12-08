
#include <stdio.h>
#include "object.h"
#include "misc.h"
#include "match.h"
#include "noun.h"

bool executeUse(void)
{
    OBJECT* obj = getVisible("what you want to use", params[0]);
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
        if (obj->location != NULL && obj->location->health > 0)
        {
            printf("You should ask %s nicely.\n", obj->location->description);
        }
        else
        {
            printf(" %s\n", obj->usage);
        }
    }
    return true;
}

bool executeHelp(void)
{
    printf(" 1. Move to a diffrent location by using the command go\n 2. Use items by entring usage followed by the item\n 3.Enter quit to exit the game");
   
    return true;
}