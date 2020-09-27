public class Solution931 {
    public static void main(String[] args) {
        Solution931 s = new Solution931();
        int[][] A = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        int res = s.minFallingPathSum(A);
        System.out.println(res);
    }
    public int minFallingPathSum(int[][] A) {
        int n = A.length, res = Integer.MAX_VALUE;
        if(n == 1) return A[0][0];
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(j == 0) {
                    A[i][j] += Math.min(A[i-1][j], A[i-1][j+1]);
                } else if(j == n - 1 ){
                    A[i][j] += Math.min(A[i-1][j-1], A[i-1][j]);
                }else {
                    A[i][j] += Math.min(Math.min(A[i-1][j-1], A[i-1][j]), A[i-1][j+1]);
                }
                if(i == n - 1)res = Math.min(res, A[i][j]);
            }
        }
        return res;
    }
}
