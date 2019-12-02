#include <bits/stdc++.h>
using namespace std;
int main()
{
long n,i,d,j;
 cin>>n;
 long x[n];
 for(i=0;i<n;i++)
  cin>>x[i];
  for(i=0;i<n;i++)
  {
  	 d=1;
      for(j=0;j<n;j++)
        if(x[i]<x[j])
           d++;
      cout<<d<<endl;       
  }
}
