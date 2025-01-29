class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //  int n=nums1.size();
        //  int m=nums2.size();
        //  vector<int> nge(n,-1);
        //  for(int i=0;i<n;i++)
        //  {
        //     int j;
        //     for(j=0;j<m;j++)
        //     {
        //         if(nums1[i]==nums2[j])
        //         {
        //             break;
        //         }
        //     }
        //     for(int k=j+1;k<nums2.size();k++)
        //     {
        //         if(nums2[k]>nums1[i])
        //         {
        //             nge[i]=nums2[k];
        //             break;
        //         }
        //     }
        //  }
        //  return nge;
        unordered_map<int,int> mp;
        stack<int> st;
        vector<int> ans;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--)
        {
            if(!st.empty()&&st.top()<=nums2[i])
            st.pop();
            if(st.empty())
            mp[nums2[i]]=-1;
            else 
            mp[nums2[i]]=st.top();
            st.push(nums2[i]);

        }
        for(int i=0;i<nums1.size();i++)
        ans.push_back(mp[nums1[i]]);
        return ans;
        

    }
};