#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        string str;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        cin>>str;
        vector<pair<int,int>>vect;
        for(int i=0;i<n;++i)
        {
            int x=str[i]-'0';
            vect.push_back({arr[i],x});
        }
        // for(auto it=vect.begin();it!=vect.end();it++)
        // {
        //     cout<<*(it).first<<" "<<*(it).second;
        // }
        sort(vect.begin(), vect.end());
        for(int i=0;i<n;++i)
        {
            if(vect[i].second==0)
            {
                cout<<vect[i].first<<endl;
                break;
            }
        }
    }
  
    
}