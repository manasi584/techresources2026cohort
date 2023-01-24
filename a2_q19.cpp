#include <iostream>
using namespace std;

int main()
{
    int n;
     cin>>n;
    for (int i = int(n / 2); i >= -int(n / 2); i--)
    {
        for (int j = int(n / 2); j >= -int(n / 2); j--)
        {
            if (i == 0 || j == 0)
            {
                cout << "*\t";
            }
            else if (i == int(n / 2) && j > 0)
            {
                cout << "*\t";
            }
            else if (i == -int(n / 2) && j < 0)
            {
                cout << "*\t";
            }
            else if (j == int(n / 2) && i < 0)
            {
                cout << "*\t";
            }
            else if (j == -int(n / 2) && i > 0)
            {
                cout << "*\t";
            }
            else
            {
                cout << " \t";
            }
            
        }
        cout<<endl;
    }

    return 0;
}
