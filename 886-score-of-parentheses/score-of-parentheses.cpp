class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        int open = 0;
        for( int i  =0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else
            {
                open--;
            }

            if(s[i]==')' && s[i-1]=='(')
            {
                score = score + pow(2 , open); // score is the summation of the value of x where x is the 2^(no of open parathnesis)
            }

        }
return score;

    }
};