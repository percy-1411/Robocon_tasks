class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0, u = 0;
        for(char move: moves){
            if(move == 'R'){
                r++;
            }else if(move == 'U'){
                u++;
            }else if(move == 'L'){
                r--;
            }else if(move == 'D'){
                u--;
            }
        }
        if(r == 0 && u == 0){
            return true;
        }else{
            return false;
        }

    }
};
