/*stacks using arrays*/
#include <iostream>
#include <stdlib.h>
#define MAX 5
int top = -1;
int a[10];
using namespace std;
class SUA {
public:
void push();
void pop();
void display();
};
int main() {
SUA obj;
int ch;
while(1) {
cout<<"\n\t----MAIN MENU----\n";
cout << "\n\t\t1.PUSH\n\t\t2.POP\n\t\t3.DISPLAY\n\t\t4.EXIT\n";
cout << "\n Enter your choice\n";
cin >> ch;
switch(ch) {
case 1: obj.push();
	break;
case 3: obj.display();
	break;
case 2: obj.pop();
	break;
case 4: exit(0);
}
}
}
void SUA :: push() {
if(top == (MAX - 1)){
cout << "Stack overflow\n";
}else {
cout << "Enter the element to push into stack : ";
top = top + 1;
cin >> a[top];
}
}
void SUA :: pop() {
if(top != -1) {
cout << "The element : " << a[top] << " is poped out of stack\n";
top = top - 1;
} else {
cout << "Stack is underflow\n";
}
}
void SUA :: display() {
if(top != -1) {
for (int i = top; i >= 0; i--) {
cout << "->" << a[i] << endl;
}
} else {
cout << "The stack is empty\n";
}
}
