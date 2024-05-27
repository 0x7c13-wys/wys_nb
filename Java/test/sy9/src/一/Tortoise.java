package 一;

class Tortoise extends Thread{
    int sleepTime=0,liveLength=0;   // sleepTime每次休眠时间,liveLength模拟寿命
    Tortoise(int sleepTime,String name,int liveLength)   {
        this.sleepTime=sleepTime;
        this.liveLength=liveLength;
        setName(name);  //setName（）是继承Thread的方法，设置线程的名字
    }
    public void run()   {
        while(true)      {
            liveLength--;
            System.out.print("@");
            try            {
                【代码1】;   //【代码1】让线程调用 sleep方法进入中断状态，需进行异常捕获，sleepTime毫秒后线程重新排队，等待CUP资源。
            }
            catch(InterruptedException e) {        }
            if(liveLength<=0)   {
                System.out.print(getName()+"进入死亡状态\n");  //getName()方法是继承Thread的方法，获取线程的名字
                【代码2】;//【代码2】结束run方法的语句。
            }
        }
    }
}

