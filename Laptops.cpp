#include<bits/stdc++.h>
using namespace std;
#define Start ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define srt(a) sort(a,a+n)
#define sort(a) sort(a.begin(), a.end())
#define pb(a) push_back(a)
#define tc ll t; cin>>t; while(t--)

int main()
{
    ll n;
    cin>>n;
    vector< pair<ll,ll> > vp(n);

    for(ll i=0; i<n; i++){
        cin>>vp[i].first>>vp[i].second;
    }
    bool key = false;
    sort(vp);
    for(ll i=0; i<n-1; i++){
        if( (vp[i].first < vp[i+1].first) && (vp[i].second > vp[i+1].second) ){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}

