typedef struct ID *id;
typedef struct IDwithstat *ids;

id newid();
ids newids();

int valid(ids target);
void destroyid (id target);
void destroyids(ids target);
void printid (id target);
void printids(ids target);

struct ID{
	char number[10], *location;
};

struct IDwithstat{
	id newid;
	int valid;
};


