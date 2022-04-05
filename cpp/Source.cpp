#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int n = 9;
    int sered = n / 2;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= sered)
            {
                
                if (j >= sered - i && j <= sered + i)
                    cout << "*";
                else
                    cout << " ";
            }
            else
            {
             
                if (j >= sered + i - n + 1 && j <= sered - i + n - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}