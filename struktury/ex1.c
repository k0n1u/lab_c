#include <stdio.h>

//punkt
struct point {
	int x;
	int y;
};

//prostokąt
struct rect
{
	struct point ll; //lower left
	struct point ur; //lower right
};

struct point makepoint(int x, int y)
{
	struct point tmp;
	tmp.x=x;
	tmp.y=y;
	return tmp;
};

int ptinrect(struct point p, struct rect r)
{
	return p.x >= r.ll.x && p.x < r.ur.x &&p.y >= r.ll.y && p.y < r.ur.y;
}

int rectinrect(struct rect r1, struct rect r2) //zwraca 1 gdy r1 zawiera się w r2
{
	if(ptinrect(r1.ll,r2) == 1 && ptinrect(r1.ur,r2) == 1)
		return 1;
	else
		return 0;
}

int main()
{
	struct rect test1, test2;
	
	test1.ll=makepoint(0,0);
	test1.ur=makepoint(10,10);

	test2.ll=makepoint(2,2);
	test2.ur=makepoint(8,8);

	printf("%d\n",rectinrect(test2,test1));
}