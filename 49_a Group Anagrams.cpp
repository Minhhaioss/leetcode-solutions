class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        vector<pair<string ,int>> str_idx ;
        string temp = "";

        for (int i=0; i< strs.size(); i++) {
            temp = strs[i];
            sort(temp.begin(),temp.end());
            str_idx.push_back({temp,i});
        }
        sort(str_idx.begin(),str_idx.end());
        int j=0;
        for (auto it = str_idx.begin(); it != str_idx.end();it++) {
            if ( it == str_idx.begin()) {
                ret.push_back({});                
                ret[0].push_back(strs[it->second]);
                temp = it->first;
            }
            else if ( (it ->first).compare(temp) ==0) ret[j].push_back(strs[it->second]);
            else {
                temp = it->first;
                ret.push_back({});
                j++;
                ret[j].push_back(strs[it->second]);
            }
        } 
        return ret;
    }
};