
public class Student {

	public void computeArea(Triangle t) {			//三角形
		double a = t.getArea();
		System.out.println(a);
		
	}
	public void computeArea(Lader  t) {			//梯形
		double a = t.getArea();
		System.out.println(a);
		
	}
	public void computeArea(Circle  t) {			//圆
		double a = t.getArea();
		System.out.println(a);
		
	}
	
	
	
	
	
	
	public static void main(String args[]) {
		Triangle triangle = new Triangle();
		Lader lader  = new Lader();
		Circle circle = new Circle();
		
		Student Wang = new Student();
		
		Wang.computeArea(triangle);
		Wang.computeArea(lader);
		Wang.computeArea(circle);
		
		
	}

}
