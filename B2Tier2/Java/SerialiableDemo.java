import java.io.*;
class stuPerson implements Serializable{
    int id;
    String name;
    double marks;
    stuPerson(int id,String name,double marks){
        this.id=id;
        this.name=name;
        this.marks=marks;
    }
}
public class SerialiableDemo {
    public static void main(String[] args) throws Exception{
        // error->
        stuPerson s1 = new stuPerson(101,"ravi",92);

        ObjectOutputStream out = new ObjectOutputStream(
            new FileOutputStream("stu.ser")
        );
        out.writeObject(s1);
        out.close();
        System.out.println("Object Saved Sucessfully");
    }
}
