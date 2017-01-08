#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,la,lb,l,x,c;
    string a,b,s,xs;
    char sa[100007],sb[100007];
    scanf("%d",&t);
    while(t--)
    {
        s="";
        scanf("%s", sa);
        a = sa;
        scanf("%s", sb);
        b = sb;
        la = a.length();
        lb = b.length();
        l = min(la,lb);
        for(int i=0;i<abs(la-lb);i++)
            s = s + "0";
        if(la<lb)
        {
            a = s+a;
            l=lb;
        }
        else
        {
            b = s+b;
            l = lb;
        }
        c=0;
        s="";
        //cout<<a;
        for(int i=l-1;i>=0;i--)
        {
            x = a[i]-'0'+b[i]-'0'+c;
            xs = to_string(x%10);
            c = x/10;
            s = xs + s;
        }
        if(c>0)
            cout<<c<<s.c_str()<<endl;
        else
            cout<<s.c_str()<<endl;
    }
    return 0;
}
