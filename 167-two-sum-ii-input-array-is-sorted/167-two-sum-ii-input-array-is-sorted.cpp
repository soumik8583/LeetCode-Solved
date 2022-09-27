class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int> v;
        int l=0,r=n-1;
        while(l<=r){
            int sum = nums[l]+ nums[r];
            if(sum==target){
                v.push_back(l+1);
                v.push_back(r+1);
                return v;
            }
            else if(sum<target){
                l++;
            }
            else r--;
                
        }
        return {0,0};
    }
  
};