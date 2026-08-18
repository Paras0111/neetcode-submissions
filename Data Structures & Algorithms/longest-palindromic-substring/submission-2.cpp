class Solution {
public:
    string longestPalindrome(string s) {
        /***
            so this is the substring, what can be done here is to make it into something else.
        **/
        int len = s.size();
        if (len == 0)
            return "";
        int max_index = 0; 
        int max_len = 1;

        for (int i = 0; i < len ; i ++)
        {
            int left = i;
            int right = i;

            while (left >= 0 && right < len && s[left] == s[right])
            {
                if (right - left + 1 > max_len)
                {
                    max_index = left;
                    max_len = right - left + 1;
                }
                left--;
                right++;
                
            }
            left = i;
            right = i + 1 ;
            while(left >= 0 && right < len && s[left] == s[right])
            {
                if (right - left + 1 > max_len)
                {
                    max_index = left; 
                    max_len = right-left + 1;
                }
                left--;
                right++;
        
            }
            
        }
        // the idea is to make dual loops 
        return s.substr(max_index, max_len);
    }
};
