public class Test {




    public static void main(String[] args) {

        Office office = new Office();

        Programmer wys = new Programmer("YsWang", 1012, 99999);
        office.show(wys);

        Manager a = new Manager("小明", 1012, 10);
        office.show(a);




    }


}
