class Solution {
  public:
      string expandAroundCenter(const string &s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
    string longestPalin (string s) {
        if (s.empty()) return "";
        string longest;
        for (int i = 0; i < s.length(); i++) {
            string oddPal = expandAroundCenter(s, i, i);
            if (oddPal.length() > longest.length()) {
                longest = oddPal;
            }
            string evenPal = expandAroundCenter(s, i, i + 1);
            if (evenPal.length() > longest.length()) {
                longest = evenPal;
            }
        }
        return longest;
    }
};
