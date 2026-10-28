import java.util.ArrayList;
import java.util.Iterator;

public class IteratorDemo {
    public static void main(){
        ArrayList<String> products = new ArrayList<>();
        products.add("Laptop");
        products.add("Mouse");
        products.add("Keyboard");
        products.add("Bag");
        products.add("out of stack");

        Iterator<String> itr = products.iterator();
        while(itr.hasNext()){
            String prod =itr.next();
            if(prod.equals("out of stack")){
                itr.remove();
            }
        }
        System.out.println(products);
    }
}
