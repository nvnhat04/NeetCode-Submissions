class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        for(char c : s){
            if(st.empty()){
                st.push_back(c);
            } else{
                cout << c << " " << st.back() << "\n";
                if(c == ')' && st.back() == '('){
                    st.pop_back();
                } 
                else if(c == ']' && st.back() == '['){
                    st.pop_back();
                } 
                else if(c == '}' && st.back() == '{'){
                    st.pop_back();
                } 
                else{
                    st.push_back(c);
                }
            }
        }
        for(char c : st){
            cout << c << " ";
        }
        if(st.empty()) return true;
        return false;
    }
};
