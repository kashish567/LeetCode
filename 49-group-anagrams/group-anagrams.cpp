class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string s:strs){
            string key= s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> grpanagrams;
        for(auto keyval :mp){
            grpanagrams.push_back(keyval.second);
        }
        return grpanagrams;
    }
};