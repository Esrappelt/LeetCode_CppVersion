#include<bits/stdc++.h>
using namespace std;
 
class TimeMap {
public:
    map<string,map<int,string>> time;
    TimeMap() {}
    void set(string key, string value, int timestamp) {
        time[key][timestamp] = value;
    }
    string get(string key, int timestamp) {
        auto index = time[key].upper_bound(timestamp,greater<int>());
        return index == time[key].begin() ? "" : (--index)->second;
    }
};

int main() {

    return 0;
}
