/*Circular Queues using arrays*/
#include <iostream>
using namespace std;
#define MAX 10
int a[10];
int front=-1,rear=-1, count=0;
void insert() {
if(count == MAX){
cout << "Queue is overflow\n";
}else {
rear = (rear+1)%MAX;
cout << "Enter the element you want to insert to the queue : ";
cin >> a[rear];
count++;
}
}
void deletion() {
if(count != 0) {
front = (front+1)%MAX;
cout << a[front] << " is deleted from the queuq\n";

count--;
} else {
cout << "QUEUE is underflow\n";
}
}
void display() {
if(count != 0){
cout << "The QUEUE is : \n";
int j = 0;
int i = front;
while(j < count){
i = (i + 1)%MAX;
cout << "--->> " << a[i] << endl;
j++;
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

