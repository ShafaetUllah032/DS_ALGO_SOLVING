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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,x,y,a,b;
    cin >> t;
    vl lst,cst,tmp;
    map<int,char>l,r;
    stack<int>st;
    while (t--)
    {
        cin>>n;
        //cout<<"new input"<<endl;
        fo(x,n)
        {
            cin>>a;
            lst.pb(a);
            l[a]='l';
        }
        fo(x,n)
        {
            cin>>a;
            lst.pb(a);
            l[a]='r';
        }
        sort(lst.begin(),lst.end());
        fo(x,n)
        {
            cin>>a;
            cst.pb(a);
        }
        sort(cst.begin(),cst.end(),greater<int>());

        for(int i=0;i<lst.size();i++)
        {
            x=lst[i];
            //cout<<"i "<<i<<" ";
            if(l[x]=='l')
            {
                st.push(x);
                //cout<<"Pushed "<<st.top()<<endl;
            }
            else if(l[x]=='r'){
                y=st.top();
                st.pop();
                //cout<<"poped "<<y<<" "<<x<<endl;
                a=(x-y);
                tmp.pb(a);
            }
        }
        sort(tmp.begin(),tmp.end());
        ll sum=0;
        for(int i=0;i<tmp.size();i++)
        {
            //cout<<tmp[i]<<" ";
            sum += (tmp[i]*cst[i]);
        }
        //cout<<endl;
        lst.clear();
        cst.clear();
        tmp.clear();
        l.clear();
        cout<<sum<<endl;
        
    }
    return 0;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/