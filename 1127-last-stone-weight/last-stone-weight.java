import java.util.PriorityQueue;
import java.util.Collections;

class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> p = new PriorityQueue<>(Collections.reverseOrder());

        for (int stone : stones) {
            p.offer(stone);
        }

        while (p.size() > 1) {
            int x = p.poll(); // largest
            int y = p.poll(); // second largest

            if (x != y) {
                p.offer(x - y);   // Correct subtraction
            }
        }

        return p.isEmpty() ? 0 : p.poll();
    }
}