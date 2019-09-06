#include <iostream>
using namespace std;
int lSearch(int list[], int n, int key);
int main() {
int n,i,key,list[25],pos;
cout << "enter number of elements : ";
cin >> n;
cout << "enter " << n << " elements\n";
for(i = 0;i < n; i++) 
cin >> list[i];
cout << "enter key to search : ";
cin >> key;
pos = lSearch(list,n,key);
if(pos == -1)
cout << "\nElement not found\n";
else 
cout << "Element found at index " << pos << endl;
}
int lSearch(int list[], int n, int key){
int i,pos=-1;
for(i = 0; i < n; i++){
if(key == list[i]){
pos = i;
break;
}
}
return pos;
}
