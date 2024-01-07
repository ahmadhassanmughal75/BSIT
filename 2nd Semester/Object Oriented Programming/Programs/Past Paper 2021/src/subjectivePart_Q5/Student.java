package subjectivePart_Q5;

import java.util.Arrays;

public class Student {
	private String name;
	private String studentID;
	private String major;
	private double[] grades;
	
	public Student(String name, String studentID, String major, double[] grades) {
		this.name = name;
		this.studentID = studentID;
		this.major = major;
		this.grades = grades;
	}
	
	private double calculateGPA() {
		if(grades.length == 0) {
			return 0.0;
		}
		
		double sum = 0;
		for(double grade: grades) {
			sum += grade;
		}
		
		return sum / grades.length;
	}
	
	public void displayStudentInfo() {
		System.out.println("Student name: " + name);
		System.out.println("Student ID: " + studentID);
		System.out.println("Student major: " + major);
		System.out.println("Grades: " + Arrays.toString(grades));
		System.out.printf("Grade Point Average (GPA): %.2f", calculateGPA());
	}
}