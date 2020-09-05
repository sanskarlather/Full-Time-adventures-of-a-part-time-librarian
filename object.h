

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
//bathroom
//bathroom
#define bathroom	(objs + 0)
#define bathroomWallToilet	(objs + 1)
#define bedroomEntrance	(objs + 2)
#define toilet	(objs + 3)
#define shower	(objs + 4)
//bedroom
#define toothbrush	(objs + 5)
#define bedroom	(objs + 6)
#define bathroomEntrance	(objs + 7)
#define bedroomWalls	(objs + 8)
#define bedroomExit	(objs + 9)
#define backpack	(objs + 10)
//road
#define keys	(objs + 11)
#define road	(objs + 12)
#define roadWalls	(objs + 13)
//library
#define libraryEntrance	(objs + 14)
#define library	(objs + 15)
#define libraryExit	(objs + 16)
#define libraryReception	(objs + 17)
//libraryShelf
#define libraryShelfEntrance	(objs + 18)
#define libraryShelf	(objs + 19)
#define shelf_1	(objs + 20)
#define shelf_2	(objs + 21)
#define shelf_3	(objs + 22)
#define shelf_4	(objs + 23)
#define shelf_1_exit	(objs + 24)
#define shelf_2_exit	(objs + 25)
#define shelf_3_exit	(objs + 26)
#define shelf_4_exit	(objs + 27)
#define shelf_1_toilet	(objs + 28)
#define shelf_2_toilet	(objs + 29)
#define shelf_3_toilet	(objs + 30)
#define shelf_4_toilet	(objs + 31)
//libraryToilet
#define shelf_toilet	(objs + 32)
#define libraryToilet	(objs + 33)
#define sink	(objs + 34)
#define urinal	(objs + 35)
#define supplyCloset	(objs + 36)
#define urinalCabin_1	(objs + 37)
#define urinalCabin_2	(objs + 38)
#define urinalCabin_3	(objs + 39)
#define urinalCabin_4	(objs + 40)
#define libraryToiletExit	(objs + 41)
#define mysteryObject	(objs + 42)
#define portal	(objs + 43)
//alt world
//
#define alt_toilet	(objs + 44)
#define alt_libraryToilet	(objs + 45)
#define alt_sink	(objs + 46)
#define alt_urinal	(objs + 47)
#define alt_supplyCloset	(objs + 48)
#define alt_urinalCabin_1	(objs + 49)
#define alt_urinalCabin_2	(objs + 50)
#define alt_urinalCabin_3	(objs + 51)
#define alt_urinalCabin_4	(objs + 52)
#define alt_ToiletExit	(objs + 53)
#define alt_libraryShelf	(objs + 54)
#define alt_shelf_1	(objs + 55)
#define alt_shelf_2	(objs + 56)
#define alt_shelf_3	(objs + 57)
#define alt_shelf_4	(objs + 58)
#define alt_shelf_1_exit	(objs + 59)
#define alt_shelf_2_exit	(objs + 60)
#define alt_shelf_3_exit	(objs + 61)
#define alt_shelf_4_exit	(objs + 62)
#define alt_shelf_1_toilet	(objs + 63)
#define alt_shelf_2_toilet	(objs + 64)
#define alt_shelf_3_toilet	(objs + 65)
#define alt_shelf_4_toilet	(objs + 66)
#define alt_shelf_toilet	(objs + 67)
#define level_1	(objs + 68)
#define levelSherlock	(objs + 69)
#define levelExit	(objs + 70)
#define alt_toilet_level_exit	(objs + 71)
#define alt_sink_level_exit	(objs + 72)
#define alt_urinal_level_exit	(objs + 73)
#define alt_supplyCloset_level_exit	(objs + 74)
#define alt_urinalCabin_1_level_exit	(objs + 75)
#define alt_urinalCabin_2_level_exit	(objs + 76)
#define alt_urinalCabin_3_level_exit	(objs + 77)
#define alt_urinalCabin_4_level_exit	(objs + 78)
// misc
#define alt_ToiletExit_locked	(objs + 79)
//players	 
#define guard	(objs + 80)
#define player	(objs + 81)

#define endOfObjs	(objs + 82)
