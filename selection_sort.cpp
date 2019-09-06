//cpp program for sorting
#include <iostream>
using namespace std;
void selection_Sort(int list[], int n) {
int min,temp;
for(int i = 0; i < n;i++) {
min = i;
for (int j = i + 1; j  < n ;j++) {
if(list[j] < list[min])
min = j;
}
temp = list[i];
list[i] = list[min];
list[min] = temp;
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
selection_Sort(list , n);
cout << "\nAfter sorting : \n";
for(i = 0; i < n; i++)
cout << list[i] << endl;
}
