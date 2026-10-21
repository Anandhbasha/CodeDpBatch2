class Box<T>{
    T value;
    void setValue(T value){
        this.value = value;
    }
    T getValue(){
        return value;
    }
}
public class GenricsDemo{
    public static void main(String[] args){
        Box<String> b = new Box<>();
        b.setValue("Hello Genrics");
        System.out.println(b.getValue());
        Box<Integer> b1 = new Box<>();
        b1.setValue(100);
        System.out.println(b1.getValue());
    }
}

// Object-> almost accept any reference type


// T-> type
// E->Element
// K->key
// V-value
// N-Number
// R-> Result