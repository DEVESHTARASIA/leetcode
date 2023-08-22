class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;
        for( char a : s ) {
            if ( valid.empty() ) {
                if ( a == ')' || a == '}' || a == ']' ){
                    return false;
                }
                valid.push(a);
            }
            else {
                if ( a-valid.top() == 1 || a-valid.top() == 2 ) {
                    valid.pop();
                }
                else {
                    valid.push(a);
                }
            }
        }
        return valid.empty();
    }
};