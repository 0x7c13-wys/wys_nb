public class ClassRoom {
    public static void main (String args[ ]) {
     // 【代码1】是命令行窗口输出"教学活动从教室开始"
        System.out.println("教学活动从教室开始");
        Teacher zhang = new Teacher();
        Student jiang = new Student();
        zhang.introduceSelf();
        jiang.introduceSelf();
    }
}


