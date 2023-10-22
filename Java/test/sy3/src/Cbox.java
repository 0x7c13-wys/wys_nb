public class Cbox {
    double length;
    double width;
    double height;

    Cbox(){
        this.length = 0;
        this.width = 0;
        this.height = 0;
    }
    Cbox(double length, double width, double height){
        this.length = length;
        this.width = width;
        this.height = height;

    }

    public void setData(double length, double width, double height){
        this.length = length;
        this.width = width;
        this.height = height;

    }

    public double getVolume(){
        return multiply(multiply(this.height, this.length), this.width);
    }


    public double multiply(double a, double b){
        return  a * b;
    }

}
