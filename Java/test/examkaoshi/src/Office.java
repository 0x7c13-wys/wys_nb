public class Office {
    public Office() {
    }

    //王玉升
    /***
     * @param e 职工
     *          输出该职工基本信息
     *          输出该之功能的工作
     */
    public void show(Employee e){
        System.out.println("该职工叫" + e.getName());
        System.out.println("该职工的工号是" + e.getID());          //王玉升
        System.out.println("该职工的薪水是" + e.getSalary());
        System.out.println("该职工的工作是");
        e.work();
    }
}
