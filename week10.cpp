#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void toh(int n,char A,char B, char C){
    if(n==1){
        cout<<"Move disk 1 from rod "<<A<<" to rod "<<C<<endl;
        return;
    }
    toh(n-1,A,C,B);
        cout<<"Move disk "<<n<<" from rod "<<A<<" to rod "<<C<<endl;
    
    toh(n-1,B,A,C);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}