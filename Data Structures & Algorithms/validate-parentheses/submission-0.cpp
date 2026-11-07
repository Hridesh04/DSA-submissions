class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // If it is an opening bracket, push it
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            // If it is a closing bracket
            else {
                // Closing bracket with no matching opening bracket
                if (st.empty()) {
                    return false;
                }

                char top = st.top();

                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        // Valid only if every opening bracket was closed
        return st.empty();

    }
};
