#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    int b;
    LOOP:
        cin>>b;
        if(b==1){
            int n,i;
            cin>>n;
            i= n%10;
            if(a[i]==0)
            {
                a[i]=n;
            }
            else
            {
                while(a[i]!=0)
                i++;
                a[i]=n;
            }
        }
        else{
            for(int i=0;i<10;i++){
                cout<<i<<" "<<a[i]<<endl;
            }

        }
        if(b==2)
        goto out;
    goto LOOP;
    out:
    return 0;
}
