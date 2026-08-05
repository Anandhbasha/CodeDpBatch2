// abstract class BankLoan{
//     abstract void RateofInterest();
// }
// class SBI extends BankLoan{
//     void RateofInterest(){
//         System.out.println("SBI Rate of Interest is 10%");
//     }
//     void PlRateofInterest(){
//         System.out.println("SBI PL Rate of Interest is 9%");
//     }
// }
// class ICICI extends BankLoan{
//     void RateofInterest(){
//         System.out.println("ICICI Rate of Interest is 12%");
//     }
// }
// class HDFC extends BankLoan{
//     void RateofInterest(){
//         System.out.println("HDFC Rate of Interest is 11%");
//     }
// }
// class PNB extends BankLoan{
//     void RateofInterest(){
//         System.out.println("PNB Rate of Interest is 13%");
//     }
// }
// public class absDemo {
//     public static void main(String[] args){
//         SBI S = new SBI();
//         S.RateofInterest();
//     }
    
// }



abstract class Shape{
   abstract void area(int a);
}

class Circle extends Shape{
    void area(int a){
        System.out.println("Area of Circle is:" +3.14*a*a);
    }
}
class Square extends Shape{
    void area(int a){
        System.out.println("Area of Square is a*a"+a*a);
    }
}
public class absDemo{
    public static void main(String[] args){
        Circle c = new Circle();
        c.area(5);
        Square s = new Square();
        s.area(10);
    }
}