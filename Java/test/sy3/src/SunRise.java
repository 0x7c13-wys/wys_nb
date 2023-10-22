public class SunRise {
    public static void main(String args[]) {
        SquareEquation equation=new SquareEquation(4,5,1);//创建系数是4、5、1的一元二次方程
      equation.getRoots();//【代码6】求方程的根
        equation.setCoefficient(-3,4,5);//重新设置方程的系数
        equation.getRoots();
    }
}

