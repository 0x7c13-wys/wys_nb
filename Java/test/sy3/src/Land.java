
public class Land {  
   public static void main(String args[]) {
       Village.setWaterAmount(200); //【代码7】用类名调用setWaterAmount(int m),并向参数传值200
       int leftWater =Village.waterAmount; //【代码8】用Village类的类名查看水量
       System.out.println("水井中有 "+leftWater+" 升水");
       Village zhaoZhuang,maJiaHeZhi;
       zhaoZhuang = new Village();
zhaoZhuang. setName("赵庄");
       maJiaHeZhi = new Village("马家河子");
       zhaoZhuang.setPeopleNumber(80);
       maJiaHeZhi.setPeopleNumber(120);
       zhaoZhuang.drinkWater(50);//【代码9】zhaoZhuang调用drinkWater(int n),并向参数传值50
       leftWater = maJiaHeZhi.lookWaterAmount();//【代码10】maJiaHeZhi调用lookWaterAmount()方法，能否表示为leftWater =Village.waterAmount
       String name=maJiaHeZhi.name;
       System.out.println(name+"发现水井中有 "+leftWater+" 升水");
       maJiaHeZhi.drinkWater(100);
       leftWater = zhaoZhuang.lookWaterAmount();//【代码11】zhaoZhuang调用lookWaterAmount()方法
       name=zhaoZhuang.name; 
       System.out.println(name+"发现水井中有 "+leftWater+" 升水");
       int peopleNumber = zhaoZhuang.getPeopleNumber(); //能否表示为int peopleNumber =Village.peopleNumber
       System.out.println("赵庄的人口:"+peopleNumber);
       peopleNumber = maJiaHeZhi.getPeopleNumber(); 
       System.out.println("马家河子的人口:"+peopleNumber);
    }
}

