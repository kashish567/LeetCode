class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word;
        for(char ch : s) {
            if(ch == ' ' && word.length()) {
                st.push(word);
                word = "";
            }
            else if(ch != ' ')
                word += ch;
        }
        string res;
        if(word.length())
            res = word;
        else {
            res = st.top();
            st.pop();
        }
        while(!st.empty()) {
            res += " " + st.top();
            st.pop(); 
        }
        return res;
        //return res.substr(0, res.size() - 1);  
    }
};