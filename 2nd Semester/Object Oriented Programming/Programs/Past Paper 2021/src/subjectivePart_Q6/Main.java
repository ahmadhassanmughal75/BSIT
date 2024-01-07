package subjectivePart_Q6;

public class Main {
	public static void main(String[] args) {
		Publication[] publications = new Publication[2];
		
		Book book = new Book("", 0.0f, 0);
		System.out.println("Enter details for a book:");
		book.Setdata();
		publications[0] = book;
		
		Tape tape = new Tape("", 0.0f, 0.0f);
		System.out.println("\nEnter details for a tape:");
		tape.Setdata();
		publications[1] = tape;
		
		System.out.println("\n\n:: Full Details ::");
		for(Publication publication: publications) {
			publication.getdata();
			publication.Oversize();
			System.out.println();
		}
	}
}