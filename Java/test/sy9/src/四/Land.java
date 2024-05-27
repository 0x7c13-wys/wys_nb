package 四;

public class Land {
    /***
     * 王玉升
     * @param args
     */
    public static void main(String args[]) {
        Village village = new Village(); //创建目标对象
        village.setWaterAmount(2000);  //设置共享数据水量
        Thread zhaoZhuang ,maJiaHeZhi;
        zhaoZhuang=new Thread(village); //创建线程
        maJiaHeZhi = new Thread(village) ; //【代码6】 创建线程maJiaHeZhi
        zhaoZhuang.setName("赵庄"); //设置线程名字为"赵庄"
        maJiaHeZhi.setName("马家河子");//【代码7】设置线程名字为"马家河子"
        zhaoZhuang.start();
        maJiaHeZhi.start();//【代码8】启动线程maJiaHeZhi ,进入就绪状态
    }
}
