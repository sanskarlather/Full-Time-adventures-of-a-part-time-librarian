#include <stdbool.h>

typedef struct object {
	int           level;
		bool         (*condition)(void);
	const char* description;
	const char* usage;
	const char** tags;
	struct object* location;
	struct object* destination;
	struct object* prospect;
	const char* details;
	const char* contents;
	const char* textGo;
	const char* gossip;
	const char* gossip_1;
	const char* gossip_2;
	const char* gossip_3;
	int            weight;
	int            capacity;
	int            health;
	const char* (*open)(void);
	const char* (*close)(void);
	const char* (*lock)(void);
	const char* (*unlock)(void);
} OBJECT;

extern OBJECT objs[];

#define firetruck (objs + 0)
#define firetruckinterior (objs + 1)
#define firetruckHandle (objs + 2)
#define street (objs + 3)
#define street2 (objs + 4)
#define houseEntrance (objs + 5)
#define Montagslivingroom (objs + 6)
#define livingroomWalls (objs + 7)
#define livingroomExit (objs + 8)
#define Montagsbedroom (objs + 9)
#define bedroomWalls (objs + 10)
#define bed (objs + 11)
#define telephone (objs + 12)
#define bedroomexit (objs + 13)
#define firetruckPosterior (objs + 14)
#define Faber	(objs + 15)
#define Granger	(objs + 16)
#define CaptainBeatty (objs + 17)
#define Hound (objs + 18)
#define fireman1 (objs + 19)
#define Flamethrower (objs + 20)
#define player (objs + 21)

#define endOfObjs	(objs + 22)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)())

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))
