package assignment;

interface Q 
{ 
    void show(); 
}
interface B 
{ 
    void display(); 
}

class C implements Q, B 
{
    public void show()
    { 
        System.out.println("Show from A"); 
    }
    public void display()
    { 
        System.out.println("Display from B");
    }
}

public class lab26 {
    public static void main(String[] args){
        C obj = new C();
        obj.show();
        obj.display();
    }
}
