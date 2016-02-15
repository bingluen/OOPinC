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
		free(target);
	}
}

int valid(ids target)
{
	int valid;
	int total=0;
	int check;
	if(target->newid->number[0]=='S')
	{
		total=2+6*9;
	}
	for(int i = 1; i<9;i++)
	{
		total=target->newid->number[i]*(9-i);
	}
	check=total%10;
	if(check==0)
	{
		if(target->newid->number[9]==check)
		{
			return 1;
		}
	}
	else
	{
		check=10-check;
		if(check==target->newid->number[0])
		{
			return 1;
		}
	}
	return 0;
}

void printids(ids target)
{
	printf("%s\n",target->newid->number);
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
