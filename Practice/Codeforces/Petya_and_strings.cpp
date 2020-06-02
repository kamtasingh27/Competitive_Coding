// https://codeforces.com/problemset/problem/112/A

#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define FoR(i, a) for(int i=0; i<a; i++)
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define MEM(a, b, n) memset(a, b, sizeof(a[0])*n)
#define pb push_back

const int MOD = 1e9+7;
const int SIZE_INT = 16;

void solve()
{
    string a, b;
    cin>>a>>b;

    for_each(a.begin(), a.end(), [](char & c){
	    c = ::tolower(c);
    });

    for_each(b.begin(), b.end(), [](char & c){
	    c = ::tolower(c);
    });

    bool flag=true;

    FoR(i, a.length()){
        if(a[i] > b[i]){
            cout<<"1\n";
            flag = false;
            break;
        }
        if(a[i] < b[i]){
            cout<<"-1\n";
            flag = false;
            break;
        }
    }

    if(flag)
        cout<<"0\n";
}

int main()
{
    //two lines to speed-up
    cin.tie(0);
    ios::sync_with_stdio(false);

    solve();

    // int testCases;
    // cin >> testCases;

    // while (testCases--)
    // {
    //     solve();
    // }

    return 0;
}