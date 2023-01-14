#include<iostream>
using namespace std;

int main(){

int n,dig;
cin>>n;
do{
    dig=n%10;
    n=n/10;
    cout<<dig<<endl;
}while(n!=0);
    return 0;
}
