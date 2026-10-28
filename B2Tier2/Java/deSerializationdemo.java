import java.io.*;
class stuPerson implements Serializable{
    int id;
    String name;
    double marks;
}
public class deSerializationdemo {
    public static void main(String[] args) throws Exception{
        ObjectInputStream obj = new ObjectInputStream(
            new FileInputStream("stu.ser")
        );
        stuPerson s1 = (stuPerson) obj.readObject();
        obj.close();
        System.out.println(s1.id);
        System.out.println(s1.name);
        System.out.println(s1.marks);
    }
}
