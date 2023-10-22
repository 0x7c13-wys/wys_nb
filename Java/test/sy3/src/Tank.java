
public class Tank {
		double speed = 0;										//【代码1】声明double型变量speed,刻画速度
		int bulletAmount = 0;										//【代码2】声明int型变量bulletAmount,刻画炮弹数量
        void speedUp(int s) {   //加速   
        speed += s;						//【代码3】将速度speed增加s
    } 
    void speedDown(int d) {  //减速
       if(speed-d>=0) 
    	   speed -= d;//【代码4】将速度speed减小d
       else 
         speed = 0;
    } 
    void setBulletAmount(int m) { //设置炮弹数量
       bulletAmount = m;
    }
    int getBulletAmount() { //获取炮弹数
       return bulletAmount;
    }
    double getSpeed() { //获取速度
       return speed;
    }
    void fire() {  //开火
        if(bulletAmount>=1){
        	bulletAmount -= 1;//【代码5】炮弹数减少一个
           System.out.println("打出一发炮弹");
        } 
        else {
           System.out.println("没有炮弹了,无法开火");
        }
    }
}

