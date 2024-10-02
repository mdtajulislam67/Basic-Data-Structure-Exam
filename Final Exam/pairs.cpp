#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if(a.first != b.first)
    {
        return a.first < b.first;
    }

    return a.second > b.second;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin>> n;
    cin.ignore();

    vector<pair <string,int>> pairs;

    while(n--)
    {
        string word;
        getline(cin,word);
        string w;
        stringstream ss(word);
        int i;

        ss>>w;
        ss>>i;
        pairs.push_back(pair<string,int>(w,i));
    }

    sort(pairs.begin(), pairs.end(), cmp);

    for(auto p : pairs) 
        { 
            cout << p.first << " " << p.second << endl; 
        }
    return 0;
}