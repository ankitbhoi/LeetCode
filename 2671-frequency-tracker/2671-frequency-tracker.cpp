class FrequencyTracker {
public:
    unordered_map<int,int>mp;
    unordered_map<int,int>mp2;
    FrequencyTracker() {
    }
    
    void add(int number) {
        if(mp.find(number)!=mp.end()){
            mp2[mp[number]]--;
        }
        mp[number]++;
        mp2[mp[number]]++;
    }
    
    void deleteOne(int number) {
        if(mp.find(number)!=mp.end() && mp[number]>0){
            mp2[mp[number]]--;
            mp[number]--;
            mp2[mp[number]]++;
        }
    }
    
    
    bool hasFrequency(int frequency) {
        if(mp2[frequency]>0){
            return true;
        }
        return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */