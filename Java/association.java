class Teachers{
    String name;
    Teachers(String name){
        this.name = name;
    }
    void teach(Studentes sname){
        System.out.println(this.name+ "Teaches "+sname.name);
    }
}
class Studentes{
    String name;
    Studentes(String name){
        this.name = name;
    }
}

public class association {
    public static void main(String[] args){
        Teachers t = new Teachers("Ramesh");
        Studentes s = new Studentes("Suresh");
        t.teach(s);
    }
    
}
