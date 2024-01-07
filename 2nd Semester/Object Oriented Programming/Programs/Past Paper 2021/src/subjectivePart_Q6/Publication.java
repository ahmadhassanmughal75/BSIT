package subjectivePart_Q6;

import java.util.Scanner;

abstract class Publication {
	protected String title;
	protected float price;
	
	public Publication(String title, float price) {
		this.title = title;
		this.price = price;
	}
	
	abstract void Oversize();
	
	public void Setdata() {
		Scanner inp = new Scanner(System.in);
		
		System.out.print("Enter title: ");
		title = inp.nextLine();
		
		System.out.print("Enter price: ");
		price = inp.nextFloat();
	}
	
	public void getdata() {
		System.out.println("Title: " + title);
		System.out.println("Price: " + price);
	}
}