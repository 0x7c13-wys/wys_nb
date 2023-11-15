public class BankOfDalian extends Bank {
	   double year;
	   public double computerInterest() {
		   super.year = (int)year;//【代码2】将父类隐藏year设为year的整数
	       double r = year-(int)year;
	       int day = (int)(r * 1000);//【代码3】计算零头天
	       double yearInterest = super.computerInterest();//【代码4】调用父类隐藏的方法计算整年的利息
	       double interest = yearInterest + (day / 365.0) * interestRate;//【代码5】计算总利息
	       System.out.printf("%d元存在大连银行%d年零%d天的利息:%f元\n ",savedMoney,super.year,day,interest);
	      return interest;
	   }
	}

