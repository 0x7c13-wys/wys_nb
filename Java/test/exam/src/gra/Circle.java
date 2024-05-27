package gra;


public class Circle {
    private double r;                  //半径

    /***
     *
     * @param r     圆的半径
     */
    public Circle(double r) {
        this.r = r;
    }

    public Circle() {}

    /***
     *      设置圆的半径
     * @param r      圆的半径
     */
    public void setR(int r) {
        this.r = r;
    }

    /***
     *      获取圆的半径
     * @return        圆的半径
     */
    public double getR() {
        return r;
    }

    /***
     * 返回圆的面积
     * @return          圆的面积
     */
    public double getArea(){
        return r * r * 3.14;
    }
}
