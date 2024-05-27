package 一;

public class ThreadExample{


    /***
     * 王玉升
     * @param args
     */
    public static void main(String args[ ]) {
        Rabbit  rabbit;
        rabbit = new Rabbit(1000,"兔", 5);  //【代码6】新建线程rabbit，休眠1秒，名字“兔”，寿命5。
        Tortoise tortoise;
        tortoise =new Tortoise(1000,"龟",10);  //【代码7】新建线程tortoise，休眠1秒，名字“龟”，寿命10。
        rabbit.start();        //【代码8】启动线程tortoise。
        tortoise.start();     //【代码9】启动线程rabbit。
    }
}


