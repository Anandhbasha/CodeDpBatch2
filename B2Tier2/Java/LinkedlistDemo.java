import java.util.LinkedList;

public class LinkedlistDemo {
    public static void main(String[] args) {
        LinkedList <String> nameList = new LinkedList<>();
        nameList.add("arul");
        nameList.add("karthick");
        nameList.addFirst("kalai");
        nameList.addLast("Kala");
        System.out.println(nameList);
        nameList.remove(1);
        System.out.println(nameList);
    }
    
}
