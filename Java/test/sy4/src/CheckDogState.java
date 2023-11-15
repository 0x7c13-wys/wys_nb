public class CheckDogState {
    public static void main(String args[]) {
        Dog yellowDog =new Dog();
        System.out.print("狗在主人面前:");
        yellowDog.setState(new SoftlyState());
        yellowDog.show();
        System.out.print("狗遇到敌人:");
        yellowDog.setState(new MeetEnemyState());//【代码6】显示狗遇到敌人的表现
        yellowDog.show();
        System.out.print("狗遇到朋友:");
        yellowDog.setState(new MeetFriendState());
        yellowDog.show();
        //【代码7】显示狗遇到朋友的表现
        System.out.print("狗遇到同伴:");
        yellowDog.setState(new MeetAnotherDog());
        yellowDog.show();
        //【代码8】显示狗遇到同伴的表现
    }
}

