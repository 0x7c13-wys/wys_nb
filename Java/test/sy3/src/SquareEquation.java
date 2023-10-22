public class SquareEquation {
    double a,b,c; //表示方程三个系数
    double root1,root2; //表示方程的两个实根
    boolean boo; //表示是否为一元二次方程
    SquareEquation(double a, double b, double c){//【代码2】有三个参数的构造方法方法头
        this.a=a;
        this.b=b;
        this.c=c;
        if(a!=0)
            boo=true;
        else
            boo=false;
    }
    public void getRoots(){  //【代码3】名为getRoots方法的方法头,功能求方程两实根
        if(boo) {
            System.out.println("是一元2次方程");
            double disk=b*b-4*a*c;
            if(disk>=0) {
                root1=(-b+Math.sqrt(disk))/(2*a);
                root2=(-b-Math.sqrt(disk))/(2*a);
                System.out.printf("wys 说方程的根:%f,%f\n",root1,root2);
            }
            else {
                System.out.printf("wys 说方程没有实根\n");
            }
        }
        else {
            System.out.println("不是一元2次方程");
        }
    }
    public void setCoefficient(double a, double b, double c){//【代码4】名为setCoefficient方法的方法头，功能设置方程三系数
        this.a=a;
        this.b=b;
        this.c=c;
        if(a!=0)
            boo=true;
        else
            boo=false;
    }
}

