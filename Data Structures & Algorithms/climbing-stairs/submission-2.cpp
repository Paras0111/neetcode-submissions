class Solution {
public:
    int climbStairs(int n) {
        vector<int>count(n + 1, 0);
        if (n==0)
           return 0; 
        count[0] = 0;
        if (n == 1)
            return 1; 
        count[1] = 1; 
        if (n == 2)
            return 2; 
        count[2] = 2;
        for(int i = 3 ; i < n+1; i++)
        {
            count[i] = count[i-1] + count[i-2];

        }
        return count.at(n);


    }
};
