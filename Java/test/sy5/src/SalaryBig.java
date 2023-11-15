class SalaryBig extends Exception{//定义工资低异常类

    public SalaryBig() {
        super("工资不能高于最高工资!"); //调用父类构造方法，异常对象. getMessage ()方法返回值设为"工资不能低于最低工资!"信息
    }


}
