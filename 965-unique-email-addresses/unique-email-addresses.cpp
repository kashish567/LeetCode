class Solution {
public:
  int numUniqueEmails(vector<string>& emails) {
    unordered_set<string> uniqueEmails;
    
    for (const string& email : emails) {
        string local;
        string domain;
        bool domainStarted = false;
        bool ignoreRest = false;
        
        for (char c : email) {
            if (c == '@') {
                domainStarted = true;
            }
            if (domainStarted) {
                domain += c;
            } else {
                if (c == '+') {
                    ignoreRest = true;
                }
                if (c == '.' || ignoreRest) {
                    continue;
                }
                local += c;
            }
        }
        
        uniqueEmails.insert(local + domain);
    }
    
    return uniqueEmails.size();
}
};