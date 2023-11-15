public class Circle extends shape{
	
	double r;
	
	public Circle() {
		r = 0;
	}
	
	public double getArea() {
		
		double Area = 0.5 * 3.14 * r * r;
		return Area;
	}

}
