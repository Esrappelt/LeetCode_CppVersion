
public class Solution169 {
    public int majorityElement(int[] nums) {//[2,2,1,1,1,2,2]
        int res = run(nums, 0, nums.length-1);
        return res;
    }
    public int count(int[] nums, int val, int low, int high) {
        int c = 0;
        for(int i = low; i <= high; i++) {
            if(nums[i] == val) c++;
        }
        return c;
    }
    public int run(int[] nums, int low, int high) {
        if(low == high) {
            return nums[low];
        }
        int mid = low + (high - low) /2;
        int left = run(nums, low, mid);
        int right = run(nums, mid + 1, high);

        if( left == right) {
            return left;//进行优化
        }

        int c1 = count(nums, left, low, high);
        int c2 = count(nums, right, low, high);


        return c1 > c2 ? left : right;
    }
    public static void main(String[] args) {
        Solution169 m = new Solution169();
        int[] nums = {3,2,3};
        int res = m.majorityElement(nums);
        System.out.println(res);
    }
}