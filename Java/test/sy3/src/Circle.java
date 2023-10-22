

import java.util.Scanner;

public class Circle {
	double r;
	
	
	
	Circle(){
		r = 3.0;
	}
	
	Scanner sc = new Scanner(System.in);
	
	

	
	double getArea() {
		double Area = 3.14 * r * r;
		return Area;
	}

}
