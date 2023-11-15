public class Lader extends shape{
	double above;
	double bottom;
	double height;
	
	public Lader(double above, double bottom, double height){
		 above = 0;
		 bottom = 0;
		 height = 0;
		
	}
	
	public double getArea() {
		
		double Area = (above + bottom) * height / 2;
		return Area;
		
	}

}
