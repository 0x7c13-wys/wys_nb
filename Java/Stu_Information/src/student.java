import java.util.Scanner;

public class student {
    Scanner scan = new Scanner(System.in);
    int ID;                     // 学号
    int age;                    // 年龄
    String name;                // 姓名
    float weight;               // 体重

    data birthday = new data(); // 生日
    data Regday = new data();   // 入学日期
    grade grade = new grade();  // 成绩



    /*
    *构造函数
     */
    public student(String name){
        this.name = name;               // 设置姓名
        setAge();                       // 设置年龄
        setWeight();                    // 设置体重
        setID();                        // 设置学号
        setBirthday();                  // 设置生日
        setRegday();                    // 设置入学日期
        setGrade_Chinese();             // 设置语文成绩
        setGrade_Math();                // 设置数学成绩
        setGrade_English();             // 设置英语成绩
        setGrade_PE();                  // 设置体育成绩
        setGrade_Java();                // 设置Java成绩
        setGrade_sum();                 // 设置总分
        setGrade_average();             // 设置平均分

    }



    /*
    *设置年龄
    */
    public void setAge(){
        System.out.println("请输入学生年龄:");
        this.age = scan.nextInt();
    }

    /*
     *设置年龄
     */
    public void setWeight(){
        System.out.println("请输入学生体重:");
        this.weight = scan.nextFloat();
    }

    /*
    * 设置学号
    */
    public void setID(){
        System.out.println("请输入学生学号:");
        this.ID = scan.nextInt();
    }

    /*
    *设置生日
    */
    public void setBirthday(){
        System.out.println("请输入学生生日:");
        System.out.println("年:");
        this.birthday.year = scan.nextInt();
        System.out.println("月:");
        this.birthday.month = scan.nextInt();
        System.out.println("日:");
        this.birthday.day = scan.nextInt();
    }

    /*
    *设置入学日期
     */
    public void setRegday(){
        System.out.println("请输入学生入学日期:");
        System.out.println("年:");
        this.Regday.year = scan.nextInt();
        System.out.println("月:");
        this.Regday.month = scan.nextInt();
        System.out.println("日:");
        this.Regday.day = scan.nextInt();
    }

    /*
    *设置语文成绩
    */
    public void setGrade_Chinese(){
        System.out.println("请输入学生语文成绩:");
        this.grade.Chinese = scan.nextFloat();
    }

    /*
    *设置数学成绩
    */
    public void setGrade_Math(){
        System.out.println("请输入学生数学成绩:");
        this.grade.Math = scan.nextFloat();
    }

    /*
    *设置英语成绩
    */
    public void setGrade_English(){
        System.out.println("请输入学生英语成绩:");
        this.grade.English = scan.nextFloat();
    }

    /*
     *设置体育成绩
     */
    public void setGrade_PE(){
        System.out.println("请输入学生体育成绩:");
        this.grade.PE = scan.nextFloat();
    }

    /*
     *设置Java成绩
     */
    public void setGrade_Java(){
        System.out.println("请输入学生Java成绩:");
        this.grade.Java = scan.nextFloat();
    }

    /*
     *设置总分
     */
    public void setGrade_sum(){
        this.grade.sum = this.grade.Chinese + this.grade.Math + this.grade.English + this.grade.PE + this.grade.Java;
    }

    /*
     *设置平均分
     */
    public void setGrade_average(){
        this.grade.average = this.grade.sum / 5;
    }


}
















































