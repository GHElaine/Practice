#include <stdio.h>
#include <stdlib.h>
#include <cfloat>

struct A {
	int w;
	int h;
};

int cmp(const void* a, const void* b) {
	A* _a = (A*)a;
	A* _b = (A*)b;
	if (_a->w < _b->w) {
		return 1;
	}
	else if (_a->w > _b->w) {
		return -1;
	}
	else 
		return 0;
}

void add(A *a) {
	/*for (int i = 0; i < 10; i++) {
		a[i].w += 3;
	}*/
	A *b;
	A *c;
	b = a;
	c = b;
	for (int i = 0; i < 5; i++) {
		c->w *= -1;

		printf("%d::	###h: %d	w: %d\n", i,c[i].h, c[i].w);
		c++;
	}
	/*c = b;
	for (int i = 0; i < 5; ++i)
	{
		b->w *= 2;
		b++;
	}*/
}
int main() {

	double d = DBL_MAX;
	printf("d  %lf\n",d);
	d = 1-d;
	printf("d  %lf\n",d);
	A a[10];
	for (int i = 0; i < 10; i++) {
		a[i].w = i;
		a[i].h = i;
		printf("w: %d	h: %d\n", a[i].w, a[i].h);
	}
	add(a);
	qsort(a, 10, sizeof(A), &cmp);
	
	for (int i = 0; i < 10; i++) {
		printf("##w: %d	h: %d\n", a[i].w, a[i].h);
	}
	printf("\n");
	return 0;
}