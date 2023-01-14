#include<iostream>
using namespace std;

int main(){
int marks;
cout<<"Enter marks:"<<endl;
cin>>marks;

if(marks>90){
    cout<<"Excellent"<<endl;
}
else if ( marks<=90 && marks>80){ cout<<"Good"<<endl;}
else if ( marks<=80 && marks>70){cout<<"Fair"<<endl;}
else if ( marks<=70 && marks>60){cout<<"Meets expectations"<<endl;}
else{cout<<"Below par";}
    return 0;
}
