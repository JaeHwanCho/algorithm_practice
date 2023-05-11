package solve;

import java.util.Scanner;


public class MileageComparison implements Solve
{
    @Override
    public void method() {
        int a, b;

        Scanner scanner = new Scanner(System.in);
        a = scanner.nextInt();
        b = scanner.nextInt();

        if (a > b) {
            System.out.println("A");
        }
        else if (a < b) {
            System.out.println("B");
        } else {
            System.out.println("same");
        }
    }
}