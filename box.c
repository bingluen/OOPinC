#include "box.h"
#include <stdlib.h>
#include <stdio.h>

int volume (box *self)
{
	return (self->length)*(self->breadth)*(self->height);
}

/*int compare(boxwmf *self, boxwmf *other)
{
	if(self->boxv->boxvolume(self->boxv) > other->boxv->boxvolume(self->boxv))
	{
		return 1;//means self is bigger than other
	}

	else
	{
		return 0;
	}
}*/

void initboxx(box *self)
{
	if(self==NULL)
	{
		self=(box *)malloc(sizeof(struct box));
		self->length=10;
		self->breadth=5;
		self->height=6;
		printf("%d\n",(self->length)*(self->breadth)*(self->height));
		self->boxvolume=volume;
	}
}
