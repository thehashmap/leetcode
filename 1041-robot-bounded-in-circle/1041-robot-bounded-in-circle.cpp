class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0 , y = 0 , dir = 0;
        for(auto c : instructions){
            if(c == 'R'){
                dir = (dir + 1) % 4;
            }
            if(c == 'L') dir = (dir + 3) % 4;
            if(c == 'G'){
                if(dir == 0) y++;
                if(dir == 1) x++;
                if(dir == 2) y--;
                if(dir == 3) x--;
            }
        }
        if(x == 0 && y == 0) return true;
        if(dir != 0) return true;
        return false;
    }
};