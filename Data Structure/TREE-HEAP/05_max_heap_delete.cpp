#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int>& v, int x) {
    v.push_back(x);
    int cur = v.size() - 1;

    while(cur != 0) {
        int parent = (cur - 1) / 2;
        if(v[parent] < v[cur]) {
            swap(v[parent], v[cur]);
            cur = parent;
        } else break;
    }
}

void delete_heap(vector<int>& v) {
    if(v.empty()) return;

    v[0] = v.back();
    v.pop_back();

    int cur = 0;

    while(true) {
        int left = cur*2 + 1;
        int right = cur*2 + 2;
        int largest = cur;

        if(left < v.size() && v[left] > v[largest])
            largest = left;
        if(right < v.size() && v[right] > v[largest])
            largest = right;

        if(largest == cur) break;

        swap(v[cur], v[largest]);
        cur = largest;
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

    delete_heap(v);

    for(int val : v)
        cout << val << " ";
}
