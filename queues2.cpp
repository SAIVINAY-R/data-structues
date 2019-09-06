//QUEUES using linked list 
#include <iostream>
#include <stdlib.h>
using namespace std;
class qll {
struct QUEUE {
int data;
struct QUEUE *next;
} *front, *rear;
public :
typedef struct QUEUE node;
qll() {
front = NULL;
rear = NULL;
}
void insert();
void display();
void deletion();
};
void qll::insert()
{
node *temp,*p;
temp = new node;
cout << "Enter the element  ";
cin >> temp->data;
if(front == NULL)
{
temp->next=front;
front = rear = temp;
}
else
{
temp->next = rear->next;
rear->next= temp;
rear = temp;
}
}
void qll::display()
{
int d;
node *q;
q=front;
if(front != NULL){
cout << "\nElements in the QUEUE are :\n";
while(q!=NULL)
{
cout << "-->>" << q->data;
q=q->next;
}
}else 
cout << "QUEUE is empty\n";
}
void qll :: deletion() {
node *p;
if(front != NULL)
{ 
cout << front->data << " is deleted from the queue\n";
p = front;
front = front->next;
delete(p);
}else {
cout <<"QUEUE IS UNDERFLOWING\n";
}
}
int main() {
qll o;
int choice = 1;
while((0 < choice) && (choice < 4)){
cout << "\n-----------------------MAIN MENU----------------------\n";
cout << "\n\t1.INSERT\n\t2.DELETE\n\t3.DISPLAY\n\t4.EXIT\n";
cout << "Enter your choice : ";
cin >>  choice;
switch(choice) {
case 1 : o.insert();break;
case 2 : o.deletion();break;
case 3 : o.display();break;
case 4 : exit(0);
}
}
}

