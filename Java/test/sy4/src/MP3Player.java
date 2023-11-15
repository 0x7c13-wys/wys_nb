public class MP3Player extends MobileStorage{

    @Override
    public void read(){
        System.out.println("MP3读完成！");
    }

    @Override
    public void write(){
        System.out.println("MP3写完成！");
    }

    public void PlayMusic(){
        System.out.println("MUSIC正在播放！");
    }
}
