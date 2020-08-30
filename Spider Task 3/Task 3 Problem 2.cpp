#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{   
    int m,n;
    cin>>n;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    int tempM = m;
    for(int j=0;j<m-n;j++)
    { 
      sort(arr, arr+tempM); 
      tempM=tempM-1;
      arr[0]=arr[0]+arr[1];
      for(int i=1;i<m;i++)
      {
      arr[i]=arr[i+1];
      }
      int size = sizeof(arr)/sizeof(arr[0]);
      if(size-1-j==n)
      { 
        int min = arr[0];
        for(int i=0;i<size-1-j;i++)
        {
         if(arr[i]<min)
         {
            min = arr[i];
         }
        }
        cout<<min;
      }
  
    }
   return 0;
}





