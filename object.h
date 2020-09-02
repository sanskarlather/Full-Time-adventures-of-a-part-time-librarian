

typedef struct object {
    const char* description;
    const char** tags;
    const char* usage;
    struct object* location;
    struct object* destination;
    const char* textPass;
    int weight;


} OBJECT;

extern OBJECT objs[];

#define bathroom	(objs + 0)
#define bathroomWalls	(objs + 1)
#define bathroomEntrance	(objs + 2)
#define bedroom	(objs + 3)
#define bedroomWalls	(objs + 4)
#define bedroomEntrance	(objs + 5)
#define bedroomExit	(objs + 6)
#define road	(objs + 7)
#define roadWalls	(objs + 8)
#define libraryEntrance	(objs + 9)
#define library	(objs + 10)
#define toothbrush	(objs + 11)
#define toilet	(objs + 12)
#define shower	(objs + 13)
#define backpack	(objs + 14)
#define keys	(objs + 15)
#define guard	(objs + 16)
#define player	(objs + 17)

#define endOfObjs	(objs + 18)
