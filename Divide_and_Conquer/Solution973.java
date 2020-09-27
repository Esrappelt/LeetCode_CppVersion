import java.util.Arrays;

//还可以用优先队列
public class Solution973 {
    int[][] points = {
        {1,3},
        {-2,2},
        {2,2}
    };
    public static void main(String[] args) {
        Solution973 k = new Solution973();
        
        int K = 2;
        var res = k.kClosest(K);
        for (int[] v : res) {
            System.out.println(Arrays.toString(v));
        }
    }
    public int[][] kClosest(int K) {
        quick(0, points.length - 1, K);
        
        return Arrays.copyOfRange(points, 0, K);
    }
    public int distance(int[] p) {
        return p[0] * p[0] + p[1] * p[1];
    }
    public int partition(int i, int j) {
        int left = i, right = j;
        int pivot = distance(points[i]);
        //一定要从右往左！
        while(left < right) {
            while(left < right && distance(points[right]) >= pivot ) right--;
            points[left] = points[right];
            while(left < right && distance(points[left]) <= pivot) left++;
            points[right] = points[left];
        }
        points[left] = points[i];
        return left;
    }
    public void quick(int i, int j, int K) {
        if(i >= j) return;
        int mid = partition(i, j);
        int len = mid - i + 1;
        if(K < len) quick( i, mid - 1, K);
        else if(K > len) quick( mid + 1, j, K - len);
    }




}