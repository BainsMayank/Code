#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                   
                    flag=1;
                    break;

                }
            }
        }
        if(flag==1)
        {
            cout<<"-1"<<"\n";
        }
        else{
              sort(arr,arr+n);
              reverse(arr,arr+n);
              for(int i=0;i<n;i++)
              {
                cout<<arr[i]<<" ";
              }
              cout<<"\n";
        }

    }
    
    return 0;
}