#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> MODEL;

int main() {
	MODEL a;
	a.push_back(1);
	cout<<a[0]<<endl;
	/*
	void *p;

	p = new (int*)();
	int* a;
	a = (int*)p;
	for (int i = 0; i < 10; i++) {
		*a = i; 
		int *c;
		c = (int*)p;
		printf("a %d	", a);
		printf("p %d	", p);
		printf("C:  %d\n", *c);
	}
*/
	return 0;
}