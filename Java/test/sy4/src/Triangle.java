public class Triangle extends Shape {
	double side1;
	double side2;
	double side3;
	
	public Triangle(double a, double b, double c) {
		side1 = a;
		side2 = b;
		side3 = c;
	}
	
	public double getArea() {
		return  0.5 * side1 * side2;
	}
}
