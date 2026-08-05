class Parent{
    String Property="House";
}
class Son extends Parent{

}
public class single {
    public static void main(String[] args) {
        Son s = new Son();
        System.out.println(s.Property);
    }
}
