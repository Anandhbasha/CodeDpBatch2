class DemoClass{
    static String userName = "Aruna";
    static void show(){
        System.out.println("Welcome to Static method");
    }
}
public class staticDemo {
    public static void main(String[] args){
        // DemoClass d = new DemoClass();
        // d.show();
        DemoClass.show();
        System.out.println(DemoClass.userName);
    }    
}
