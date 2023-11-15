public class Triangle extends shape{
	double side1;
	double side2;
	double side3;
	
	public Triangle(double side1, double side2, double side3) {
		side1 = 0;
		side2 = 0;
		side3 = 0;
	}
	
	public double getArea() {
		double Area = 0.5 * side1 * side2;
		return Area;
	}
}
