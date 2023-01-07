class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
     sort(nums.begin(),nums.end());
     int n=nums.size();
     vector<vector<int>>ans;
     for(int i=0;i<n;i++){
         int f=nums[i][0];
         int s=nums[i][1];
         while(i<n-1&&s>=nums[i+1][0]){
             i++;
             s=max(nums[i][1],s);
         }
         ans.push_back({f,s});
     }   
     return ans;
    }
};