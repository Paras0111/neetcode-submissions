class Solution {
public:
    int countSubstrings(string s) {
        int len =  s.size();
        if (len == 0)
            return 0;
        int sub_count = 0;

        for (int i = 0; i < len ; i++)
        {
            int right = i;
            int left = i;
            while (right < len && left >= 0 && s[left] == s[right])
            {
                sub_count++; 
                right++;
                left--;
            }
            right = i + 1;
            left = i;
            
            while ( right < len && left >= 0 && s[left] == s[right])
            {
                sub_count++;
                right++;
                left--;
            }
            //sub_count++;
        }
        return sub_count;

    }
};
