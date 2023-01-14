#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter the no."<<endl;
   cin>>num;
   int i = 2;
   do{
    int r = num%i;
    if( r ==0){
        cout<<i<<"\t";
        num=num/i;
    }
    else{i++;}
   }while(num>1);


    return 0;
}
