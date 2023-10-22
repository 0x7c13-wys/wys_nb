
public class Village { 
     static int waterAmount = 0;//【代码1】定义int 型变量waterAmount模拟水井的水量，水井为多个村庄共享
    int peopleNumber;        //村庄的人数
    String name;            //村庄的名字
    public Village() {
    	           //【代码2】添加无参没有语句的构造方法
    }
    Village(String name) {
    setName(name);   //【代码3】参数name作为村庄的名字
    }
   void setName (String name) { //设置村庄的名字
       this.name=name;
    }
 static void setWaterAmount(int m) { //设置水井的水量
       if(m>=0) 
         waterAmount = m;
    } 
    void drinkWater(int n){ //从水井饮水
       if( waterAmount-n>=0) {
         waterAmount -= n;//【代码4】重新计算水井的水量
         System.out.println(name + "喝了" + n + "升水");
       }
       else
         waterAmount = 0;
    }
    static int lookWaterAmount() { //查看水井的水量
       return waterAmount;
    }
    void setPeopleNumber(int n) { //【代码5】设置村庄的人数
       this.peopleNumber = n;
    } 
    int getPeopleNumber() { //【代码6】获取村庄的人数
       return this.peopleNumber;
    } 
}
