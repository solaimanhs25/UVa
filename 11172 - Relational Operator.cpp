#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b;

        cin>>a>>b;

        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }

    return 0;
}
