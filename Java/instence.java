class Persons{
    String name = "Amal Raj";
}
public class instence {
    public static void main(String[] args) {
        Persons p = new Persons();
        System.out.println(p.name);
        System.out.println(p instanceof Persons);
    }
}
