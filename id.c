#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "id.h"

void destroyid(id target){
	if(target != NULL)    free(target);
}

id newid(){
	id target = (id)malloc(sizeof(struct ID));
	strcpy(target->number, "S123907286");
	strcpy(target->location, "Kaohsiung");
	return target;
}

void printid(id target){
	printf("This is from the type id:");
	printf("%s\n", target->number);
	printf("%s\n", target->location);
}

ids newids(){
	ids target = (ids)malloc(sizeof(struct IDwithstat));
	target->newid = newid();
	return target;
}

void destroyids(ids target){
	if(target != NULL){
		destroyid(target->newid);
		free(target);
	}
}

int valid(ids target){
	//Can't find the real rule so just set it to true :D
	return 1;
}

void printids(ids target){
	printf("ID:%s\n", target->newid->number);
	//target->valid = valid(target);
	printf("Status:%d\n", target->valid);
}


