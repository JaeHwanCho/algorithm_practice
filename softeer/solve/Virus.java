package solve;

import java.util.*;


public class Virus implements Solve
{
    @Override
    public void method() {
        long k, p, n;

        Scanner scan = new Scanner(System.in);
        k = scan.nextInt();
        p = scan.nextInt();
        n = scan.nextInt();

        long result = k;
        for (long i = 0; i < n; i++) {
            result = result * p % 1000000007;
        }
        System.out.println(result);
    }
}