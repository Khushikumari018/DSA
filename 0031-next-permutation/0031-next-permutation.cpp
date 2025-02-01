class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int index=-1;
       int n=nums.size();
       for(int i=n-1;i>0;i--)
       {
         if(nums[i]>nums[i-1])
         {
            index=i-1;
            break;
         }
       }
         if(index==-1)
         {
            sort(nums.begin(),nums.end());
            return;
         }
         sort(nums.begin()+index+1,nums.end());
         for(int i=index+1;i<n;i++)
         {
            if(nums[i]>nums[index])
            {
                swap(nums[i],nums[index]);
                break;
            }
         }
        
  }
};