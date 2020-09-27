public class Solution983 {

    private Integer[] memo = new Integer[366];
    private int ans;
    private int[] costs;
    private int[] hasDay = new int[366];
    public static void main(String[] args) {
        Solution983 s = new Solution983();
        int[] costs = {2,7,15};
        int[] days = {1,4,6,7,8,20};
        System.out.println(s.mincostTickets(days, costs));
    }
    public int mincostTickets(int[] days, int[] costs) {
        //从后往前的记忆方法
        for (int i : days)  hasDay[i] = 1;
        this.costs = costs;
        //dp(i)表示从day i to the end of plan所需的最少花费
        return dp(1);
    }
    public int dp(int i) {
        if(i > 365) return 0;
        //其实这里就相当于把这个剪枝了而已，如果不是，则就是递归，分治法
        if(memo[i] != null) return memo[i];
        ans = (hasDay[i] == 1) ? Math.min(Math.min(dp(i+1) + costs[0], dp(i+7) + costs[1]), dp(i+30) + costs[2]) : dp(i+1);
        //记忆!!!!!,记忆出最少花费
        memo[i] = ans;
        return ans;
    }
}
