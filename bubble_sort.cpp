//cpp program for sorting
#include <iostream>
using namespace std;
void bubble_Sort(int list[], int n) {
int temp;
for (int i = 0; i < n; i++ )
for (int j = 0; j < n - 1; j++ ) {
if(list[j] < list[j + 1]) {
temp = list[j];
list[j] = list[j + 1];
list[j + 1] = temp;
}
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
bubble_Sort(list , n);
cout << "\nAfter sorting : \n";
for(i = 0; i < n; i++)
cout << list[i] << endl;
}
