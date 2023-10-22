public class main6 {
    public static void main(String[] args) {

        CPU cpu = new CPU();
        cpu.setSpeed(2200);

        HardDisk disk = new HardDisk();
        disk.setAmount(500);


        PC pc = new PC();
        pc.Cpu = cpu;
        pc.HD = disk;

        pc.show();
    }
}
