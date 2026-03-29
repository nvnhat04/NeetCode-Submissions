class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        for(char c : s){
            if (c == '(' || c == '[' || c == '{') {
                st.push_back(c);
            } else{
                if (st.empty()) return false;
                // cout << c << " " << st.back() << "\n";
                if(c == ')' && st.back() != '('){
                    return false;
                } 
                else if(c == ']' && st.back() != '['){
                    return false;
                } 
                else if(c == '}' && st.back() != '{'){
                    return false;
                } 
                else{
                    st.pop_back();
                }
            }
        }

        return st.empty();
    }
};
