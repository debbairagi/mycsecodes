#include<bits/stdc++.h>
using namespace std;

int t, n, cnt;
char ch[3][110];

int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cnt=0;
        cin>>n;
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<n;k++)
            {
                cin>>ch[j][k];
                if(ch[j][k]=='O')
                {
                    cnt++;
                }
            }
        }
        cout<<"Case "<<i<<": ";
        if(cnt%2==0)
        {
            cout<<"Grandma"<<endl;
        }
        else
        {
            cout<<"Jhinuk"<<endl;
        }
    }

    return 0;

}