import java.util.HashMap;
public class HashmapDemo {
    public static void main(String[] args){
        HashMap<Integer,String> person = new HashMap<>();
        person.put(101,"Azar");
        person.put(102,"Alan");
        person.put(103,"Berlin");
        System.out.println(person);
        System.out.println(person.get(101));
    }
}
