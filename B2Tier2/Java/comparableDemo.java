import java.util.*;
class StudentsList implements Comparable <StudentsList>{
    int id;
    String name;
    int marks;
    StudentsList(int id,String name,int marks){
        this.id = id;
        this.name = name;
        this.marks = marks;
    }
    @Override
    public int compareTo(StudentsList other){
        // return Integer.compare(this.marks,other.marks);
        return Integer.compare(other.marks,this.marks);
        // compare(90,82)
    }
    @Override
    public String toString(){
        return id+"---"+name+"---"+marks;
    }
}
public class comparableDemo {
    public static void main(String[] args){
        ArrayList<StudentsList>stu = new ArrayList<>();
        stu.add(new StudentsList(101,"ajay",90));
        stu.add(new StudentsList(102,"Kamal",82));
        stu.add(new StudentsList(103,"Ajith",72));
        stu.add(new StudentsList(104,"Manoj",92));

        Collections.sort(stu);
        for(StudentsList s:stu){
            System.out.println(s);
        }
    }
}
