class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> sol;
        int ctr = 0;
        for (int i=0;i<n;i++){ 
            // lets assume 1 as first element, if after 1 we receive a single bigger element then 1 gets popped itself
            // but if we get smaller elements, then 1 at front, thus we will need to pop explicitly
            while (!dq.empty() && dq.front()<=i-k) dq.pop_front();
            while (!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if (i>=k-1) sol.push_back(nums[dq.front()]);
            
        }
        return sol;      
    }
};
