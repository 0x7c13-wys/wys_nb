package 二;

public class Student extends Thread {
    private String name;
    private int id;

    public Student(String name, int id) {
        this.name = name;
        this.id = id;
    }

    /***
     * 王玉升
     */
    public void run() {
        // A线程打印学号
        for (int i = 0; i < 5; i++) {
            System.out.println("学号: " + id);
            try {
                Thread.sleep(1000); // 睡眠1秒
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        // B线程打印姓名
        for (int i = 0; i < 5; i++) {
            System.out.println("姓名: " + name);
            try {
                Thread.sleep(1000); // 睡眠1秒
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) {
        Student studentA = new Student("王玉升", 609);
        Student studentB = new Student("王", 1012);

        studentA.start(); // 启动A线程
        studentB.start(); // 启动B线程
    }
}
