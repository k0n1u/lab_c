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

int disjointrect(struct rect r1, struct rect r2) //zwraca 1 gdy prostokąty są rozłączne
{
	if( (r1.ll.x > r2.ur.x || r1.ur.x < r2.ll.x) && ( r1.ll.y > r2.ur.y || r2.ll.y > r1.ur.y) )
		return 1;
	else
		return 0;
}

int main()
{
	struct rect test1, test2;
	
	test1.ll=makepoint(0,0);
	test1.ur=makepoint(10,10);

	test2.ll=makepoint(9,9);
	test2.ur=makepoint(14,18);

	printf("rozłączny?: %d\n",disjointrect(test1,test2) );
}