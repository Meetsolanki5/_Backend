package assignment;

class D {
    D()
    { 
    	System.out.println("D Constructor"); 
    }
    void eat()
    { 
    	System.out.println("Eating"); 
    }
}
class E extends D {
    E(){
        super();
        System.out.println("E Constructor");
    }
    void eat(){
        super.eat();
        System.out.println("Eating bread");
    }
}
public class lab24 {
    public static void main(String[] args){
        E e = new E();
        e.eat();
    }
}
