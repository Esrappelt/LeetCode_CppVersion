
public class Solution53 {
    public int maxSubArray(int[] nums) {
        return run(nums, 0, nums.length - 1);
    }
    public int run(int[] nums, int low, int high) {
        if(low == high) {
            return nums[low];
        }

        int mid = low + (high - low) / 2;
        int Ml = run(nums, low, mid);
        int Mr = run(nums, mid + 1, high);
        int Mlr = Math.max(Ml, Mr);

        int sum = 0;
        int M1sum = Integer.MIN_VALUE;
        int M2sum = Integer.MIN_VALUE;
        for( int i = mid; i >= low; i--) {
            sum += nums[i];
            M1sum = Math.max(sum, M1sum);
        }
        sum = 0;
        for(int i = mid + 1; i <= high; i++) {
            sum += nums[i];
            M2sum = Math.max(sum, M2sum);
        }
        return Math.max(M1sum + M2sum, Mlr);
    }
    public static void main(String[] args) {
        Solution53 m = new Solution53();
        int[] nums = {-2,1,3,4,-8};
        int x = m.maxSubArray(nums);
        System.out.println(x);
    }
}