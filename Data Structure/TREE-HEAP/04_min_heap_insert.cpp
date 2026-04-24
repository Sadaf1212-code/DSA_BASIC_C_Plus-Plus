#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int>& v, int x) {
    v.push_back(x);

    int cur = v.size() - 1;

    while(cur != 0) {
        int parent = (cur - 1) / 2;

        if(v[parent] > v[cur]) {
            swap(v[parent], v[cur]);
            cur = parent;
        } else break;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    for(int val : v)
        cout << val << " ";
}
