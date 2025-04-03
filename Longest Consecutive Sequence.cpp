class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
                map <int ,int> mp;
                int ans=0;
                int currlen=1;
                int currval;
    
                for(int i =0;i<nums.size();i++){
                    mp[nums[i]]++;
                }
    
    
            auto it = mp.begin(); 
            if(it!=mp.end()){
            currval = it->first;
            ++it; 
          
            for (; it != mp.end(); ++it) {
                if(it->first==currval+1){
                        currval++;
                        currlen++;
                    }
                    else{
                        currval=it->first;
                        ans=max(ans,currlen);
                        currlen=1;
                    }
                }
                  ans=max(ans,currlen);
            }
              
                return ans;
               
        }
    };