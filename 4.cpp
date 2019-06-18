// https://codeforces.com/problemset/problem/1030/A

#include<iostream>
using namespace std;

int main()
{
  int n,i=0;
  cin>>n;
  while(n>0)
  {
    cin>>i;
    if(i==1)
    {
      break;
    }
    n--;
  }
  if(i==1)
  {
    cout<<"HARD";
  } else {
    cout<<"EASY";
  }
}
