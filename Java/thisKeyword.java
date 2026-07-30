class Bike{
    String color = "black";
    Bike(String color){
        this.color = color;
    }
    void display(){
        System.out.println(color);
    }
}
public class thisKeyword {
    public static void main(String[] args){
        Bike b1 = new Bike("red");
        b1.display();
    }
}
