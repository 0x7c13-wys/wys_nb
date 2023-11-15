public class NewYear {
    public static void main(String args[]) {
        MobileShop shop = new MobileShop();
        shop.setMobileAmount(30);
        System.out.println("手机专卖店目前有" + shop.getMobileAmount() + "部手机");
        shop.purchaseMoney1.buyMobile(); //手机专卖店使用价值2000元内部购物卷销售手机
        shop.purchaseMoney2.buyMobile(); //【代码5】手机专卖店使用价值1000元内部购物卷销售手机
        System.out.println("手机专卖店目前有" + shop.getMobileAmount() + "部手机");
    }
}
