class Animals{
    Animals(){
        System.out.println("Animal Constructor is created");
    }
}
class Dogs extends Animals{
    Dogs(){
        super();
        System.out.println("Dog Constructor is created");
    }
}
public class superDemo1 {
    public static void main(String[] args){
        Dogs d = new Dogs();
    }
}
