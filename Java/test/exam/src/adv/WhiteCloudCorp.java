package adv;

public class WhiteCloudCorp extends AdvertisementBoard{

    String name = "白云有限公司";
    String Adv = "飞机中的战斗机，哎yes!";

    void show(Advertisement adver){
        adver.showAdvertisement();
        System.out.println(adver.getCorpName());
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
