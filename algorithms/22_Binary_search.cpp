#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    while(Q--) {
        int X;
        cin >> X;

        int low = 0, high = N - 1;
        bool found = false;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(arr[mid] == X) {
                found = true;
                break;
            }
            else if(arr[mid] > X) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        cout << (found ? "found" : "not found") << endl;
    }

    return 0;
}
