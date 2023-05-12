package solve;

import java.io.*;
import java.util.*;

public class ElectronicDisplay implements Solve {
    @Override
    public void method() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int arr[][] = {
                {1, 1, 1, 0, 1, 1, 1}, // 0
                {0, 0, 1, 0, 0, 1, 0}, // 1
                {1, 0, 1, 1, 1, 0, 1}, // 2
                {1, 0, 1, 1, 0, 1, 1}, // 3
                {0, 1, 1, 1, 0, 1, 0}, // 4
                {1, 1, 0, 1, 0, 1, 1}, // 5
                {1, 1, 0, 1, 1, 1, 1}, // 6
                {1, 1, 1, 0, 0, 1, 0}, // 7
                {1, 1, 1, 1, 1, 1, 1}, // 8
                {1, 1, 1, 1, 0, 1, 1}, // 9
                {0, 0, 0, 0, 0, 0, 0}  // z
        };

        int t = Integer.parseInt(st.nextToken());

        for (int i = 0; i < t; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            String a = st.nextToken();
            String b = st.nextToken();
            while(a.length() != b.length()) {
                if (a.length() > b.length()) {
                    b = "z" + b;
                } else {
                    a = "z" + a;
                }
            }
            int count = 0;
            for (int k = 0; k < a.length(); k++) {
                if ((a.charAt(k) + "").equals("z")) {
                    for (int j = 0; j < 7; j++) {
                        if (arr[10][j] != arr[Integer.parseInt(b.charAt(k) + "")][j]) {
                            count++;
                        }
                    }
                }
                else if ((b.charAt(k) + "").equals("z")) {
                    for (int j = 0; j < 7; j++) {
                        if (arr[10][j] != arr[Integer.parseInt(a.charAt(k) + "")][j]) {
                            count++;
                        }
                    }
                }
                else {
                    for (int j = 0; j < 7; j++) {
                        if (arr[Integer.parseInt(a.charAt(k) + "")][j] != arr[Integer.parseInt(b.charAt(k) + "")][j]) {
                            count++;
                        }
                    }
                }
            }
            System.out.println(count);
        }
    }
}
