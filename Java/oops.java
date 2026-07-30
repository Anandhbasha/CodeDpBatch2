class Car{
    // varibles and methods
    String name = "Velan";
    // Default
    
}
class Engine extends Car{
    String getName(){
        return name;
    }
}
public class oops {
    public static void main(String[] args) {
        Engine c = new Engine();
        System.out.println(c.getName());
    }
}
