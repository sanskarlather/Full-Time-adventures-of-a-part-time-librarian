

typedef struct object {
	const char* description;
	const char** tags;
	const char* usage;
	struct object* location;
	struct object* destination;
	const char* textPass;
	struct object* details;
	int weight;


} OBJECT;

extern OBJECT objs[];

#define lakshagriha (objs + 0)
#define jungle (objs + 1)
#define lakshagrihaEntrance (objs + 2)
#define lakshagrihacastle (objs + 3)
#define lakshagrihacastleEntrance (objs + 4)
#define lakshagrihacastleWalls (objs + 5)
#define lakshagrihacastleExit (objs + 6)
#define road (objs + 7)
#define roadentrance (objs + 8)
#define roadWalls (objs + 9)
#define roadexit (objs + 10)
#define village (objs + 11)
#define villageEntrance (objs + 12)
#define villageWalls (objs + 13)
#define villagexit (objs + 14)
#define road1 (objs + 15)
#define road1entrance (objs + 16)
#define road1Walls (objs + 17)
#define road1exit (objs + 18)
#define hastinapurcastle (objs + 19)
#define hastinapurcastlgate (objs + 20)
#define hastinapurcastleentrance (objs + 21)
#define meetinghall (objs + 22)
#define meetinghallentrance (objs + 23)
#define guard (objs + 24)
#define player (objs + 25)

#define endOfObjs	(objs + 26)
