import java.util.*;
public class Basic{
    public static void main(String[] args){
        // variable 
        // datatypes
        int x ;
        Scanner s = new Scanner(System.in);
        String name;
        // System.out.print("Hello Welcome to Java\n");
        // System.out.print(x);
         System.out.println("Enter the Name:");
        name = s.nextLine();
        System.out.println("Enter the value:");
        x= s.nextInt();       
         System.out.println("Hello Welcome to Java");
        System.out.println(x);
        System.out.println("The userName is:"+name);
        // premitive
        // byte
        // byte-> small value = -128 to 128 -> memory  1byte
        byte age = 25;
        // short -> Medium integer value upto 1000 -> 2bytes
        short mark = 589;
        // int -> -2k to 2k -> 4 bytes
        int num = 10000;
        // float -> -32000 to -> 4 bytes
        float val = 72.03f;
        // double -> more precison -> 8 bytes(only for float Bigger values)
        double balance = 111512.25;
        // long -> more precison -> 8 bytes (only for interger bigger values)
        long population = 4541211545454445L;
        // char ->2 byte
        char grade = 'A';
        // boolean ->true of false
        boolean isPass = true;
        // non premetive
    }
}


// premitive                                                       Non premitive
// Store the actual value                                           Store the Object ref
// Fixed size                                                       Size depends on object
// Faster                                                           Slightly Slower
// Cannot Call method                                               Call method 
// after assignmnet operator hold a single value                    // after assignmnet operator hold a Multiple value