//liner searcch using recursion 
#include <iostream>
using namespace std;
int rec_LinearSearch(int list[],int n, int key){
if(n <= 0)
return -1;
else if (list[n] == key)
return n;
else 
return rec_LinearSearch(list, n - 1, key);
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
pos = rec_LinearSearch(list, n, key);
if(pos == -1)
cout << "Element not found\n";
else 
cout << "Element found at index : " << pos << endl;
}
