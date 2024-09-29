class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> brr(arr); 
        sort(brr.begin(), brr.end());  
        
        unordered_map<int, int> mp;  
        int temp = 1; 
        
        for (int i = 0; i < n; i++) {
            if (mp[brr[i]] == 0) {  
                mp[brr[i]] = temp; 
                temp++; 
            }
        }
        
         vector<int> result(n);
        for (int i = 0; i < n; i++) {
            result[i] = mp[arr[i]]; 
        }
        
        return result;  
    }
};
