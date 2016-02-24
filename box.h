typedef struct box box; // box with volume function
typedef struct boxwmf boxwmf;//box with more functions
typedef int (*boxvolume) (box *self);

struct box
{
	int length;
	int breadth;
	int height;
	int (*boxvolume) (box *self);
};

struct boxwmf
{
	box *boxv;
	//int (*compare) (boxwmf *self, boxwmf *other);
};

int volume (struct box *self);
//int compare (boxwmf *self, boxwmf *other);
void initboxx(struct box **self);
