public class main4 {



    public static void main(String[] args) {

        Computer c = new Computer();

        c.set(new FlashDisk());
        c.WriteData();
        c.ReadData();

        c.set(new MobileHardDisk());
        c.WriteData();
        c.ReadData();

        c.set(new MP3Player());
        c.WriteData();
        c.ReadData();

    }
}
