typedef struct box box; // box with volume function
typedef struct boxwmf boxwmf;//box with more functions
typedef int (*boxvolume) (box *self);

int volume (box *self);
//int compare (boxwmf *self, boxwmf *other);
void initboxx(box *self);

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

