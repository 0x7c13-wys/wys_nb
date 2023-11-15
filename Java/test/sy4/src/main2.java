public class main2 {
    public static void main(String[] args) {

        ComputeShape Cs = new ComputeShape();


        Shape L = new Lader(1.0, 2.0, 3.0);
        Cs.showMess(L);

        Shape T = new Triangle(3.0, 4.0, 5.0);
        Cs.showMess(T);

        Shape C = new Circle(3.0);
        Cs.showMess(C);

    }

}
