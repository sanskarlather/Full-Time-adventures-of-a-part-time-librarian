

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

#define bathroom	(objs + 0)
#define bathroomWalls	(objs + 1)
#define bathroomEntrance	(objs + 2)
#define bedroom	(objs + 3)
#define bedroomWalls	(objs + 4)
#define bedroomEntrance	(objs + 5)
#define bedroomExit	(objs + 6)
#define road	(objs + 7)
#define roadWalls	(objs + 8)
#define library	(objs + 9)
#define libraryEntrance	(objs + 10)
#define libraryExit	(objs + 11)
#define libraryReception	(objs + 12)
#define libraryShelf	(objs + 13)
#define libraryShelfEntrance	(objs + 14)
#define shelf_1	(objs + 15)
#define shelf_2	(objs + 16)
#define shelf_3	(objs + 17)
#define shelf_4	(objs + 18)
#define toothbrush	(objs + 19)
#define toilet	(objs + 20)
#define shower	(objs + 21)
#define backpack	(objs + 22)
#define keys	(objs + 23)
#define guard	(objs + 24)
#define player	(objs + 25)

#define endOfObjs	(objs + 26)
