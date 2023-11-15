public class ConstructionBank extends Bank {
	   double year;
	   public double computerInterest() {
	      super.year=(int)year; //将隐藏year设为year的整数
	      double r = year-(int)year;
	      int day=(int)(r * 1000); // 计算零头天数，如year =8.236表示8年236天
	      double yearInterest =  super.computerInterest();//【代码1】调用父类隐藏的方法计算整年的利息
	      double dayInterest = day * 0.0001 * savedMoney;
	      interest= yearInterest + dayInterest;
	      System.out.printf("%d元存在建设银行%d年零%d天的利息:%f元\n ", savedMoney,super.year,day,interest);
	      return interest;
	   }
	}

