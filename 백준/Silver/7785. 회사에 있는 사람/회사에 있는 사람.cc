#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<string, int>list;
vector<string> a;
bool compare(string a, string b) {
    return a > b;
}

int main() {
    string name, check;
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> name >> check;
        if (check == "enter") {
            list.insert({ name,1 });
        }
        else if (check == "leave") {
            list.erase(name);
        }
    }
    
    for (auto j : list) a.push_back(j.first);
    sort(a.begin(), a.end(),compare);
    for (string answer : a) cout << answer << '\n';
}