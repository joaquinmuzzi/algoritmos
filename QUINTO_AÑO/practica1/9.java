/* 3 Contar cuántos números pares hay en un array de 10 elementos. */

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int[] array = new int[10];
		int pares = 0;

		for(int i = 0; i < 10; i++) array[i] = i+1;
		for(int i = 0; i < 10; i++)  pares += array[i] % 2 == 0 ? 1 : 0;

		System.out.println(pares);

		sc.close();
	}

}

