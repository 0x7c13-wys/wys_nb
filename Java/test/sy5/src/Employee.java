class Employee {
    long number;
    String name;
    int age;
    double salary;
    public Employee(long number, String name, int age, double salary) throws SalaryBig, SalarySmall{//【代码2】构造方法的方法头
        this.number=number;
        this.name=name;
        this.age=age;
        if(salary<1000)
            throw new SalarySmall();
        else if(salary>50000)
              throw new SalaryBig();//【代码3】抛出工资高异常类
       else this.salary=salary;
    }
    public void addSalary(double salary) throws SalaryBig, SalarySmall{
            if(salary < 1000)
                throw new SalarySmall();
            else if (salary > 5000) {
                throw new SalaryBig();
            } else {
                System.out.println("增加工资" + salary + "元");
                this.salary += salary;
            }
    }//【代码4】定义addSalary(double salary)方法，参考构造方法写，如果有异常抛出，如果无异常，增加工资，并输出“工资增加…元”





    public void minusSalary(double salary) throws SalaryBig, SalarySmall{
        if (salary <1000){
            throw new SalarySmall();
        } else if (salary > 50000) {
            throw new SalaryBig();//王玉升
        }else {
            System.out.println("wys工资增加" + salary + "元");
            this.salary += salary;

        }

    }//【代码5】定义minusSalary(double salary)方法，参考构造方法写，如果有异常抛出，如果无异常，减少工资，并输出“工资减少…元”
    void show(){
        System.out.println("编号:"+number+",姓名:"+name+",年龄:"+age+",工资:"+salary);
    }
}

