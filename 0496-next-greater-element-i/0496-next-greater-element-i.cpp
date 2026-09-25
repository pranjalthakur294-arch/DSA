class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack<int>st;
        vector<int> num3;

        for(int i=0;i<nums2.size();i++){
            int current=nums2[i];

        if (st.empty()) st.push(current);
        else{
       
            while(!st.empty() && current > st.top()){
                m[st.top()]=current;
                st.pop();
                    }
            st.push(current);
        }
    }
   while(!st.empty()){
    m[st.top()]=-1;
    st.pop();
   }

   for(int j=0;j<nums1.size();j++){
        int trial=nums1[j];
        num3.push_back(m[trial]);
   }

   return num3;
    }
};