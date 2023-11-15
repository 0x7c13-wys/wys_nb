public class ComputeShape extends Shape {

    public void showMess(Shape shape){

        System.out.println(shape.getArea());




    }


    @Override
    public double getArea() {
        return 0;
    }
}
