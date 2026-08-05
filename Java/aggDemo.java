class Student{
    String name;
    Student(String name){
        this.name = name;
    }
}
class Department{
    String deptName;
    Student stu;
    Department(String deptName, Student stu){
        this.deptName = deptName;
        this.stu = stu;
    }
    void display(){
        System.out.println("Student Name is "+stu.name);
        System.out.println("Department Name is "+deptName);
    }
}
public class aggDemo {
    public static void main(String[] args){
        Student s1 = new Student("Ramesh");
        Department d = new Department("CS", s1);
        d.display();
    }
    
}

// javac aggDemo.java  
// java aggDemo 
// Jvm