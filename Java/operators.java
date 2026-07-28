public class operators {
    public static void main(String[] args){
        // Arithmetic
        int a =10;
        int b= 5;
        System.out.println(a+b);
        System.out.println(a-b);
        System.out.println(a*b);
        System.out.println(a/b);
        System.out.println(a%b);
        // comparison
        System.out.println(a>b); //10>5 true
        System.out.println(a<b); //10<5 false
        System.out.println(a<=b); //10<5 false
        System.out.println(a>=b); //10>=5 true
        System.out.println(a==b); //10==5 flase
        System.out.println(a!=b); //10!=5 true
        // assignment
        int x=10;
        x+=5;
        System.out.println(x);
        // x= x+5;
        // unary
        //+,-,!
        int y = 5;
        System.out.println(-y);
        int z =-2;
        System.out.println(-z);
        boolean todayClass = false;
        System.out.println(!todayClass);
        // ternary
        int classActualTime = 2;
        float classStartedTime = 2.30f;
        // condition?"true":"false"
        System.out.println((classActualTime==classStartedTime)?"Classes Started At 2 PM":"class will not started by 2PM");
        
        // increment
        // decrement
        // logical
        // instanceof operator
        // bitwise
        // 0 1
        // 2->rem = 0 co-1
        //  10
        // 3->2
        // rem = 1
        // 1
        // 11
        // and
        // truth table
        // A    B       A&B
        // 0    0       0
        // 0    1       0
        // 1    0       0
        // 1    1       1
        int c =5;
        int d = 3;
        // 5 = 0101
        // 3 = 0011
        //     0001
        System.out.println(c&d);
        // or
        // truth table
        // A    B       A&B
        // 0    0       0
        // 0    1       1
        // 1    0       1
        // 1    1       1
        // 5 = 0101
        // 3 = 0011
        //     0111->binary ->output -> integer
        // 0*2^3 ->0
        // 1->2^2->4
        // 1->2^1->2
        // 1->2^0 ->1
        System.out.println(c|d);
        // xor
        // truth table
        // A    B       A&B
        // 0    0       0
        // 0    1       1
        // 1    0       1
        // 1    1       0
        System.out.println(c^d);
        // 5 = 0101
        // 3 = 0011
        //     0110->6
        // not
        // reverse
        // 5->00000101
        // -> 11111010
        //101
        //010
        System.out.println(~c);
        // ls
        //00000101
        //0001010->10
        // rs
        // 00000101
        //10000010

        //00000101
        //00001010
        // 10


        //10000010

        System.out.println(c<<1);
         System.out.println(c>>1);


        

    }
}
