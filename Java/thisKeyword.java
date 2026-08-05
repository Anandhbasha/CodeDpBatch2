class Bike{
    String color = "black";
    int milage;
    Bike(String color){
        this.color = color;
    }
    Bike(int Milage){
        this.milage = Milage;
    }
    void display(){
        System.out.println(color);
    }
}
public class thisKeyword {
    public static void main(String[] args){
        Bike b1 = new Bike("red");
        Bike b2 = new Bike(25);
        b1.display();
    }
}
