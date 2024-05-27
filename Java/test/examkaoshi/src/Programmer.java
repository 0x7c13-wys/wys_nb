
public class Programmer extends Employee{


    /***
     * 有参构造方法，对三个属性赋值
     * @param name          程序员的姓名
     * @param ID            程序员的工号
     * @param salary        程序员的薪水
     */
    public Programmer(String name, int ID, int salary) {
        super(name, ID, salary);
    }


    /***
     * 程序员的工作
     */
    @Override
    void work() {
        System.out.println("从事程序设计工作！");            //王玉升

    }
}
