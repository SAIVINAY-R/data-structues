//cpp program for sorting
#include <iostream>
using namespace std;
void quick_Sort(int x[], int lb, int ub) {
int down, up, t, pivot;
if(lb < ub) {
down = lb;
up = ub;
pivot = down;
while(down < up) {
while((x[down]<=x[pivot]) && (down < ub))
down++;
while(x[up]>x[pivot])
up--;
if(down < up) {
t = x[down];
x[down] = x[up];
x[up] = t;
}
}
t = x[pivot];
x[pivot] = x[up];
x[up] = t;
quick_Sort(x , lb,up-1);
quick_Sort(x , up + 1, ub);
}
}
int main() {
int n,i;
int list[30];
cout << "Enter number of elements you want to enter : ";
cin >> n;
cout << "Enter " << n << " elements : \n";
for(i = 0; i < n; i++)
cin >> list[i];
quick_Sort(list , 0, n-1);
cout << "\nAfter sorting : \n";
for(i = 0; i < n; i++)
cout << list[i] << endl;
}
