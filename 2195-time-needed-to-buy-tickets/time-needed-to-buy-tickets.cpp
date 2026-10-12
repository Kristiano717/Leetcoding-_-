class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int time =0;
        for( int i=0;i<tickets.size();i++)
        {
            q.push(i);//pushing all the values into the queue,


        }
        while(!q.empty())
        {
            int person = q.front();
            q.pop();
            tickets[person]--;
            time++;
            if( person == k and tickets[person]==0)
            {
                break;
                
            }
            if( tickets[person]>0)
            {
                q.push(person);
            }
        }
        return time;
    }
};