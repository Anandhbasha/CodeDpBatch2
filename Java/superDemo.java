// class Parent{
    // int a =10;
    // void prints(){
        // System.out.println("Parent Class"+a);
    // }

// }
// class child extends Parent{
        // void prints(){
        // System.out.println("Parent Class"+a);
    // }
    // super.prints();
// }
class Electronics{
    float Offer = 10.0f;
    void offers(){
        System.out.println("Electronics offer is "+Offer);
    }
}
class Mobile extends Electronics{
    float Offer = 5.0f;
    void offers(){
        System.out.println("Electronics offer is "+(super.Offer+Offer));
    }
}

public class superDemo {
    public static void main(String[] args){        
        Mobile m = new Mobile();
        m.offers();
    }
}
