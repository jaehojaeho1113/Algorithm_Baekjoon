#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    int N, k;
    string a;
    cin >> N;
    for (int i = 0;i < N;i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());


    while(v.size()!=0) {
        k = v[0].length();
        int flag = 0;
        string min = v[0];
        for (int j = 1;j < v.size();j++) {
            if (v[j].length() < k) {
                k = v[j].length();
                min = v[j];
                flag = j;
            }
        }
        cout << min << '\n';
        v.erase(v.begin() + flag);

    }
}