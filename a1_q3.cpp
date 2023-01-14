#include <iostream>
using namespace std;
int counter = 2;
void chckprm(int n);
int main()
{
    int t, n[25];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
        chckprm(n[i]);
    }
    return 0;
}

void chckprm(int n)
{   if ( n == 2){cout<<"prime"<<endl;}
 else if (n % 2 == 0)
    {
       
        cout << "not prime" << endl;
    }
    else
    {
        for (int i = 2; i <n; i++)
        {
            int rem = n % i;
            if (counter == n - 1)
            {
                
                cout << "prime" << endl;
            }
            if (rem == 0)
            {
                
                cout << "not prime" << endl;

                break;
            }
            
            else
            {

                counter++;
                continue;
            }
        }
    }
}
