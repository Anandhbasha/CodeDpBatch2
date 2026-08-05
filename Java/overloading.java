class Calculator{
    void add(int a, int b){
        System.out.println("Sum of two numbers is "+(a+b));
    }
    void add(int a, int b, int c){
        System.out.println("Sum of three numbers is "+(a+b+c));
    }
    void add(float a, float b){
        System.out.println("Sum of two float numbers is "+(a+b));
    }
    void add(float a, float b, float c){
        System.out.println("Sum of three float numbers is "+(a+b+c));
    }
    void add(int a, float b){
        System.out.println("Sum of int and float numbers is "+(a+b));
    }
}
public class overloading {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        c.add(10,20);
        c.add(10,20,30);
        c.add(10.5f,25.2f);
        c.add(10.5f,25.2f,18.12f);
        c.add(10,18.12f);
    }    
}
