#include <iostream>
using namespace std;
void ChristmasTreeHalf(int d, char z)
{
    for(int i=1;i<=d;i++)
    {
        for(int j=0;j<i;j++)cout<<z;
        cout<<endl;
    }
}
int main() {
    int d;
    char symbol;
    cout << "Enter the number of symbols in the lower widest half of the Christmas tree and the symbol: " << endl;

    cin>>d>>symbol;
    ChristmasTreeHalf(d,symbol);

    return 0;
}
