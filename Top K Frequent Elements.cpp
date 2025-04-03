class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map <int ,int > mp;
    
            for(int i= 0;i<nums.size();i++){
                mp[nums[i]]++;
            }
    
            vector <pair<int,int>> vec(mp.begin(),mp.end());
            vector <int> ans;
    
            sort(vec.begin(), vec.end(),[] (const pair<int , int> a , const pair<int,int> b){
                return a.second>b.second;
            });
    
            for(int i=0;i<k;i++){
                ans.push_back(vec[i].first);
            }
    
            return ans;
        }
    };