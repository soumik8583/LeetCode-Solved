class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //sort(nums1.begin(), nums1.end());
        //sort(nums2.begin(), nums2.end());
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            v.push_back(nums1[i]);
        }
         for(int i=0;i<nums2.size();i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(), v.end());
        /*for(int i=0;i<nums2.size()+nums2.size();i++){
            cout<<v[i]<<" ";
        }*/
        double mid;
        double midIndx=v.size()/2;
        //cout<<" "<<midIndx;
        if(v.size()%2 ==0){
            //cout<<v[midIndx-1]<<" "<<v[midIndx];
            return (double(v[midIndx-1])+double(v[midIndx]))/2;
            
            //return mid;
        }
        else {
            return v[midIndx];    
        }
        return 0;
    }
};