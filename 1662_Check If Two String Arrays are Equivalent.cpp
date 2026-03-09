class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int idx_2 =0;
        int i2=0;
        int length1=0,length2=0;
        for (const auto& v:word1) length1+=v.length();
        for (const auto& v:word2) length2+=v.length();
        if (length1 != length2) return false;
        for (auto it1 = word1.begin(); it1 != word1.end(); it1++) {
           for (int i1 = 0; i1 < (*it1).length(); i1++) {
            if (idx_2 >= word2.size()) {
                return false;
            }
            if ( (*it1)[i1] == word2[idx_2][i2]) {
                i2++;
                if (i2>= word2[idx_2].length()) {
                    idx_2++;
                    i2=0;
                }
            }
            else return false;
           }
        }
        return true;
    }
};