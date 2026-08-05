class GrandPa{
    String Property = "FormHouse";
    String Property1 = "House";
    String Property2 = "Car";
    String Property3 = "Bike";

}
class Dad extends GrandPa{

}
class Daughter extends Dad{

}
public class multilevel {
    public static void main(String[] args ){
        Daughter d = new Daughter();
        System.out.println(d.Property);
        System.out.println(d.Property1);
        System.out.println(d.Property2);
        System.out.println(d.Property3);
    }
}