package solve;

import java.io.*;
import java.util.*;

public class EightSpeedTransmission implements Solve {
    @Override
    public void method() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int number = Integer.parseInt(st.nextToken());
        if (number != 1 && number != 8) {
            System.out.println("mixed");
            return;
        }
        else if (number == 1) {
            for (int i = 1; i < 8; i++) {
                int nextNumber = Integer.parseInt(st.nextToken());
                if (number + 1 != nextNumber) {
                    System.out.println("mixed");
                    return;
                }
                else {
                    number = nextNumber;
                }
            }
            System.out.println("ascending");
        }
        else {
            for (int i = 1; i < 8; i++) {
                int nextNumber = Integer.parseInt(st.nextToken());
                if (number - 1 != nextNumber) {
                    System.out.println("mixed");
                    return;
                }
                else {
                    number = nextNumber;
                }
            }
            System.out.println("descending");
        }
    }
}
