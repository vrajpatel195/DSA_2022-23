#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
   int data;
   struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
void Insert() {
   int val;
   cin>>val;
   if (rear == NULL) {
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } else {
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}
void Delete() {
   temp = front;
   if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      free(front);
      front = temp;
   } else {
      free(front);
      front = NULL;
      rear = NULL;
   }
}
void Display() {
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Underflow"<<endl;
      return;
   }
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int choice;
    do{
        cin>>choice;
        switch (choice) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
      }
    }while(choice!=0);
    return 0;
}
