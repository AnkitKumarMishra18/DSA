class TimeMap {
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mapKey2Time[key].insert(timestamp);
        kv[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        auto it = mapKey2Time[key].upper_bound(timestamp);
        if(it == mapKey2Time[key].begin()) return "";
        it--;
        //printf("%d\n", *it);
        return kv[key][*it];
    }
private:
    unordered_map<string, ::set<int> > mapKey2Time;
    unordered_map<string, unordered_map<int, string>> kv;
};