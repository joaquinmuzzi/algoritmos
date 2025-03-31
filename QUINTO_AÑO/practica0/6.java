/*6. Alumno Aprobado: Determinar si un alumno cumple con el 80% de asistencia(faltas>15) y
un promedio mayor a 6 para aprobar una materia (&&)*/

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        
        System.out.println("cuantas faltas tenes");
        int faltas = sc.nextInt();
        System.out.println("cual es tu promedio");
        double promedio = sc.nextLine();

        if (faltas > 15 && promedio > 6) {
            System.out.println("APROBADO");
        } else {
            System.out.println("DESAPROBADO");
        }
	}
}
