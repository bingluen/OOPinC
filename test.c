#include "id.h"

int main()
{
	id new = newid();
	printid(new);
	destroyid(new);
	ids newid = newids();
	newid->valid = valid(newid);
	printids(newid);
	destroyids(newid);
	return 0;
}
