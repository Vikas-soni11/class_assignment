class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map <char ,int > fr;
    
            for(int i=0;i<s.length();i++){
                fr[s[i]]++;
            }
    
            for(int i=0;i<s.length();i++){
                if(fr[s[i]]==1){
                    return i;
                }
            }
    
            return -1; 
        }
    };