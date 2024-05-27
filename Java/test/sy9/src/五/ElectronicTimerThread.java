package 五;
import java.util.concurrent.TimeUnit;

class ElectronicTimerThread extends Thread {
    private boolean isRunning = true;

    /***
     * 王玉升
     */

    @Override
    public void run() {
        while (isRunning) {
            System.out.println("当前系统时间: " + System.currentTimeMillis());
            try {
                TimeUnit.SECONDS.sleep(1);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public void stopRunning() {
        isRunning = false;
    }
}
