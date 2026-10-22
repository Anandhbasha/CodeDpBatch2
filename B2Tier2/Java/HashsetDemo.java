    import java.util.HashSet;

public class HashsetDemo {
    public static void main(String[] args){
        HashSet<Integer> nums = new HashSet<>();
        nums.add(105);
        nums.add(102);
        nums.add(103);
        nums.add(103);
        System.out.println(nums);

        for(Integer s:nums){
            System.out.println(s);
        }
    }

}
