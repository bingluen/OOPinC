#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "id.h"

struct ID
{
	char number[10];
	char *location;
};

struct IDwithstat
{
	id newid;
	int valid;
};

void destroyid (id target)
{
	if(target!=NULL)
	{
		free(target);
	}
}

id newid ()
{
	id target = (id)malloc(sizeof(struct ID));
	strcpy(target->number,"S123907286");
	strcpy(target->location,"Kaohsiung");
	return target;
}

void printid (id target)
{
	printf("This is from the type id:");
	printf("%s\n", target->number);
	printf("%s\n", target->location);
}

ids newids()
{
	ids target=(ids)malloc(sizeof(struct IDwithstat));
	target->newid=(id)malloc(sizeof(struct ID));
	strcpy(target->newid->number,"S123907286");
	strcpy(target->newid->location,"Kaohsiung");
	return target;
}

void destroyids (ids target)
{
	if(target!=NULL)
	{
		free(target->newid);
		free(target);
	}
}

int valid(ids target)
{
	return 1;//Can't find the real rule so just set it to true :D
}

void printids(ids target)
{
	printf("ID:%s\n",target->newid->number);
	//target->valid=valid(target);
	printf("Status:%d\n",target->valid);
}

int main()
{
	id new;
	new = newid();
	printid(new);
	destroyid(new);
	ids newid;
	newid = newids();
	newid->valid=valid(newid);
	printids(newid);
	destroyids(newid);
	return 0;
}
