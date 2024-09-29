class Solution {
public:
    int maxProduct(vector<int>& nums) {
          long long pre=1,suf=1;
        long long maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
            
            if(pre*10<INT_MAX)
             pre=pre*nums[i];
            
            maxi=max(maxi,pre);
            if(pre==0){
                pre=1;
            }
        }
         for(int i=nums.size()-1;i>=0;i--){
            
            if(suf*10<INT_MAX)
                suf=suf*nums[i];

            maxi=max(maxi,suf);
            if(suf==0){
                suf=1;
            }
        }
         return maxi;
    }
};
