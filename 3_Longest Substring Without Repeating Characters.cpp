class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length =0;
        int sub_length=0;
        bool duplicate = false;
        int s_length= s.length();

        if (s_length <=1) max_length= s_length;
        else {
            max_length =1;
            for ( int i=0; i< s_length-1;i++) {
                sub_length=1;
                duplicate = false;
                for ( int j = i+1; (j < s_length) && (duplicate== false) ; j++) {
                    for ( int k =i; k < j ; k++) {
                        if (s[j] == s[k]) {
                            duplicate = true;
                            break;
                        }         
                    }
                    if (duplicate ==  false) {
                        sub_length ++;
                        if (sub_length > max_length) max_length =  sub_length;
                    }                    
                }
            }

        }
        return max_length;
    }
};