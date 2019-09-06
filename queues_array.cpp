/*Queues using arrays*/
#include <iostream>
using namespace std;
#define MAX 10
int a[10];
int front=-1,rear=-1;
void insert() {
if((rear-1) == MAX){
cout << "Queue is overflow\n";
}else {
rear = rear+1;
cout << "Enter the element you want to insert to the queue : ";
cin >> a[rear];
}
}
void deletion() {
if(rear != front) {
cout << a[front+1] << " is deleted from the queuq\n";
while(front != rear) {
front++;
a[front] = a[front+1];
}
front = -1;
rear = rear-1;
} else {
cout << "QUEUE is underflow\n";
}
}
void display() {
if(front != rear){
cout << "The QUEUE is : \n";
for(int i = front+1; i <= rear; i++) {
cout << "--->> " << a[i] << endl;
}
}else
cout << "QUEUE is empty\n";
}
int main() {
int choice = 1;
while((0 < choice) && (choice < 4)){
cout << "\n-----------------------MAIN MENU----------------------\n";
cout << "\n\t1.INSERT\n\t2.DELETE\n\t3.DISPLAY\n\t4.EXIT\n";
cout << "Enter your choice : ";
cin >>  choice;
switch(choice) {
case 1 : insert();break;
case 2 : deletion();break;
case 3 : display();break;
}
}
}

