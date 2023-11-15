class Dog {  //面向接口的类
    DogState  state;   //接口成员变量
    public void setState(DogState s) {
        state = s;
    }
    public void show(){
        state.showState();
    }//【代码5】定义方法show(),显示狗的表现，接口回调
}
