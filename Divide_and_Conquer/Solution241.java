
import java.util.*;


public class Solution241 {
    public static void main(String[] args) {
        Solution241 d = new Solution241();
        var list = d.diffWaysToCompute("2*3-4*5");
        for(var v : list) {
            System.out.println(v);
        }
    }
    public List<Integer> diffWaysToCompute(String input) {
        List<Integer> res = new ArrayList<>();
        if(input.length() == 1){
            res.add(Integer.parseInt(input));
            return res;
        }
        for(int i = 0; i < input.length(); i++) {
            var c = input.charAt(i);
            if(c == '+' || c == '-' || c == '*') {
                var left = diffWaysToCompute(input.substring(0, i));
                var right = diffWaysToCompute(input.substring(i+1));
                for (var m : left) {
                    for (var n : right) {
                        res.add( c == '+' ? m + n : c == '-' ? m - n : m * n);
                    }
                }
            }
        }
        if(res.isEmpty()) res.add(Integer.parseInt(input));
        return res;
    }
}