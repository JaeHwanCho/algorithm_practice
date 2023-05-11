package solve;

import java.util.Scanner;

public class WorkingHours implements Solve{

    @Override
    public void method() {
        Scanner scanner = new Scanner(System.in);
        int sumHour = 0;
        int sumMinute = 0;
        for (int i = 0; i < 5; i++) {
            String str = scanner.nextLine();
            int startHour = Integer.parseInt(str.substring(0, 2));
            int startMinute = Integer.parseInt(str.substring(3, 5));
            int endHour = Integer.parseInt(str.substring(6, 8));
            int endMinute = Integer.parseInt(str.substring(9, 11));

            sumHour += endHour - startHour;
            sumMinute += endMinute - startMinute;
        }

        sumMinute += sumHour * 60;

        System.out.println(sumMinute);
    }
}
