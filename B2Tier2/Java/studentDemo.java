// class Student<T,U>{
//     String name;
//     U id;
//     T marks;
//     Student(String name,T marks,U id){
//         this.name= name;
//         this.marks=marks;
//         this.id = id;
//     }
//     void show(){
//         System.out.println("userID:"+id+"-"+"Name:"+name);
//         System.out.println("Marks:"+marks);
//     }
// }
// public class studentDemo {
//     public static void main(String[] args){
//         Student<Integer,Integer> s1 = new Student<>("Vidya",98,101);
//         s1.show();
//         Student<Double,Integer> s2 = new Student<>("Balu",98.5,105);
//         s2.show();
//         Student<String,String> s3 = new Student<>("Praba","75.58","11105");
//         s3.show();
//     }    
// }



public class studentDemo{
    public static<T> T getvalue(T value){
        return value;
    }
    public static void main(String[] args){
        int a = getvalue(100);
        String x = getvalue("Java");
        float d = getvalue(10.5f);
        System.out.println(a);
        System.out.println(x);
        System.out.println(d);
    }
}