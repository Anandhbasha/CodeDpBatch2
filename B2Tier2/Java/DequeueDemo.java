import java.util.*;
public class DequeueDemo {
    public static void main(String[] args) {
        Deque<Integer> s = new ArrayDeque<>();
        s.addFirst(10);
        s.addFirst(20);
        s.addLast(21);
        s.addLast(12);
        System.out.println(s);
         System.out.println(s.removeFirst());
    }
}
