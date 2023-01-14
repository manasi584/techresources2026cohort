#include<iostream>
#include<math.h>
using namespace std;

int cntdig(int num);
int main(){
int n , k;
cin>>n;
cin>>k;
float rotnum;
if(k>0){
for(int i=1;i<=k;i++){
    int dig=n%10;
    n = n/10;
    float x=cntdig(n);
    rotnum= dig*pow(10.0,x) +n;
    n=rotnum;

}}
else{
    for(int i=1;i<=abs(k);i++)
    {float x=cntdig(n);
    double div =pow(10.0,x-1);
    int  dig=(n-(n % int(div)))/int(div);
    n = (n%int(div))*int(pow(10.0,1));
    rotnum= dig+n;
    n=rotnum;}}

cout<<rotnum;
return 0;}

int cntdig(int num){

    int count =0;
    for(int j =0;num!=0;j++){
        count = count + 1;
        num=num/10;
    }
return count;

}
    
