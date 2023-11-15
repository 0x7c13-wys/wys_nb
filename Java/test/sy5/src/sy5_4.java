public class sy5_4 {
    static Employee employee1;
    public static void main(String args[]){
        try{//创建属性为(1001, "张三",27,500)的员工，并各模拟一次减少500元工资，增加1000元工资
            employee1=new Employee(1001, "张三",27,500);
            employee1.minusSalary(500);
            employee1.addSalary(1000);
            employee1.show();
        }catch(Exception e){
            System.out.println("张三,"+e. getMessage ());
        }
        try{ //创建属性为(1002,"李四",40,60000)的员工，并各模拟一次减少500元工资，增加1000元工资
            employee1=new Employee(1002,"李四",40,60000);
            employee1.minusSalary(500);
            employee1.addSalary(1000);
            employee1.show();
        }catch(Exception e){
            System.out.println("李四,"+e. getMessage ());
        }

        try {
            Employee WangWu = new Employee(1003, "王五", 30, 1500);
            WangWu.minusSalary(1000);
            WangWu.addSalary(1000);
            WangWu.show();
        }catch (Exception e){
            System.out.println("王五" + e.getMessage());
        }//【代码6】创建属性为(1003,"王五",30,1500)的员工，并各模拟一次减少1000元工资，增加1000元工资，模仿employee1员工的形式写



        try {
            Employee ChenHong = new Employee(1003, "陈虹", 45, 47000);
            ChenHong.minusSalary(1000);
            ChenHong.addSalary(1000);
            ChenHong.show();
        }catch (Exception e){
            System.out.println("陈虹" + e.getMessage());// 【代码7】创建属性为(1003,"陈虹",45,47000)的员工，并各模拟一次减少1000元工资，增加5000元工资，模仿employee1员工的形式写
        }

        try{ //创建属性为(1005,"汪成功",45,40000)的员工
            employee1=new Employee(1005,"汪成功",45,40000);
            employee1.minusSalary(1000);
            employee1.addSalary(5000);
            employee1.show();
        }catch(Exception e){
            System.out.println("陈虹,"+e. getMessage ());
        }
    }
}

