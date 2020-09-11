#include <stdio.h>
#include "object.h"
#include "misc.h"
#include "noun.h"
#include "use.h"
void executeUse(const char* noun)
{
	OBJECT* obj = getVisible("what you want to get", noun);
	if (obj == NULL)
	{
	}
	if (obj == player)
	{
		printf("You are having a good time");
	}
	else
	{
		useObject(obj);
	}
}