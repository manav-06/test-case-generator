#include "bits/stdc++.h"

using namespace std;

#define int long long

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
const int mod = 1e9 + 7;

string getFileName(int test_case)
{
    string fileName = "input/input";
    if (test_case < 10)
    {
        fileName += "0" + to_string(test_case);
    }
    else
    {
        fileName += to_string(test_case);
    }
    fileName += ".txt";
    return fileName;
}

void test_case()
{
    for (int test_case = 0; test_case <= 14; test_case++)
    {
        string fileName = getFileName(test_case);
        ofstream fout(fileName);

        fout << "hello " + fileName;

        // logic

        fout.close();
    }
}

signed main()
{
    fastio;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        test_case();
    }
}