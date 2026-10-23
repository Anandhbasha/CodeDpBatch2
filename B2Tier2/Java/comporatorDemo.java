import java.util.*;

class ProductList{
    int id;
    String prodName;
    double price;
    double rating;
    ProductList(int id,String prodName,double price,double rating){
        this.id=id;
        this.prodName= prodName;
        this.price = price;
        this.rating= rating;
    }
    @Override
    public String toString(){
        return id+"--"+prodName+"--"+price+"--"+rating;
    }
}
public class comporatorDemo {
    public static void main(String[] args){
        ArrayList <ProductList> pr = new ArrayList<>();
        pr.add(new ProductList(1,"Laptop",50000.50,4));
        pr.add(new ProductList(2,"Mobile",15000.50,3));

        pr.sort(Comparator.comparingDouble(p->p.price));
        System.out.println("\nPrice low to high");
        pr.forEach(System.out::println);
        // High to low
        pr.sort(Comparator.comparingDouble((ProductList p)->p.price).reversed());
        System.out.println("\nPrice High to Low");
        pr.forEach(System.out::println);

        pr.sort(Comparator.comparing(p->p.prodName));
        System.out.println("\nName A-z");
        pr.forEach(System.out::println);
    }
}
