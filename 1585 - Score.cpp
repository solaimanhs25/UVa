#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){

    string str;
    cin>>str;

    int sum=0,value=1;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='X'){
           value=1;
        }
        else {
             sum+=value;
            value++;
                }
    }
    cout<<sum<<endl;
}
return 0;
}
