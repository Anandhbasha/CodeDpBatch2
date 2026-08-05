class OnlineOrder{
    void order(){
        System.out.println("Order is placed");
    }
}
class Amazon extends OnlineOrder{
    void order(){
        System.out.println("Amazon Order is placed");
    }
}
class Flipkart extends OnlineOrder{
    void order(){
        System.out.println("Flipkart Order is placed");
    }
}
class Meesho extends OnlineOrder{
    void order(){
        System.out.println("Meesho Order is placed");
    }
}
class Myntra extends OnlineOrder{
    void order(){
        System.out.println("Myntra Order is placed");
    }
}
public class overridding {
    public static void main(String[] args) {
        OnlineOrder o = new OnlineOrder();
        o.order();
        Amazon a = new Amazon();
        a.order();
        Flipkart f = new Flipkart();
        f.order();
        Meesho m = new Meesho();
        m.order();
        Myntra my = new Myntra();
        my.order();
    }
}
