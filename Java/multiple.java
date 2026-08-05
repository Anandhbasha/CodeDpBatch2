// interface A{
//     void display();
// }
// interface B extends A{
//     void display();
// }
// class C implements A,B{
//     public void display(){
//         System.out.println("Display Method");
//     }
// }
// public class multiple {
//     public static void main(String[] args) {
//         C obj = new C();
//         obj.display();
//     }
// }


interface Singer{
    void Song();
}
interface Director{
    void Direction();
}
interface Actor{
    void Acting();
}
class PradeepRangenathan implements Singer,Director,Actor{
    public void Song(){
        System.out.println("Singari from Dude");
    }
    public void Direction(){
        System.out.println("Directed Comali and Love Today");
    }
    public void Acting(){
        System.out.println("As a Actor Lovetoday Dragon Dude");
    }
}
public class multiple{
    public static void main(String[] args) {
        PradeepRangenathan pr =  new PradeepRangenathan();
        pr.Acting();
        pr.Direction();
        pr.Song();
    }
}