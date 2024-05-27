public class Manager extends Employee{



    /***
     * 有参构造方法，对三个属性赋值
     * @param name          行政管理人员的姓名
     * @param ID            行政管理人员的工号
     * @param salary        行政管理人员的薪水
     */
    public Manager(String name, int ID, int salary) {
        super(name, ID, salary);
    }


    /***
     * 行政管理人员的工作
     */
    @Override
    void work() {
        System.out.println("从事日常管理工作！");         //王玉升
    }
}
