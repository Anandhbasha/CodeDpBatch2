public class Strings {
    // String Creation
    // String Pool
    // immutable
    public static void main(String[] args) {
        String name = "Aravind Kumar";
        String name1 = "    Aravind Kumar  ";
        // name[1] = 'R';
        // length
        System.out.println(name.length());
        // char At()
        System.out.println(name.charAt(1));
        // substring
        System.out.println(name.substring(8));
        // equals
        // System.out.println(name.equals(name1));
        //equalsIgnoreCase
        System.out.println(name.equalsIgnoreCase(name1));
        // compareTo
        System.out.println(name.compareTo(name1));
        // contains
        System.out.println(name.contains("Ar"));
        // replace
        System.out.println(name.replace("Kumar","Sugumaran"));
        // trim()
        System.out.println(name1);
        System.out.println(name1.trim());
        // split()
        String [] news = name.split(" ") ;
        for(String new1:news){
            System.out.println(new1);
        }
        // startwith
        System.out.println(name.startsWith("A"));
        // endswith
        System.out.println(name.endsWith("r"));
        // indexof
        System.out.println(name.indexOf("r"));
        // toupperCase
        System.out.println(name.toLowerCase());
        // toLowerCase
        System.out.println(name.toUpperCase());


        String user= "Hello Welcome java";
        // ["Hello","Welcome"]
        String [] newUser = user.split(" ");
        System.out.println(newUser[0]);
        System.out.println(newUser[1]);
        System.out.println(newUser[2]);
        System.out.println(newUser);
        System.out.println(name+name1.trim());
        System.out.println(name.concat(name1.trim()));
        System.out.println(name.contains("Kum"));
    }
}
