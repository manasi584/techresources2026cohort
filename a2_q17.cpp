#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = (n / 2); i >= -(n / 2); i--)
    {
        if (abs(i) != 0)
        {
            for (int j = 1; j <= int(n / 2); j++)
            {
                cout << " \t";
            }
            for (int k = 1; k <= (n/2)-abs(i)+1; k++)
            {
                cout << "*\t";
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*\t";
            }
        }
        cout << endl;
    }
    return 0;
}
