public class Lader extends Shape {
	double above;
	double bottom;
	double height;
	
	public Lader(double a, double b, double c){
		 above = a;
		 bottom = b;
		 height = c;
		
	}
	
	public double getArea() {
		
		return (above + bottom) * height / 2;

	}

}
