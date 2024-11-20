class Solution{
    static int countMin(String str){
        int n=str.length();
        int[][] memo =new int[n+1][n+1];
        for(int[] row:memo)
            Arrays.fill(row, -1);
        return getMinPelinInsAns(str, 0, n-1, memo);
    } 
    static int getMinPelinInsAns(String str, int l, int h, int[][] memo){
        if(l>h) return Integer.MAX_VALUE;
        if(l==h) return 0;
        if(l==h-1) return (str.charAt(l)==str.charAt(h)) ?0:1;
        
        if(memo[l][h]!=-1)
            return memo[l][h];
        
        if(str.charAt(l)==str.charAt(h))
            return memo[l][h]=getMinPelinInsAns(str,l+1,h-1,memo);
        return memo[l][h]=Math.min(getMinPelinInsAns(str,l+1,h,memo),getMinPelinInsAns(str,l,h-1,memo))+1;
    }
}

/*Form a palindrome
Difficulty: MediumAccuracy: 45.4%Submissions: 113K+Points: 4
Given a string, find the minimum number of characters to be inserted to convert it to a palindrome.

Examples :

Input: str = "abcd"
Output: 3
Explanation: Inserted character marked with bold characters in dcbabcd, here we need minimum three characters to make it palindrome.
Input: str = "aa"
Output: 0
Explanation: "aa" is already a palindrome.
Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(n2)

Constraints:
1 ≤ |str| ≤ 500
str contains only lowercase alphabets.*/
