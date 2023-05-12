package solve;

import java.io.*;
import java.util.*;

public class AutomaticMapConstruction implements Solve {
    @Override
    public void method() throws IOException {
        int n;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        n = Integer.parseInt(st.nextToken());

        int[] arr = new int[16];
        arr[0] = 2;
        for (int i = 1; i <= n; i++) {
            arr[i] = 2 * arr[i - 1] - 1;
        }
        System.out.println(arr[n] * arr[n]);
    }
}
