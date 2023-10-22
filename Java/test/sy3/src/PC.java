public class PC {
    CPU Cpu;
    HardDisk HD;


    public void setCpu(CPU cpu) {
        Cpu = cpu;
    }

    public void setHD(HardDisk HD) {
        this.HD = HD;
    }

    public void show(){

        System.out.println("wys说，CPU的速度是" + Cpu.speed + "硬盘的容量是" + HD.amount);

    }
}
