#include <stdio.h>
#include "object.h"
void useObject(OBJECT *obj)
{
	if (obj == NULL)
	{

	}
	printf(obj->usage);
}