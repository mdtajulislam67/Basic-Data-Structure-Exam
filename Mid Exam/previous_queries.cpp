#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            l.push_front(v);
        }
        if(x==1)
        {
            l.push_back(v);
        }
        if(x==2)
        {
            if(v>=0 && l.size()>v)
            {
                auto it=l.begin();
                advance(it,v);
                l.erase(it);
                
            }
        }
    
        cout<<"L -> ";
        for(auto it=l.begin();it!=l.end();it++)
        {
        cout<<*it<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
        for(auto it=l.end();it!=l.begin();)
        {
        it--;
        cout<<*it<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}