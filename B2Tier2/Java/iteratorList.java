import java.util.*;
public class iteratorList {
    public static void main(){
        ArrayList<String> products = new ArrayList<>();
        products.add("Laptop");
        products.add("Mouse");
        products.add("Keyboard");
        products.add("Bag");
        products.add("out of stack");

        ListIterator<String> itr = products.listIterator();
        System.out.println("Forword access");
        while(itr.hasNext())
            {
                System.out.println(itr.next());
            }
        while(itr.hasPrevious()){
            System.out.println("Backward: " + itr.previous());
        }

        
    }
}
