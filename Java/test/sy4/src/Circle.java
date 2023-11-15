public class Circle extends Shape {
	
	double r;
	
	public Circle(double a) {

		r = a;
	}
	
	public double getArea() {
		
		return  0.5 * 3.14 * r * r;
	}

}
