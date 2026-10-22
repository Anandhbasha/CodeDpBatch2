import java.util.TreeSet;
public class TreeSetDemo {
    public static void main(String[] args){
        TreeSet<Integer> nums = new TreeSet<>();
        nums.add(105);
        nums.add(102);
        nums.add(103);
        nums.add(103);
        System.out.println(nums);
        System.out.println(nums.first());
        System.out.println(nums.last());
        System.out.println(nums.higher(102));
        System.out.println(nums.lower(102));

        for(Integer s:nums){
            System.out.println(s);
        }
    

}

}
