#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <map>
#include <vector>

using namespace std;

//快速排序
void quick_sort(int *a, int begin,int end) {
    int i = begin;
    int j = end;
    int f = a[i];

    if (begin < end) {
        while (i < j) {
            while (i < j && a[j] >= f)
            {
                j--;
            }
            if (i < j) {
                a[i++] = a[j];
            }

            while (i < j && a[i] <= f) {
                i++;
            }
            if (i < j) {
                a[j--] = a[i];
            }
            
        }
        a[i] = f;
        quick_sort(a, begin, i-1);
        quick_sort(a, i+1, end);
    }
   
}



int main() {
	int i = 0;
	//vector<int> a;
	int a[10] = {2,4,5,1,3,6,7,4,8,3};
	// while (i < 10) {
	// 	int tmp;
		
	// 	scanf("%d", &a[i]);
	// 	//printf("i: %d ", i);
	// 	//a.push_back(tmp);
	// 	i++;
	// }
	quick_sort(a,0,9);

	for (i = 0; i < 10; i++) {
		printf ("%d ",a[i]);
	}

	return 0;
}