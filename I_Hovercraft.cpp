// Contest Platform: algo.codemarshal.org
// Contest Name : 2021 ICPC Asia Dhaka Regional Online Preliminary Contest Hosted by BUBT 
// Problem Name : I_Hovercraft.cpp
// Author: MD.Shahadat Hossain Bhuian
// Codeforces userName : __Shahadat__
// CodeChef userName : shahadat_43
//---------------------------------------------

// Libary 
#include<bits/stdc++.h>
using namespace std;

// Type definition
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;

// Loop 
#define loop(i,Start,End,Inc) for(ll i=Start;i<=End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)

// Printing statement
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define nl cout<<"\n"
#define printArray(v) for(auto k:v)cout<<k<<" "

// STL operation 
#define pb push_back
#define in insert
#define all(v) v.begin(),v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v),reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

// Precalculation
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

// Solution Start Here
void solve() {
    
}

int main()
{
    Faster;
    float l, w;
    while (1) {
        cin >> l >> w;
        if (l == 0 && w == 0) break;
        float dis, ans = l + w;
        for (float i = l; i >= l / 2; i = (i - 0.001)) {
            float go = sqrt(i * i - (l - i) * (l - i));
            dis = w - go + (i + i);
            ans = min(ans, dis);
        }
        printf("%.4f\n", ans);
    }
    return 0;
}