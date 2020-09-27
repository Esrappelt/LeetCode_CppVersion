import java.util.Arrays;
import java.util.Vector;

public class Solution322 {
    public static void main(String[] args) {
        Solution322 s = new Solution322();
        int[] coins = {Integer.MAX_VALUE};
        int amount = 2;
        long ans = s.coinChange(coins, amount);
        System.out.println(ans);
    }
    public long coinChange(int[] coins, int amount) {
        if(amount == 0) return 0;
        int m = Integer.MIN_VALUE;
        for (int i : coins) {
            if(m < i) m = i;
        }
        Vector<Integer> dp = new Vector<Integer>(50000);
        int k = coins.length - 1;
        Arrays.sort(coins);
        for (int i : coins) {
            dp.set(i, 1);
        }
        for(int i = 1; i <= amount; i++) {
            if(dp.get(i) != 0) continue;
            //首先是找c，C不大于i的最大硬币
            int c = Integer.MIN_VALUE;
            boolean flag = false;
            for(int j = k; j >= 0; --j) {
                //找到第一个<=i的硬币
                if(coins[j] <= i) {
                    c = coins[j];
                    flag = true;
                    break;
                }
            } 
            if(!flag) dp.set(i, 0);
            else dp.set(i, (dp.get(i-c) == 0) ? 0 : (dp.get(i-c) + 1));
        }
        return dp.get(amount) == 0 ? -1 : dp.get(amount);
    }
}