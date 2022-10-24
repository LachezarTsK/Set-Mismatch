
import java.util.HashSet;
import java.util.Set;

public class Solution {

    public int[] findErrorNums(int[] input) {
        Set<Integer> unique = new HashSet<>();
        int expectedSum = input.length * (1 + input.length) / 2;
        int actualSum = 0;
        int duplicate = 0;
        for (int n : input) {
            if (!unique.add(n)) {
                duplicate = n;
            }
            actualSum += n;
        }
        return new int[]{duplicate, duplicate + expectedSum - actualSum};
    }
}
