public class methods {
    int Display(int a,int b){
        System.out.println("Welcome to Methods:");
        return a+b;
    }

    public static void main(String[] args) {
        methods m = new methods();
        int res = m.Display(10,20);
        System.out.println(res);
        
    }
}
