#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;



    while(t--)
    {
        int n;
        cin>>n;

        int arr[10];
        for(int i=0;i<10;i++)
            arr[i]=0;

        for(int i=1; i<=n; i++)
        {
            int temp=i;

            while(temp!=0)
            {
                int j=temp%10;
                arr[j]++;
                temp/=10;
            }

        }
        for(int i=0;i<9;i++){
            cout<<arr[i]<<" ";
        }
        cout<<arr[9]<<endl;
    }
    return 0;
}
