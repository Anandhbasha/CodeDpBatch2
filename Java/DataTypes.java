// class
class Person{
    String userName = "Ajith";
}
public class DataTypes{
    public static void main(String[] args ){
        String name = "Hello Welcome";
        System.out.println(name);
        System.out.println(name.length());
        // Array
        // int marks[]= {}
        // cout<marks;
        int [] marks = {10,15,17,18,21,25};
        System.out.println(marks[0]);
        System.out.println(marks[1]);
        System.out.println(marks[2]);
        System.out.println(marks[3]);
        System.out.println(marks[4]);
        System.out.println(marks[5]);
        // Object
        Person p = new Person();
        System.out.println(p.userName);
    }
}