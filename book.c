#include <stdio.h>
#include <string.h>
#include "object.h"
#include "misc.h"
#include "noun.h"
#include "location.h"

void executeBook(const char* noun)
{

    OBJECT* obj = getVisible("what do you want to open", noun);
    switch (getDistance(player, obj))
    {
    case distOverthere:
        printf("OK.\n");
        player->location = obj;
        executeLook("around");
        break;
    case distNotHere:
        printf("You don't see any %s here.\n", noun);
        break;
    case distUnknownObject:
        // already handled by getVisible
        break;
    default:
        if (obj->destination != NULL)
        {
            printf("OK.\n");
            player->location = obj->destination;
            executeLook("around");
        }
        else
        {
            printf("You can't get much closer than this.\n");
        }
    }
}