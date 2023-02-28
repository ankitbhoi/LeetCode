class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            
            int hr= stoi(curr.substr(0,2));
            int min= stoi(curr.substr(3,2));
            
            int totalMin=(hr*60)+min;
            
            minutes.push_back(totalMin);
        }
        sort(minutes.begin(),minutes.end());
        int mini=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++){
            int diff=(minutes[(i+1)%minutes.size()]-minutes[i]);
            mini=min(mini,diff);
        }
        minutes[0]+=1440;
        mini=min(mini,minutes[0]-minutes[minutes.size()-1]);
        return mini;
    }
};