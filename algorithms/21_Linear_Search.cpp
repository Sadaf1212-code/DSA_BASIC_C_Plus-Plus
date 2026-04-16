#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    while(Q--) {
        int X;
        cin >> X;

        bool found = false;

        for(int i = 0; i < N; i++) {
            if(arr[i] == X) {
                found = true;
                break;
            }
        }

        cout << (found ? "found" : "not found") << endl;
    }

    return 0;
}
