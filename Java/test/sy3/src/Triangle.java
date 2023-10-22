

public class Triangle {
	double side1;
	double side2;
	double side3;
	Triangle(){
		side1 = 3.0;
		side2 = 4.0;
		side3 = 5.0;
		
	}
	
	double getArea(){					//面积
		double sinC = ( side1*side1 + side2*side2 - side3*side3) / ( 2 * side1 * side2);
		double Area = side1 * side2 * sinC / 2;
		return Area;
		
	}
}
