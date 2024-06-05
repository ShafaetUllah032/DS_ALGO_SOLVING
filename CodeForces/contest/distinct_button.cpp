#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../contest/input.txt", "r", stdin);
    freopen("../contest/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,x,y,a,b;
    cin >> t;
    int U,L,R,D;
    while (t--)
    {
        U=0;
        L=0;
        R=0;
        D=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            if(x>0)
            {
                R=1;
            }
            else if(x<0)
            {
                L=1;
            }
            if(y>0)
            {
                U=1;
            }
            else if(y<0)
            {
                D=1;
            }

        }
        if(D&R&L&U)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/