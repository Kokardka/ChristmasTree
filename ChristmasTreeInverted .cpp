#include <iostream>
using namespace std;
int main()
{
  int w,i,j,space;
  cout<<"Enter the number of rows of the inverted Christmas tree: ";
  cin>>w;
  for(i=w;i>=1;--i)
  {
    for(space=0;space<w-i;++space)
      cout<<"  ";
    for(j=i;j<=2*i-1;++j)
      cout<<"* ";
    for(j=0;j<i-1;++j)
      cout<<"* ";
    cout<<endl;
  }
  return 0;
}
