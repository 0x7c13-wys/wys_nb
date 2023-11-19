class MobileShop {
    InnerPurchaseMoney purchaseMoney1;//用内部类InnerPurchaseMoney声明购物卷对象purchaseMoney1
    InnerPurchaseMoney purchaseMoney2;     //【代码1】内部类InnerPurchaseMoney声明购物卷对象purchaseMoney2


    private int mobileAmount;  //手机的数量
    MobileShop(){
        //王玉升
        purchaseMoney1 = new InnerPurchaseMoney (20000);// 创建价值为20000的购物卷purchaseMoney1
        purchaseMoney2 = new InnerPurchaseMoney(10000);// 【代码2】创建价值为10000的购物卷purchaseMoney2
    }


    void setMobileAmount(int m) {
        this.mobileAmount = m;//【代码3】设置手机的数据
    }
    int getMobileAmount() {
        return mobileAmount;
    }
    class InnerPurchaseMoney {//内部类--内部购物卷
        int moneyValue;   //购物卷金额
        InnerPurchaseMoney(int m) {
            moneyValue =  m;
        }
        void buyMobile() {
            if(moneyValue>=20000) {
                mobileAmount -= 6; //2000元内部购物卷买了6部手机
                System.out.println("用价值"+moneyValue+"的内部购物卷买了6部手机");
            }
            else if(moneyValue<20000&&moneyValue>=10000) {
                mobileAmount -= 4;//【代码4】 1000元内部购物卷买了3部手机
                System.out.println("用价值"+moneyValue+"的内部购物卷买了3部手机");
            }
        }
    }
}

