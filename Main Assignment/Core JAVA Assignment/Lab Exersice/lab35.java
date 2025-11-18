package assignment;

public class lab35 {

	public static void main(String[] args){
        try{
            int a[] = new int[5];
            a[5] = 15/0;
        }catch(ArithmeticException e){
            System.out.println("Arithmetic Error");
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array Index Error");
        }
    }
}
