class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> mh;
    int k;

    KthLargest(int k, vector<int>& nums) {
       this->k=k;

       for(int val:nums)
       {
        add(val);
       }
    }


    
    int add(int val) {
        mh.push(val);
        
        // If heap size exceeds k, pop the smallest element
        if (mh.size() > k) {
            mh.pop();
        }

        // Top element is the k-th largest
        return mh.top();
    }
};
