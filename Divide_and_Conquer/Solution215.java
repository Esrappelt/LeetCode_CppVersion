import java.util.Arrays;


public class Solution215 {
    public int[] nums;
    public void swap(int i, int j) {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
    public int SearchMid(int p, int r) {
        int[] b = Arrays.copyOfRange(nums, p, r+1);
        Arrays.sort(b);
        for(int i = p; i <= r; i++) {
            if(nums[i] == b[(r-p+1)/2]) return i;
        }
        return 0;
    }
    public int partition(int i, int j) {
        int l = i, r = j;
        int pivot = nums[i];
        while(l < r) {
            while(l < r && nums[r] >= pivot) r--;
            nums[l] = nums[r];
            while(l < r && nums[l] <= pivot) l++;
            nums[r] = nums[l];
        }
        nums[l] = pivot;
        return l;
    }
    public int fun(int l, int r, int k) {
        if(r - l < 75) {
            Arrays.sort(nums);
            return nums[r-k+1];
        }
        for(int i = 0; i <= (r-l-4)/5; i++) {
            int mid = SearchMid(l + 5 * i, l + 5 * i + 4);
            swap(mid, l+i);
        }
        int i = partition(l, r);
        int rightLen = r - i;
        if(k < rightLen + 1) return fun(i+1, r, k);
        else return fun(l, i - 1, k - rightLen + 1);
    }
    public int findKthLargest(int[] nums, int k) {
        this.nums = nums;
        return fun(0, nums.length -1, k);
    }
    public static void main(String[] args) {
        int[] a = new int[10000];
        for(int i = 0; i < 10000; i++) {
            a[i] = (int) (Math.random() * 1000);
        }
        System.out.println(Arrays.toString(a));  
        int k = 5;
        Solution215 s = new Solution215();
        int res = s.findKthLargest(a, k);
        System.out.println(res);
        System.out.println(a[a.length-k]);
    }
}