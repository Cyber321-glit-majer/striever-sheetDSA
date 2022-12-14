
#include <bits/stdc++.h>
//dutch national falg algorithm
using namespace std;

int main()
{
   int a[]={1,0,1,0,2,0,2,1,0};
   int n=sizeof(a)/sizeof(a[0]);
   int low=0;
   int mid=0;
   int high=n-1;
   while(mid<=high)
   {
       switch(a[mid])
       {
           case 0:
           swap(a[low++],a[mid++]);
           break;
           case 1:
           mid++;
           break;
           case 2:
           swap(a[mid],a[high--]);
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   

    return 0;
}
