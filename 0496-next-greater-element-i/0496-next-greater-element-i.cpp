class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         int n=nums1.size();
         int m=nums2.size();
         vector<int> nge(n,-1);
         for(int i=0;i<n;i++)
         {
            int j;
            for(j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    break;
                }
            }
            for(int k=j+1;k<nums2.size();k++)
            {
                if(nums2[k]>nums1[i])
                {
                    nge[i]=nums2[k];
                    break;
                }
            }
         }
         return nge;
    }
};