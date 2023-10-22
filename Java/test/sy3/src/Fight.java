
public class Fight {
   public static void main(String args[]) {
      Tank tank1,tank2;    
      tank1 = new Tank();//创建对象tank1
      tank2 = new Tank();//【代码6】创建对象tank2
      tank1.setBulletAmount(10); 
      tank2.setBulletAmount(10);    
      System.out.println("tank1的炮弹数量："+tank1.getBulletAmount());
      System.out.println("tank2的炮弹数量："+tank2.getBulletAmount());
      tank1.speedUp(80);
      tank2.speedUp(90);
      System.out.println("tank1目前的速度："+tank1.getSpeed());
      System.out.println("tank2目前的速度："+tank2.getSpeed());
      tank1.speedDown(15);//【代码7】 tank1的速度减小15
      tank2.speedDown(30);// 【代码8】tank2的速度减小30
      System.out.println("tank1目前的速度："+tank1.getSpeed());
      System.out.println("tank2目前的速度："+tank2.getSpeed());
      System.out.println("王玉升驾驶tank1开火：");
      tank1.fire();
      System.out.println("王玉升驾驶tank2开火：");
      tank2.fire();
      tank2.fire();
      System.out.println("tank1的炮弹数量：" + tank1.getBulletAmount());// 【代码9】获取tank1的炮弹数量
      System.out.println("tank2的炮弹数量："+ tank2.getBulletAmount()); //【代码10】获取tank2的炮弹数量
   }
}
