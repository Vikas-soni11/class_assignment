class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mp;
    
        vector <int> arr(2,0);
    
            for (int i = 0;; ++i) {
                int x = nums[i];
                int need = target - x;
    
                if (mp.find(need) != mp.end() ) {
                    arr[0] = mp[need];
                    arr[1]=  i;
                    break;
                }
                mp[x] = i;
            }
            return arr;
        }
    };