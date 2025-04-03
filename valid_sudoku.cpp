class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
               
    
        // cheking if rows are valid
    
        map<char,int> fr;
    
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                fr[board[i][j]]++;
                }
            }
    
            for(auto it=fr.begin(); it!=fr.end();it++){
                if(it->second>1) return false;
            }
            fr.clear();
        }
    
    
        // cheking columm by swapping i and j
          for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i] != '.'){
                fr[board[j][i]]++;
                }
            }
    
            for(auto it=fr.begin(); it!=fr.end();it++){
                if(it->second>1) return false;
            }
            fr.clear();
        }
    
        // cheking for boxes
    
        int startx=0,starty=0;
    
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
    
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                      if(board[startx+k][starty+l]!='.')fr[board[startx+k][starty+l]]++;
                    }
                }
    
                  for(auto it=fr.begin(); it!=fr.end();it++){
                if(it->second>1) return false;
            }
            fr.clear();
            starty+=3;
    
            }
    
            starty=0;
            startx+=3;
        }
    
        return true;
        }
    };
    
    /*
    
    check for all rows then columm and 3*3 blocks
    rows and columm easy 
    for 3*3 blocks start with 0,0 and then add 3 in coordinates
    */
