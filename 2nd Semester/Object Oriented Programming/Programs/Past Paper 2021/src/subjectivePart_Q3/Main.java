package subjectivePart_Q3;

public class Main {
	public static void main(String[] args) {
		
		// a. The square root of 30
		double sqrtOf30 = Math.sqrt(30);
		
		System.out.println("Square root of 30 is: " + sqrtOf30);
		
		
		// b. The sine and cosine of 100
		double sinOf100 = Math.sin(Math.toRadians(100));
		double cosineOf100 = Math.cos(Math.toRadians(100));
		
		System.out.println("\nSin of 100° is: " + sinOf100);
		System.out.println("Cosine of 100° is: " + cosineOf100);
		
		
		// c. The value of the floor, ceiling, and round of 44.7
		double number = 44.7;
		
		double floor = Math.floor(number);
		double ceiling = Math.ceil(number);
		double round = Math.round(number);
		
		System.out.println("\nFloor value of 44.7 is: " + floor);
		System.out.println("Ceiling value of 44.7 is: " + ceiling);
		System.out.println("Round value of 44.7 is: " + round);
		
		
		// d. The larger and the smaller of the character K and the integer 70
		char chK = 'K';
		int integer = 70;
		
		int larger = Math.max(chK, integer);
		int smaller = Math.min(chK, integer);
		
		System.out.println("\nLarger of 'K' and 70 is: " + larger);
		System.out.println("Smaller of 'K' and 70 is: " + smaller);
	}
}