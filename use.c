#include <stdio.h>
#include "object.h"
void useObject(OBJECT* obj)
{
	if (obj == NULL)
	{

	}
	else if (obj->usage == NULL) {
		printf("No way, You can't use that.\n");
	}
	else
	{
		printf(obj->usage);

	}
}