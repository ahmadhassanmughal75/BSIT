package subjectivePart_Q6;

import java.util.Scanner;

public class Book extends Publication {
	int noOfPages;
	
	public Book(String title, float price, int noOfPages) {
		super(title, price);
		this.noOfPages = noOfPages;
	}
	
	@Override
	void Oversize() {
		if (noOfPages > 500) {
			System.out.println("Oversize");
		}
	}
	
	@Override
	public void Setdata() {
		Scanner inp = new Scanner(System.in);
		
		super.Setdata();
		System.out.print("Enter no. of pages: ");
		noOfPages = inp.nextInt();
	}
	
	@Override
	public void getdata() {
		super.getdata();
		
		System.out.println("No. of pages: " + noOfPages);
	}
}