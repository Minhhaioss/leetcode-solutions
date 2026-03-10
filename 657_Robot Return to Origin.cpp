class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        int n = moves.length();
        if (n %2 !=0) return false;
        for ( int i=0; i< n; i++) {
            switch (moves[i]) {
            case 'L':
                x++;
                break;
            case 'R':
                x--;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            default:
                return false;
            }
        }
        return ((x==0)&&(y==0));
    }
};