typedef struct ID * id;
typedef struct IDwithstat * ids;
void destroyid (id target);
id newid();
void printid (id target);
ids newids();
int valid(ids target);
void destroyids(ids target);
void printids(ids target);
