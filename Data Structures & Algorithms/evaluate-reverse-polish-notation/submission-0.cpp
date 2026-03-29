class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> nt;
       for(string s : tokens){
        if(s == "-"){
            if(!nt.empty()){
                int num1 = nt.back();
                nt.pop_back();
                int num2 = nt.back();
                nt.pop_back();
                nt.push_back(num2 - num1);
            }
        } else if(s == "+"){
            if(!nt.empty()){
                int num1 = nt.back();
                nt.pop_back();
                int num2 = nt.back();
                nt.pop_back();
                nt.push_back(num2 + num1);
            }
        } else   if(s == "*"){
            if(!nt.empty()){
                int num1 = nt.back();
                nt.pop_back();
                int num2 = nt.back();
                nt.pop_back();
                nt.push_back(num2 * num1);
            }
        } else if(s == "/"){
            if(!nt.empty()){
                int num1 = nt.back();
                nt.pop_back();
                int num2 = nt.back();
                nt.pop_back();
                nt.push_back(num2 / num1);
            }
        } else{
            nt.push_back(stoi(s));
        }
       }
        return nt.back();
    }
};
