//Q349. Intersection of Two Arrays

//Only logic part:

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(auto i=0;i<nums1.size();i++){
               for(auto j=0;j<nums2.size();j++){
                   if(nums1[i]==nums2[j] && find (v.begin(),v.end(),nums2[j]) == v.end()){
                       v.push_back(nums2[j]);
              }
           }
        }
        return v;
    }
};