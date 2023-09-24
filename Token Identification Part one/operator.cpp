#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='+' || s[i]=='-' ||s[i]=='*'||s[i]=='/'||s[i]=='=')
       {
           cout<<"operator"<<s[i]<<endl;
       }
       else
       {
           cout<<"No operator found"<<endl;

       }
    }


}
