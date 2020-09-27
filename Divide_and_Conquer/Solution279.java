public class Solution279 {
    public static void main(String[] args) {
        Solution279 s = new Solution279();
        System.out.println(s.numSquares(51));
    }


    public int numSquares(int n) {
        if(n <= 3) return n;
        int[] dp = new int[n+1];
        for(int i = 1; i <= n; i++) {
            int x = (int)Math.sqrt(i);//相当于向下取整了
            if( x * x == i ) {
                dp[i] = 1;
                continue;
            }
            int m = Integer.MAX_VALUE, a;
            for(int j = 1, k = 1; j < i; k++, j = k * k) {
                if(j == 1) a = i;
                else a = dp[j] + dp[i-j];
                m = Math.min(m, a);
            }
            dp[i] = m;
        } 
        return dp[n];
    }
}
