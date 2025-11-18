package assignment;

import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class lab44 {

	public static void main(String[] args) {
        List<String> names = Arrays.asList("Meet", "Vijay", "Karan", "Aman", "Jay");
        System.out.println("Original List: " + names);

        Set<String> uniqueNames = new HashSet<>(names);
        System.out.println("After removing duplicates using HashSet: " + uniqueNames);
    }
}
