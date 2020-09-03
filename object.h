

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
#define shelf_1_exit	(objs + 19)
#define shelf_2_exit	(objs + 20)
#define shelf_3_exit	(objs + 21)
#define shelf_4_exit	(objs + 22)
#define shelf_1_toilet	(objs + 23)
#define shelf_2_toilet	(objs + 24)
#define shelf_3_toilet	(objs + 25)
#define shelf_4_toilet	(objs + 26)
#define libraryToilet	(objs + 27)
#define sink	(objs + 28)
#define urinal	(objs + 29)
#define supplyCloset	(objs + 30)
#define urinalCabin_1	(objs + 31)
#define urinalCabin_2	(objs + 32)
#define urinalCabin_3	(objs + 33)
#define urinalCabin_4	(objs + 34)
#define mysteryObject	(objs + 35)
#define portal	(objs + 36)
#define alt_toilet	(objs + 37)
#define toothbrush	(objs + 38)
#define toilet	(objs + 39)
#define shower	(objs + 40)
#define backpack	(objs + 41)
#define keys	(objs + 42)
#define guard	(objs + 43)
#define player	(objs + 44)

#define endOfObjs	(objs + 45)
