package 一;

class Rabbit extends Thread{
    int sleepTime=0,liveLength;
    Rabbit(int sleepTime,String name,int liveLength)   {
        this.sleepTime=sleepTime;
        this.liveLength=liveLength;
        setName(name);
    }

    /***
     * 王玉升
     */
    public void run()   {
        while(true)  {
            liveLength--;
            System.out.print("*");
            try   {
                Thread.sleep(sleepTime);  //【代码3】让线程调用 sleep方法进入中断状态，sleepTime毫秒后线程重新排队
                // 等待CUP资源。
            }
            catch(InterruptedException e) {
            }
            if(liveLength<=0)  {
                System.out.print( Thread.currentThread().getName()+"进入死亡状态\n");  // 【代码4】获取线程的名字
                return;  // 【代码5】结束run方法的语句。
            }
        }
    }
}


