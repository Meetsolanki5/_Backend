package assignment;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class lab48 {

	 public static void main(String[] args) {
	        try (BufferedReader reader = new BufferedReader(new FileReader("example.txt"));
	             BufferedWriter writer = new BufferedWriter(new FileWriter("output.txt"))) 
	        {
	            String line;
	            while ((line = reader.readLine()) != null) {
	                writer.write(line);
	                writer.newLine();
	            }
	            System.out.println("File content successfully copied to output.txt");
	        } catch (IOException e) {
	            e.printStackTrace();
	        }
	    }
}
