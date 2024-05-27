package 三;

public class Student implements Runnable {
    private String name;
    private int id;

    public Student(String name, int id) {
        this.name = name;
        this.id = id;
    }

    @Override
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
        for(int i=0;i<5;i++){
            System.out.println("姓名: "+name);
            try{
                Thread.sleep(1000);
            }catch(Exception e){
                e.printStackTrace();
            }
        }
    }

    /***
     * 王玉升
     * @param args
     */
    public static void main(String[] args) {
        Thread threadA = new Thread(new Student("王玉升", 1012));
        Thread threadB = new Thread(new Student("李四", 9999));

        // 启动线程A和B
        threadA.start();
        threadB.start();
    }
}

