public class Student {
    private int ID;             //学号
    private int Age;             //年龄
    private String  name;       //姓名

    public Student(int ID, int age, String name) {                  //含有三个参数的构造方法
        this.ID = ID;
        this.Age = age;
        this.name = name;
    }
    
    
    public int getID(){return this.ID;}                     //返回学号
    public int getAge(){return this.Age;}                   //返回年龄
    public String getName(){return  this.name;}             //返回姓名
}
