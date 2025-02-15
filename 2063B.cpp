 
#include <bits/stdc++.h>
 
#define ll long long
#define ull unsigned long long
#define dd double
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define pb push_back
#define FOR(i, n) for (ll i = 1; i <= n; i++)
#define LOOP(i, n) for (ll i = 0; i < n; i++)
#define FOOR(i, a, b) for (ll i = a; i <= b; i++)
#define LOP(i, a, b) for (ll i = a; i < b; i++)
#define sorted(s) sort(s.begin(), s.end())
#define MAXN 100004
 
using namespace std;
 
int main() {
 


    int t;
    cin>>t;
    while(t--){


        int n,l,r;
        cin>>n>>l>>r;
        vector<ll>v(n);

        for(int i=0;i<n;i++){

            cin>>v[i];
        }
        vector<ll>a1;
        for(int i=0;i<r;i++){

                a1.push_back(v[i]);

        }

        sort(a1.begin(),a1.end());
        ll ans1 = accumulate(a1.begin(),a1.begin()+(r-l+1),0LL);
        vector<ll>a2;
        for(int i=l-1;i<n;i++){

            a2.push_back(v[i]);

        }

        sort(a2.begin(),a2.end());
        ll ans2 = accumulate(a2.begin(),a2.begin()+(r-l+1),0LL);

        cout<<min(ans1,ans2)<<endl;

    }
return 0;
}