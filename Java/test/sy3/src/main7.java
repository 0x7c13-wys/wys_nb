public class main7 {
    public static void main(String[] args) {

        Cbox box1 = new Cbox();
        box1.setData(20.0, 30.0, 40.0);
        System.out.println("wys 计算得出 box1 的体积是" + box1.getVolume());


        Cbox box2 = new Cbox(20.0, 30.0, 40.0);
        System.out.println("wys 计算得出 box2 的体积是" + box2.getVolume());
    }


}
