package subjectivePart_Q6;

import java.util.Scanner;

public class Tape extends Publication {
	private float playingTime;
	
	public Tape(String title, float price, float playingTime) {
		super(title, price);
		this.playingTime = playingTime;
	}
	
	@Override
	void Oversize() {
		if (playingTime > 90) {
			System.out.println("Oversize");
		}
	}
	
	@Override
	public void Setdata() {
		Scanner inp = new Scanner(System.in);
		
		super.Setdata();
		System.out.print("Enter playing time in minutes: ");
		playingTime = inp.nextFloat();
		
		inp.close();
	}
	
	@Override
	public void getdata() {
		super.getdata();
		System.out.println("Playing time (minutes): " + playingTime);
	}
}