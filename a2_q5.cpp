#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
       if(i<=(int(n/2) +1)){
        for(int j=1;j<=(n-2*i+1)/2;j++){
        cout<<" \t";
       }
       for(int k =1;k<=2*i-1;k++){
        cout<<"*\t";
       }}
       else{
        for(int j=1;j<=(2*i-n-1)/2;j++){
            cout<<" \t";
        }
        for(int k=1;k<=2*(n-i+1)-1;k++){
            cout<<"*\t";
        }
       }
       cout<<endl;
    }

    return 0;
}
