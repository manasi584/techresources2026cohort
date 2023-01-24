#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = int(n / 2); i >= -int(n / 2); i--)
    {

        for (int j = 1; j <= n / 2 - abs(i); j++)
        {
            cout << " \t";
        }
        if (0<i && i<int(n/2))
        {
            cout << "*\t";
            for (int s = 1; s <= 2 * abs(i) - 1; s++)
            {
                cout << " \t";
            }
               cout << "*\t";
            }
        
        else if (i ==int(n / 2))
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*\t";
            }
        }
        else if(i==0){
            cout<<"*\t";
        }
        else
        {
            for (int k = 1; k <= 2*abs(i) + 1; k++)
            {
                cout << "*\t";
            }
            // cout << "*\t";
        }

        cout << endl;
    }

    return 0;
}
