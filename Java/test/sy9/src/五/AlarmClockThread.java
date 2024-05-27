package 五;
import java.util.concurrent.TimeUnit;

class AlarmClockThread extends Thread {
    private ElectronicTimerThread electronicTimerThread;
    private static final int CLOCK_CHIME_INTERVAL = 60;
    private static final int ALARM_CHIME_COUNT = 5;

    /***
     * 王玉升
     * @param electronicTimerThread
     */

    public AlarmClockThread(ElectronicTimerThread electronicTimerThread) {
        this.electronicTimerThread = electronicTimerThread;
    }

    /***
     * 王玉升
     */
    @Override
    public void run() {
        while (true) {
            try {
                TimeUnit.SECONDS.sleep(CLOCK_CHIME_INTERVAL);
                if (System.currentTimeMillis() % 60 == 0) {
                    for (int i = 0; i < ALARM_CHIME_COUNT; i++) {
                        System.out.println("整点报时");
                        electronicTimerThread.stopRunning();
                        try {
                            TimeUnit.SECONDS.sleep(1);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        } finally {
                            electronicTimerThread.start();
                        }
                    }
                } else {
                    electronicTimerThread.start();
                }
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
