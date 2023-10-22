public class FamilyPerson {
    static String Surname;
    String name;


    public static void setSurname(String Surname){
        FamilyPerson.Surname = Surname;                          //【代码1】将参数surname设置成姓氏
    }

    public void setName(String name) {
        this.name = name;                                       //【代码2】将参数name设置成名字
    }
}
