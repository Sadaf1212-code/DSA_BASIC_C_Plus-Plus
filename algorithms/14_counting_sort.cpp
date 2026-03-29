#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s; // Input string

    int frq[26] = {0};

    // Count frequency
    for (char c : s)
    {
        frq[c - 'a']++;
    }

    // Print sorted characters
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
    }

    return 0;
}
