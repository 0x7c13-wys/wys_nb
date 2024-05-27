package 四;

public class Village implements Runnable{   //【代码1】定义目标对象类，实现Runnable接口
    static int waterAmount;   //模拟水井的水量

    static void setWaterAmount(int m) { //设置水井的水量
        if(m>0)
            waterAmount = m;
    }
    public void run(){              //【代码2】重写run方法
        while(true) {
            String name=Thread.currentThread().getName(); //获取线程名
            if(name.equals("赵庄")) {
                drinkWater(name,200) ; //赵庄一次用水200
            }
            else if(name.equals("马家河子")){
                drinkWater(name,100);//【代码3】马家河子一次用水100
            }
            System.out.println(" 剩 "+waterAmount);
            try{
                Thread.sleep(200);//【代码4】线程休眠200毫秒
            }
            catch(InterruptedException e){}
            if(waterAmount<=0) {
                return;
            }
        }
    }

    /***
     * 王玉升
     * @param name
     * @param n
     */
    public synchronized void drinkWater(String name, int n){ // 【代码5】 定义同步方法drinkWater，模拟从水井取水，
        if( waterAmount-n>=0) {
            waterAmount = waterAmount-n;
            System.out.print(name+"喝了"+n+"升水,");
        }
        else{
            System.out.print(name+"喝了"+waterAmount+"升水,");
            waterAmount = 0;
        }
    }
}

