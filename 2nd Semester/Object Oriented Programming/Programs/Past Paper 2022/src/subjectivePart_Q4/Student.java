package subjectivePart_Q4;

public class Student {
    private int studentID, points, creditHours;

    public Student() {
        this.studentID = 9999;
        this.points = 12;
        this.creditHours = 3;

        displayStudentInfo();
    }

    public void displayStudentInfo() {
        System.out.println(":: Student Details ::");
        System.out.println("Student ID: " + studentID);
        System.out.println("Points: " + points);
        System.out.println("Credit-hours: " + creditHours);
        double gpa = calculateGPA();
        System.out.println("Grading-Point-Average (GPA): " + gpa);
    }

    public double calculateGPA() {
        return ( points / (double) creditHours);
    }
}