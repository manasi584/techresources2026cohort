#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    x = n / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i < x + 1 || i == n)
        {
            cout << "*\t";
            for (int j = 1; j <= n - 2; j++)
            {
                cout << " \t";
            }
            cout << "*\t";
        }
        else
        { cout<<"*\t";
            for (int j = x-1; j >= -(x-1); j--)
            {   
                if (i-x-1 == abs(j))
                {
                    cout << "*\t";
                }
                else
                {
                    cout << " \t";
                }
            }
            cout<<"*\t";
        }
        cout << endl;
    }
    return 0;
}
