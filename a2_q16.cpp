#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j<<"\t";
            }
            for (int k = 1; k <= 2 * n - 1 - 2 * i; k++)
            {
                cout << " \t";
            }
            for (int j = i; j > 0; j--)
            {
                cout << j << "\t";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j<<"\t" ;
            }
            for (int j = i-1; j > 0; j--)
            {
                cout << j<<"\t";
            }
        }
        cout<<endl;}
        return 0;
    }
