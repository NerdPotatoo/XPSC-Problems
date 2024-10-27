#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MOD 1000000007
#define int long long int

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define B begin()
#define E end()
#define all(x) x.B, x.E

int32_t main()
{
    fastIO;

    pair<string, int> students = { "Sami", 1583 };
    cout << students.first << " " << students.second;

    auto [name, roll] = students;
    cout << name << " " << roll << '\n';

    return 0;
}