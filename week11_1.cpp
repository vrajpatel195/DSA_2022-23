#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Queue {
private:
    int size;
    int *queue;
    int front,rear;
public:
    Queue(int size){
        this->size=size;
        queue = new int[size];
        front = -1;
        rear = -1;
    }
    void Insert() {
        int val;
        if (rear == size - 1){
            cout<<"overflow"<<endl;
        return;
            }
        else {
            if (front == - 1)
            front = 0;
            cin>>val;
            rear++;
            queue[rear] = val;
   }
}
    void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"underflow ";
      return ;
   } else {
      front++;;
   }
}
    void Display() {
    if (front == - 1){
        cout<<"underflow"<<endl;
        return;}
    else {
        for (int i = front; i <= rear; i++)
        cout<<queue[i]<<" ";
   }
        cout<<endl;
}
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    Queue q(n);
    int choice;
    while(true){
        cin>>choice;
        if(choice==0)
        {
            break;
        }
        switch(choice){
            case 1: q.Insert();
                break;
            case 2: q.Delete();
                break;
            case 3: q.Display();
                break;
        }
    }
    return 0;
}
