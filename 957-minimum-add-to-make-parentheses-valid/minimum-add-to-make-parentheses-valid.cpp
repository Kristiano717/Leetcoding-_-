class Solution {
public:
    int minAddToMakeValid(string s) {
        int reqtoadd=0;
        int areopen=0;
        for( char c : s)
        {
            if( c=='(')
            {
                areopen++;
            }
            else
            {
                if(areopen>0)
                {
                    areopen--;
                }
                else
                {
                    reqtoadd++;
                }
            }
        }
        return reqtoadd+areopen;
    }
};