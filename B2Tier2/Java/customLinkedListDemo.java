import java.util.LinkedList;

class schoolStudents{
    int id;
    String name;
    schoolStudents(int id,String name){
        this.id=id;
        this.name = name;
    }
    void display(){
        System.out.println(id + "--"+ name);
    }
}
public class customLinkedListDemo {
    public static void main(String[] args){
        LinkedList <schoolStudents> stu1 = new LinkedList<>();
        stu1.add(new schoolStudents(101,"Hari"));
        stu1.add(new schoolStudents(102,"Babu"));
        stu1.add(new schoolStudents(103,"Raju"));
        // stu1.display();
        for(schoolStudents s1:stu1){
            s1.display();
        }
    }
}
