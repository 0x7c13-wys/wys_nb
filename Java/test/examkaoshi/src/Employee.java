import java.lang.String;

abstract class Employee {


    /***
     * name     员工的姓名
     * ID       员工的工号
     * salary   员工的薪水
     */
    private String name;                //王玉升
    private int ID;
    private int salary;



    /***
     * 有参构造方法，对三个属性赋值
     * @param name          员工的姓名
     * @param ID            员工的工号
     * @param salary        员工的薪水
     */
    public Employee(String name, int ID, int salary) {
        this.name = name;
        this.ID = ID;
        this.salary = salary;               //王玉升1012
    }




    /***
     * @return  获取姓名
     */
    public String getName() {
        return name;
    }


    /***
     * @return  获取ID
     */
    public int getID() {
        return ID;
    }


    /***
     *
     * @return  获取薪水
     */
    public int getSalary() {
        return salary;
    }


    /***
     * 工作情况
     */
    abstract void work();
}
