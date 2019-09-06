/*stacks using linked list*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class SUA {
struct list
{
int data;
struct list *next;
} *top;
public:
typedef struct list node;
SUA() {
top=NULL;
}
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
node *temp;
temp = new node;
cout << "Enter the element  ";
cin >> temp->data;
temp->next=top;
top=temp;
}
void SUA :: pop() {
if(top != NULL) {
node *P;
cout << "The element : " << top->data << " is poped out of stack\n";
P=top;
top = P->next;
delete(P);
} else {
cout << "Stack is underflow\n";
}
}
void SUA :: display() {
node *q;
q=top;
if(top!=NULL){
cout << "\nElements in the list are\n";
do
{
cout << "->" << q->data << endl;
q=q->next;
}while(q!=NULL);
} else {
cout << "The stack is empty\n";
}
}
