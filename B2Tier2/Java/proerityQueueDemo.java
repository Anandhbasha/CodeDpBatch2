import java.util.*;
public class proerityQueueDemo {   
    public static void main(String[] args) {
        PriorityQueue <Integer> q = new PriorityQueue<>();
        q.offer(10);
        q.offer(20);
        q.offer(30);
        System.out.println(q);
        while(!q.isEmpty()){
            System.out.print(q.poll());
        }
        
    }


}
