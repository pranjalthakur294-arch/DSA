class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        char c;
        for(int i=0;i<str.length();i++){
            char c=str[i];
        if(c=='(' || c=='{' || c=='[' ) st.push(c);
    
        if ( c==')'){
            if(st.empty() || st.top()!='(') return false;
            st.pop();
        }
        if (c=='}'){
            if(st.empty()|| st.top()!='{')return false;
            st.pop();

        }
        if (c==']'){
            if(st.empty() || st.top()!='[') return false;
            st.pop();
        }
    }
        return st.empty();
    }
};