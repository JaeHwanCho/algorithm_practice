package solve;

import java.io.*;
import java.util.*;

public class SecretMenu implements Solve {
    @Override
    public void method() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int m = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        String secret = "";
        st = new StringTokenizer(br.readLine(), " ");
        for (int i = 0; i < m; i++) {
            secret += st.nextToken();
        }
        String input = "";
        st = new StringTokenizer(br.readLine(), " ");
        for (int i = 0; i < n; i++) {
            input += st.nextToken();
        }

        if (input.contains(secret)) {
            System.out.println("secret");
        } else {
            System.out.println("normal");
        }
    }
}
