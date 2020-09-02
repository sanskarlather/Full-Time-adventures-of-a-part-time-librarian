

typedef struct object {
    const char* description;
    const char** tags;
    const char* usage;
    struct object* location;
    struct object* destination;
    int weight;


} OBJECT;

extern OBJECT objs[];

#define bathroom	(objs + 0)
#define bedroom	(objs + 1)
#define library	(objs + 2)
#define toothbrush	(objs + 3)
#define toilet	(objs + 4)
#define shower	(objs + 5)
#define backpack	(objs + 6)
#define keys	(objs + 7)
#define guard	(objs + 8)
#define player	(objs + 9)

#define endOfObjs	(objs + 10)
