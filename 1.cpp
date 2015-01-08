#include <stdio.h>

struct A {
	int w;
	int h;
};
void add(A *a) {
	for (int i = 0; i < 10; i++) {
		a[i].w += 3;
	}
	A *b;
	A *c;
	b = a;
	c = b;
	for (int i = 0; i < 5; i++) {
		c->w *= 10;
		c++;
	}
	c = b;
	for (int i = 0; i < 5; ++i)
	{
		b->h *= 2;
		b++;
	}
}
int main() {
	A a[10];
	for (int i = 0; i < 10; i++) {
		a[i].w = i;
		a[i].h = i;
	}
	add(a);
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i].w);
		printf("%d \n", a[i].h);
	}
	printf("\n");
	return 0;
}