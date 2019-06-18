// https://codeforces.com/problemset/problem/1181/A

#include<iostream>
using namespace std;

unsigned long long int func(unsigned long long int x,unsigned long long int y,unsigned long long int z)
{
  if(x%z==0 || y%z==0)
    return 0;
  if((x%z)+(y%z)<z)
    return 0;
  // unsigned long long int o1 = min((x%z),(y%z));
  unsigned long long int o1,o2;
  unsigned long long int a,b,d;
  d = x / z;
  a = d * z;
  b = (d+1) * z;
  a = x-a;
  b = b-x;
  o1 = min(a,b);
  d = y / z;
  a = d * z;
  b = (d+1) * z;
  a = y-a;
  b = b-y;
  o2 = min(a,b);
  return min(o1,o2);
}

int main()
{
  unsigned long long int x,y,z;
  cin>>x>>y>>z;
  unsigned long long int o1 = (x+y)/z;
  unsigned long long int o2 = func(x,y,z);
  cout<<o1<<" "<<o2;
}
