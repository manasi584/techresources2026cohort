#include<iostream>
using namespace std;

int main(){
 int num1 , num2,div,rem,n1,n2;
 cin>>num1;
 cin>>num2;
 n1 = max(num1,num2); 
 n2 = min(num1,num2);
 rem = n1%n2;
 if(rem==0){
    cout<< "HCF:"<<n2<<endl;
 }
 else{
    for(int i =0;rem!=0;i++){
    n1=n2;
 n2=rem;
 rem=n1%n2;
 if ( rem==0){
    cout<<"HCF:"<<n2<<endl;
 }
 else{continue;}}}
 cout<<"LCM:"<<(num1*num2)/n2<<endl;


    return 0;
}
