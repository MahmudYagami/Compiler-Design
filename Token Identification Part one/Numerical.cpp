#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool ct=false;


     if(s >="0" && s <="9")
        {
            ct=true;
        }
        else
        {
            ct=false;
        }
    if(ct==true)
    {
        cout<<"Numeric"<<endl;
    }
    else
    {
        cout<<"Not Numeric"<<endl;
    }

}
