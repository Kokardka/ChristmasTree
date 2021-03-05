#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many lines of stars the Christmas tree should have:" << endl;
    cin >> n;


    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= n - i; j++ )
        {
            cout << " ";
        }
        for( int j = 1; j <= i * 2 - 1; j++ )
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
