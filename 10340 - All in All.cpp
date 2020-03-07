#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s,t,temp;

    while(cin>>s>>t){
           int n=0;

           for(int i=0;i<t.size();i++)
           {
                if(t[i]==s[n]){
                    temp[n]=t[i];
                    n++;
                }

           }
           temp[n]='\0';
            int o=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==temp[i]){}
                else o++;
            }
           if(o==0)
            cout<<"Yes"<<endl;
           else cout<<"No"<<endl;

    }
return 0;


}
