package subjectivePart_Q4;

import java.io.File;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try {
			File file = new File("Untitled.txt");
			Scanner reader = new Scanner(file);
			
			reader.useDelimiter("\\Z");
			String text = reader.next();
			String lowercaseText = text.toLowerCase();
			
			System.out.println(lowercaseText);
			reader.close();
		
			
			String[] words = lowercaseText.split("\\s+");
			int count = words.length;
			
			System.out.println(count);
			
		} catch (Exception e) {
			e.printStackTrace();
		}
    }
}
