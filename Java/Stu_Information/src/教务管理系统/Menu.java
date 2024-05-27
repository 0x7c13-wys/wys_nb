package 教务管理系统;

import java.util.concurrent.TimeUnit;

public class Menu {

    //构造方法
    public Menu() {

        welcome();          //欢迎界面

    }


    //欢迎界面
    public void welcome() {
        clearScreen();
        System.out.println("\n\n\n\n\t\t\t\t******************************************************************");
        System.out.println("\t\t\t\t++--**********************************************************--++");
        System.out.println("\t\t\t\t******************************************************************");
        System.out.println("\t\t\t\t++--**********************************************************--++");
        System.out.println("\t\t\t\t**                     徽    州    大    学                     **");
        System.out.println("\t\t\t\t********                                                   *******");
        System.out.println("\t\t\t\t-------------                                        -------------");
        System.out.println("\t\t\t\t******************           安徽黄山          ******************");
        System.out.println("\t\t\t\t----------------------                    ------------------------");
        System.out.println("\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
        System.out.println("\t\t\t\t[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
        System.out.println("\t\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&");
        System.out.println("\t\t\t\t##################################################################");
        System.out.println("\t\t\t\t @  @  !  !  @  @  !  !  @  @  !  !  @  @  !  !  @  @  !  !  @  @");
        sleep(1500);

    }





    // 清屏函数（在Java中没有标准的清屏方法，这里使用换行符来模拟清屏效果）
    public static void clearScreen() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }

    // 自定义sleep函数，以替代C语言中的Sleep函数
    public static void sleep(long milliseconds) {
        try {
            TimeUnit.MILLISECONDS.sleep(milliseconds);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }


    public static void main(String[] args) {
        Menu welcome = new Menu();
    }
}





