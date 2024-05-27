package adv;

public class BlackLandCorp extends AdvertisementBoard{
    String name = "黑土集团";
    String Adv = "劳动是爹，土地是妈！";


    void show(Advertisement adver){
        adver.showAdvertisement();
        System.out.println(adver.getCorpName());;
    }


    @Override
    void showAdvertisement() {
        System.out.println(this.Adv);;
    }

    @Override
    String getCorpName() {
        return this.name;
    }

}
