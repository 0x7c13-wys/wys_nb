public class Computer {

    MobileStorage storage;

    public void set(MobileStorage storage){
        this.storage = storage;
    }

    public void ReadData(){
        storage.read();
    }

    public void WriteData(){
        storage.write();
    }
}
