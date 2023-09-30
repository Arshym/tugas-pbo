import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // variabel dan tipe data
        String namae;
        int usia;

        // inputan dan outputan
        Scanner scanner = new Scanner(System.in);
        System.out.print("siapa nama anda? ");
        namae = scanner.next();
        System.out.print("berapa usia anda? ");
        usia = scanner.nextInt();
        System.out.println("nama anda " + namae + " dan usia anda " + usia + " tahun");
        System.out.println();

        // array satu dimensi
        int[] angka = {1, 3, 5, 7, 9};
        System.out.println("angka = " + angka[1]);
        System.out.println();

        // array multidimensi
        String[][] nama = {{"ucuk", "paji", "ochi"},
                {"jae", "sahi", "dobby"},
                {"ruto", "jongu", "uwan"}};
        System.out.println("nama pada indeks ke-(1,1) adalah = " + nama[1][1]);
        System.out.println();

        // perulangan for
        for (int i = 0; i < 3; ++i) {
            System.out.println("find your treasure");
        }
        System.out.println();

        // percabangan if else
        int x = 1;
        int y = 3;
        if (x >= y) {
            System.out.println("x lebih besar atau sama dengan y");
        } else {
            System.out.println("x lebih kecil daripada y");
        }
        System.out.println();

        // perulangan while
        int j = 1;
        while (j <= 3) {
            System.out.print(j + " ");
            ++j;
        }
        System.out.println();

        // perulangan do while
        int a = 1;
        do {
            System.out.println("Hello Treasure");
            ++a;
        } while (a <= 3);
        System.out.println();

        // comment
        /* comment
           comment */
    }
}