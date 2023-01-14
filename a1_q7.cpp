#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
     double fv[100];
     double inv=0;
    cin>> n ;
    for(int i = 1;n!=0;i++){
        fv[i]=n%10-1.0;
        inv=inv+i*pow(10.0,(fv[i]));
        n=n/10;
    }
    cout<<"inverse is:"<<inv;
    return 0;
}
