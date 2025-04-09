/* 4 Invertir el contenido de un array de 6 elementos (sin usar otro array). */

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int[] array = new int[6];

		for (int i = 0; i < 6; i++) array[i] = i+1;

		for(int i = 0; i < 3; i++) {
			int a = array[i];
			int temp = array[array.length - 1];
			array[array.length - 1] = a;
			a = temp;
		}

		for (int i = 0; i < 6; i++) System.out.println(array[i]);

		sc.close();
	}

}

