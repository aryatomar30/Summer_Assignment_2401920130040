class Solution {
public:
    int largestRectangleAreaOptimal(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int pse = -1, maxi = 0;
        for (int i=0;i<n;i++){
            while (!st.empty() && heights[i]<heights[st.top()]){
                //means current element is next smaller element of top
                //thus after poping the next st.top will be the pse of the removed top
                int val = heights[st.top()];
                st.pop();
                if (st.empty()) pse = -1;
                else pse = st.top();
                maxi = max(maxi,val*(i-pse-1));
            }
            st.push(i);
        }
        int nse = n;
        while (!st.empty()){
            int val = heights[st.top()];
            st.pop();
            if (st.empty()) pse = -1;
            else pse = st.top();
            maxi = max(maxi,val*(nse-pse-1));
        }
        return maxi;
    }
    vector<int> GetNSEIdx(vector<int>& arr){
        stack<int> st;
        int n = arr.size();
        vector<int> nse(n);
        for (int i=n-1;i>=0;i--){
            while (!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if (st.empty()) nse[i] = n;
            else nse[i] = st.top();
            st.push(i);
        }
        return nse;
    }
    vector<int> GetPSEIdx(vector<int>& arr){
        stack<int> st;
        int n = arr.size();
        vector<int> pse(n);
        for (int i=0;i<n;i++){
            while (!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if (st.empty()) pse[i] = -1;
            else pse[i] = st.top();
            st.push(i);
        }
        return pse;
    }
    int largestRectangleAreaO5N(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse = GetNSEIdx(heights);
        vector<int> pse = GetPSEIdx(heights);
        int maxi = 0;
        for (int i=0;i<n;i++){
            int val = ((i-pse[i])+(nse[i]-i)-1)*heights[i];
            maxi = max(val,maxi);
        }
        return maxi;   
    }
    int largestRectangleArea(vector<int>& heights) {
        return largestRectangleAreaOptimal(heights);
    }
};
