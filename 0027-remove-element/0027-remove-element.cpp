class Solution {
public:
    void swapp(int *a, int *b){
        int t = *a;
        *a=*b;
        *b=t;
    }
    int removeElement(vector<int>& nums, int val) {
        int j=nums.size()-1, i=0;;
        while (i<j){
        
          //  if(nums[j]==val)j--;
             if(nums[i]==val) {
                if(nums[j]!=val){
                swapp(&nums[i], &nums[j]);
                i++;j--;
                }
                else j--;
            }
            else i++;
            
        }
        int k=0;
        for(int l=0;l<nums.size();l++){
            if(nums[l]==val){
                break;
            }
            else k++;
        }
        return k;
    }
};