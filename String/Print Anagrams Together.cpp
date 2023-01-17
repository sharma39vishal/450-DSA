  struct cmp{
      bool operator()(vector<string>&p1,vector<string>&p2){
          return p1[0]<p2[0];
      }
  };

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& nums) {
        map<vector<int>,vector<string>>mp;
        for(int i=0;i<nums.size();i++){
            vector<int>hash(26,0);
            for(int j=0;j<nums[i].length();j++){
                hash[nums[i][j]-'a']++;
            }
            mp[hash].push_back(nums[i]);
        }
        priority_queue<vector<string>,vector<vector<string>>,cmp>pq;
        vector<vector<string>>ans;
        for(auto it:mp){
            vector<string>tmp=it.second;
            // sort(tmp.begin(),tmp.end());
            pq.push(tmp);
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};