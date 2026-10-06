class Solution {
public:
    int minInsertions(string s) {

        stack<char> open;
        int operations = 0;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(') {
                open.push('(');
            }
            else {

                // We need another ')' to make a pair
                if(i + 1 < s.length() && s[i + 1] == ')') {
                    i++;
                }
                else {
                    // Only one ')' available
                    operations++;
                }

                // Now we have a complete "))"
                if(!open.empty()) {
                    open.pop();
                }
                else {
                    // No '(' available, so insert '('
                    operations++;
                }
            }
        }

        // Every remaining '(' needs two ')'
        operations += open.size() * 2;

        return operations;
    }
};