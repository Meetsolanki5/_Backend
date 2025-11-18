package assignment;

import java.util.HashMap;
import java.util.Map.Entry;

public class lab45 {

	 public static void main(String[] args) {
	        HashMap<Integer, String> map = new HashMap<>();
	        map.put(1, "Java");
	        map.put(2, "Python");
	        map.put(3, "C++");

	        System.out.println("HashMap elements: " + map);

	        System.out.println("Value for key 2: " + map.get(2));

	        System.out.println("Iterating through HashMap:");
	        for (Entry<Integer, String> entry : map.entrySet()) 
	        {
	            System.out.println(entry.getKey() + " -> " + entry.getValue());
	        }
	    }
}
