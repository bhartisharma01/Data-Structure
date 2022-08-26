// Given a string s, find the length of the longest substring without repeating characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

// Using optimized sliding window approach

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_map<char, int> mpp;

        int len = 0, left = 0, right = 0;
        // int n = s.size();
        // if (n == 0)
        return 0;
        while (right < n)
        {

            if (mpp.find(s[right]) != mpp.end())
            {

                left = max(mpp[s[right]] + 1, left);
            }
            mpp[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }

        return len;
    }
};

// Time Complexity: O( N )

// Space Complexity: O(N) where N represents the size of HashSet where we are storing our elements