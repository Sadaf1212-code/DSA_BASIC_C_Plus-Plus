#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<long long> v(N);
    for(int i = 0; i < N; i++) cin >> v[i];

    vector<long long> pref(N);
    pref[0] = v[0];

    for(int i = 1; i < N; i++) {
        pref[i] = pref[i-1] + v[i];
    }

    while(Q--) {
        int L, R;
        cin >> L >> R;
        L--, R--;

        if(L == 0) cout << pref[R] << endl;
        else cout << pref[R] - pref[L-1] << endl;
    }

    return 0;
}
