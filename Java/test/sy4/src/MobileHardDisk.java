public class MobileHardDisk extends MobileStorage{

    @Override
    public void read(){
        System.out.println("移动硬盘读完成");
    }

    @Override
    public void write(){
        System.out.println("移动硬盘写完成");
    }
}
