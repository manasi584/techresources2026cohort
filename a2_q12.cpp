#include<iostream>
using namespace std;

int main(){
    int num , t[16],x;
    x=1;
     cout<<"Enter n (1<=num<=5):"<<endl;;
     cin>>num;
    t[0]=1,t[1]=0,t[2]=1;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<t[x]<<"\t";
            x++;
            if(x==16){break;}
            else{
            t[x]=t[x-1]+t[x-2];}
        }
        cout<<endl;
    }
    return 0;
}
