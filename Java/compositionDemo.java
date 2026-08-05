class HSC{
    void result(){
        System.out.println("HSC Result is 80%");
    }
}
class Bachelor{
    private HSC h;
    // HSC h = new HSC();
    Bachelor(){
        h = new HSC();
    }
    void result(){
        h.result();
        System.out.println("Bachelor Result is 70%");
    }
}
public class compositionDemo {
    public static void main(String[] args){
        Bachelor b = new Bachelor();
        b.result();
    }
    
}
