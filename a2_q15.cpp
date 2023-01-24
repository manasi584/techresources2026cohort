#include<iostream>
using namespace std;

int main(){
int n=5;
cin>>n;
for(int i=1;i<=n;i++){
    if(i<=int(n/2)+1){  
        for(int j=int(n/2)+1-(i);j>=1;j--){ 
            cout<<" \t";
        }
        int x=i;
        for(int k = 1;k<=2*i-1;k++){
             cout<<x<<"\t";
            if(k<i){x++;}
            else{x--;}
        }
    }
    else{for(int j=int(n/2)+1-((n-i+1));j>0;j--){
            cout<<" \t";
        }
        int x = n-i+1;
        for(int k = 1;k<=2*(n-i+1)-1;k++){
            
            cout<<x<<"\t";
            if(k<n-i+1){x++;}
            else{x--;}}
}
cout<<endl;
}
    return 0;
}
