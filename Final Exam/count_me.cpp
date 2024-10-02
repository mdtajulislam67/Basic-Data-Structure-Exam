#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;
    string max_word;
    int max_cnt=0;

    while (ss >> word)
    {
        mp[word]++;

        if(mp[word]>max_cnt)
        {
            max_cnt=mp[word];
            max_word= word;
        }
    }
    
        cout << max_word << " " << max_cnt << endl;

    }
    
    return 0;
}