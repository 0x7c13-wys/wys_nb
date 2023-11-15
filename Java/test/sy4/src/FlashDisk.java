public class FlashDisk extends MobileStorage {

    @Override
    public void read(){
        System.out.println("U盘读完成！");
    }

    @Override
    public void write(){
        System.out.println("U盘写完成！");
    }
}
