#pragma once
typedef struct object {
    const char* description;
    const char* tag;
    const char* usage;
    struct object* location;
    struct object* destination;
} OBJECT;
extern OBJECT objs[];
#define bathroom     (objs + 0)
#define bedroom       (objs + 1)
#define library     (objs + 2)
#define toothbrush     (objs + 3)
#define toilet       (objs + 4)
#define shower      (objs + 5)
#define keys     (objs + 6)
#define backpack     (objs + 7)
#define player     (objs + 8)
#define roadLibrary (objs + 9)
#define exitLibrary (objs + 10)
#define endOfObjs  (objs + 11)