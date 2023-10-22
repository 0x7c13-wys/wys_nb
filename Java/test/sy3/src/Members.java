public class  Members {
    public static void main(String args[]) {
      FamilyPerson.setSurname("李");//【代码3】将类FamilyPerson中surname变量赋值:"李"
        FamilyPerson father,sonOne,sonTwo;
      father = new FamilyPerson();//【代码4】创建father对象
      sonOne = new FamilyPerson();//【代码5】创建sonOne对象
      sonTwo = new FamilyPerson();//【代码6】创建sonTwo对象
      father.setName("向阳");//【代码7】将father名字设为"向阳"
      sonOne.setName("抗日");//【代码8】将sonOne名字设为"抗日"
      sonTwo.setName("抗日");//【代码9】将sonTwo名字设为"抗战"
        System.out.println("父亲:"+ FamilyPerson.Surname + father.name);   //【代码10】输出father姓名
        System.out.println("大儿子:"+ FamilyPerson.Surname + sonOne.name); //【代码11】输出sonOne姓名
        System.out.println("二儿子:"+ FamilyPerson.Surname + sonTwo.name); //【代码12】输出sonTwo姓名
        FamilyPerson.setSurname("张");// 【代码13】将father姓氏改为"张"
        System.out.println("父亲:"+ FamilyPerson.Surname + father.name);   //【代码14】输出father姓名
        System.out.println("大儿子:"+ FamilyPerson.Surname + sonOne.name);  //【代码15】输出sonOne姓名
        System.out.println("二儿子:"+ FamilyPerson.Surname + sonTwo.name);  //【代码16】输出sonTwo姓名
    }
}

