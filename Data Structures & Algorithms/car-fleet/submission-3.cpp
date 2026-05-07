class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<double,int>>time;
        stack<double>st;
        for(int i=0;i<position.size();i++)
        {
            double t=static_cast<double>(target-position[i])/speed[i];
            time.push_back({t,position[i]});
        }
        
         sort(time.begin(), time.end(), [](const pair<double, int>& a, const pair<double, int>& b) {
            return a.second > b.second;  // Compare positions in descending order
        });

        for(auto el:time){
            double t=el.first;
            if(st.empty() || t>st.top())
            {
                st.push(t);
            }
        }

        return st.size();

    }
};
