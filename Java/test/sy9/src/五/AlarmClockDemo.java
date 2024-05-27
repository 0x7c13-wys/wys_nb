package 五;

public class AlarmClockDemo {
    /***
     * 王玉升
     * @param args
     */

    public static void main(String[] args) {
        ElectronicTimerThread electronicTimer = new ElectronicTimerThread();
        AlarmClockThread alarmClock = new AlarmClockThread(electronicTimer);

        electronicTimer.start();
        alarmClock.start();
    }
}

