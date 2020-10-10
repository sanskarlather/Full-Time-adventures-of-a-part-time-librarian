

typedef struct object {
   const char    *description;
   const char   **tags;
   const char    *usage;
   struct object *location;
   struct object *destination;
   const char 	 *textPass;
   const char    *details;
   int weight;

   
} OBJECT;

extern OBJECT objs[];

#define spawnlocation (objs + 0)
#define intobasement (objs + 1)
#define card (objs + 2)
#define basement (objs + 3)
#define exit_apartment (objs + 4)
#define upstairs (objs + 5)
#define upstairs_entrance (objs + 6)
#define upstairs_exit (objs + 7)
#define livinghall (objs + 8)
#define livinghall_entrance (objs + 9)
#define livinghall_exit (objs + 10)
#define bedroom (objs + 11)
#define bedroom_entrance (objs + 12)
#define bedroom_exit (objs + 13)
#define guard (objs + 14)
#define player (objs + 15)

#define endOfObjs	(objs + 16)
