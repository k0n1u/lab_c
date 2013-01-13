#include <stdio.h>
#include <stdlib.h>

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

int rectinrect(struct rect r1, struct rect r2) //zwraca 1 gdy r1 zawiera się w r2
{
	if(ptinrect(r1.ll,r2) == 1 && ptinrect(r1.ur,r2) == 1)
		return 1;
	else
		return 0;
}

int area(struct rect r1,struct rect r2)
{
	int area=0,area2=0;

	area=( abs(r1.ur.x-r1.ll.x) * abs(r1.ur.y-r1.ll.y) ) + ( abs(r2.ur.x-r2.ll.x) * abs(r2.ur.y-r2.ll.y) );

	if(disjointrect(r1,r2)==0)
	{
		area2=abs(r2.ur.x-r1.ll.x) * abs(r2.ll.y-r1.ur.y);
		area-=area2;
	}

	return area;
}

int main()
{
	struct rect test1, test2;
	
	test1.ll=makepoint(0,0);
	test1.ur=makepoint(10,10);

	test2.ll=makepoint(9,8);
	test2.ur=makepoint(14,18);

	printf("Pole: %d\n",area(test1,test2) );
}