public class Bank {
	   int savedMoney;    //存款
	   int year;          //存款年限
	   double interest;   //利息
	   double interestRate = 0.29;   //利率
	   public double computerInterest() {    //计算利息
	      interest=year*interestRate*savedMoney;
	      return interest;
	   }
	   public void setInterestRate(double rate) {  //修改利率
	      interestRate = rate;
	   }
	}
