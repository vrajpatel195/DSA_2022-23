#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class CircularQueue {
private:
    int size;
    int *cqueue;
    int front,rear;
public:
    CircularQueue(int size){
        this->size=size;
        cqueue = new int[size];
        front = -1;
        rear = -1;
    }
    void insertCQ(int val) {
   if ((front == 0 && rear == size-1) || (front == rear+1)) {
      cout<<"overflow"<<endl;
      return;
   }
   if (front == -1) {
      front = 0;
      rear = 0;
   } else {
      if (rear == size - 1)
      rear = 0;
      else
      rear = rear + 1;
   }
   cqueue[rear] = val ;
}
void deleteCQ() {
   if (front == -1) {
      cout<<"underflow"<<endl;
      return ;
   }
   if (front == rear) {
      front = -1;
      rear = -1;
   } else {
      if (front == size - 1)
      front = 0;
      else
      front = front + 1;
   }
}
void displayCQ() {
   int f = front, r = rear;
   if (front == -1) {
      cout<<"underflow"<<endl;
      return;
   }
   if (f <= r) {
      while (f <= r){
         cout<<cqueue[f]<<" ";
         f++;
      }
   } else {
      while (f <= size - 1) {
         cout<<cqueue[f]<<" ";
         f++;
      }
      f = 0;
      while (f <= r) {
         cout<<cqueue[f]<<" ";
         f++;
      }
   }
   cout<<endl;
}
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    CircularQueue cq(n);
    int choice,value;
     do {
      cin>>choice;
      switch(choice) {
         case 1:
         cin>>value;
         cq.insertCQ(value);
         break;

         case 2:
         cq.deleteCQ();
         break;

         case 3:
         cq.displayCQ();
         break;
      }
   } while(choice != 0);
    
    return 0;
}

