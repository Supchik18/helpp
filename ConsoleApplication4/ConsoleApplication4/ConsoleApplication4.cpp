
import java.util.Scanner;
public class Main {


    public class TriangleType {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            System.out.print("Введите сторону a: ");
            int a = Integer.parseInt(scanner.nextLine());

            System.out.print("Введите сторону b: ");
            int b = Integer.parseInt(scanner.nextLine());

            System.out.print("Введите сторону c: ");
            int c = Integer.parseInt(scanner.nextLine());

            if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b)) {
                System.out.println("a, b и c являются сторонами прямоугольного треугольника");
            }
            else if (a == b || b == c || c == a) {
                System.out.println("a, b и c являются сторонами равнобедренного треугольника");
            }
            else if (a == b && b == c) {
                System.out.println("a, b и c являются сторонами равностороннего треугольника");
            }
            else if ((a + b <= c) || (b + c <= a) || (c + a <= b)) {
                System.out.println("a, b и c не являются сторонами треугольника");
            }
            else {
                System.out.println("a, b и c являются сторонами обычного треугольника");
            }

            scanner.close();
        }
    }
}