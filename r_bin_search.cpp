//binary search using recursion
#include <iostream>
using namespace std;
int rec_Binary_Search(int list[],int low, int high, int key){
int mid,pos = -1;
int n = high+1;
for(int i = 0; i < n; i++) {
mid = (low + high) / 2;
if(key == list[mid]) {
pos = mid;
break;
}
else {
if (key > list[mid])
return rec_Binary_Search(list, mid+1, high, key);
else
return rec_Binary_Search(list, low, mid, key);
}
}
return pos;
}
int main() {
int n,i,key,list[25],pos;
cout << "Enter number of elements you want to enter : ";
cin >> n;
cout << "Enter " << n << " elements : \n";
for(i = 0; i < n; i++)
cin >> list[i];
cout << "Enter which element you want to search : ";
cin >> key;
pos = rec_Binary_Search(list, 0, n - 1, key);
if(pos == -1)
cout << "Element not found\n";
else 
cout << "Element found at index : " << pos << endl;
}
