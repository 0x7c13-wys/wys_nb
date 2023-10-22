

public class Lader {
	double above;
	double bottom;
	double height;
	
	
	Lader(){
		above = 3.0;
		bottom = 4.0;
		height = 5.0;
	}
	
	
	double getArea(){
		double Area = (above + bottom) * height / 2;
		return Area;
		
	}

}
