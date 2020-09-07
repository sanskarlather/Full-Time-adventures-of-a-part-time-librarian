

typedef struct object {
	const char* description;
	const char** tags;
	const char* usage;
	struct object* location;
	struct object* destination;
	const char* textPass;
	const char* details;
	int weight;


} OBJECT;

extern OBJECT objs[];

#define lakshagriha (objs + 0)
#define forest (objs + 1)
#define lakshagrihacastle (objs + 2)
#define castleWalls (objs + 3)
#define lakshagrihacastleExit (objs + 4)
#define village (objs + 5)
#define villageWalls (objs + 6)
#define hindi (objs + 7)
//players	 
#define guard (objs + 8)
#define player (objs + 9)

#define endOfObjs	(objs + 10)
