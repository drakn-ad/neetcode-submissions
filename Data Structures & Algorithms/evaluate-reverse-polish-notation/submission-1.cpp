class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto& i:tokens){
            if(i!="+"&&i!="-"&&i!="*"&&i!="/"){
                st.push(stoi(i));
            }
            if(i=="+"||i=="-"||i=="*"||i=="/"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                if(i=="+") st.push(second+first);
                if(i=="-") st.push(second-first);
                if(i=="*") st.push(second*first);
                if(i=="/") st.push(second/first);
            }
            
        }
        return st.top();
    }
};
