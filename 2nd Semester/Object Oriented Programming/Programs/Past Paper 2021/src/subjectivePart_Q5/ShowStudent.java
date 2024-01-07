package subjectivePart_Q5;

public class ShowStudent {
	public static void main(String[] args) {
		String name = "Farooq Mumtaz";
		String studentID = "3031";
		String major = "BS(IT)";
		double[] grades = {4.0, 3.0, 2.6, 3.8, 3.3};
		
		Student student = new Student(name, studentID, major, grades);
		student.displayStudentInfo();
	}
}