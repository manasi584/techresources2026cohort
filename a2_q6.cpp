#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    if(i<=(n/2)+1){
    for(int j = 1;j<=(n-2*i+3)/2;j++){
        cout<<"*\t";
    }
    for(int k=1;k<=2*i-1;k++){
        cout<<" \t";
    }
    for(int j = 1;j<=(n-2*i+3)/2;j++){
        cout<<"*\t";
    }
    }
    else{
        for(int j = 1;j<=(2*i-n+1)/2;j++){
        cout<<"*\t";
    }
    for(int k=1;k<=2*n-2*i+1;k++){
        cout<<" \t";
    }
    for(int j = 1;j<=(2*i-n+1)/2;j++){
        cout<<"*\t";
    }


    }
cout<<endl;
}
    return 0;
}
