#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,k,i,j,p,key;
    cin>>p;
    for(int i=0; i<p; ++i)
    {
        cin>>n;
        int arr[n],f=0;
        for(int j=0; j<n; ++j)
            cin>>arr[j];
        cin>>key;

        for(int j=0; j<n-1; ++j)
        {
            for(int k=j+1; k<n; ++k)
            {
                 if(abs(arr[j]-arr[k])==key)
                    {
                        f++;

                    }
            }
        }


        cout<<f<<endl;
  }
    return 0;
}
