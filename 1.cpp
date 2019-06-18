// https://codeforces.com/problemset/problem/1173/A

#include<iostream>
using namespace std;

void function(int x,int y,int z)
{
  int r;
  r=x-y;
  if(r>z)
  {
    cout<<"+";
    return;
  }
  if(y==x && z==0)
  {
    cout<<"0";
    return;
  }
  r = y-x;
  if(r>z)
  {
    cout<<"-";
    return;
  }
  // if(r==z)
  // {
  //   cout<<"0";
  //   return;
  // }
  if(z>x-y || z>y-x)
  {
    cout<<"?";
  }
}

int main()
{
  int x,y,z;
  cin>>x>>y>>z;
  function(x,y,z);
}
