#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[4]={0,10,5,2};
    int end=3,start=0,ans=0,mid=(start+end)/2;

    while(start<end)
    {
         if(arr[mid]>arr[mid+1])
         {
              if(arr[mid]>=arr[mid-1])
              {
                ans=mid;
                break;
              }
              end=mid;
         }
         else
         {
              start=mid+1;
         }
         mid=(start+end)/2;

    }
    cout<<arr[ans]<<endl;
     return 0;
}
