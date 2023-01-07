#include <stdlib.h>

    void RentalPS(){
        printf("\n============================================================");
        printf("\n|                      Toko Rental ON                      |");
        printf("\n============================================================");
        printf("\n| Pilihan Konsol Yang Bisa Di Rental | Harga Rental Perjam |");
        printf("\n============================================================");
        printf("\n| 1. playstation 3                   | Rp. 4000            |");
        printf("\n| 2. playstation 4                   | Rp. 6000            |");
        printf("\n| 3. playstation 5                   | Rp. 8000            |");
        printf("\n| 4. XBOX 360                        | Rp. 8000            |");
        printf("\n============================================================");

    }

    float Total(float jam){
        float total;
        float harga = 4000;
        total=4000 * jam;
        return total;
    }
    float Total1(float jam){
        float total;
        float harga = 6000;
        total=6000 * jam;
        return total;
    }
    float Total2(float jam){
        float total;
        float harga = 8000;
        total=8000 * jam;
        return total;
    }
    float Total3(float jam){
        float total;
        float harga = 8000;
        total=8000 * jam;
        return total;
    }


void main()
{
    char console [4][20]={"playstation 3","playstation 4","playstation 5","XBOX 360" };
    char username[20]="admin",password[20]="admin";
    char user[10],pass[10];
    char nama[100];
    char m_jam[100];
    char ulang;
    int pilihan,tv,jam,harga,total;
    printf("\n============================================================");
    printf("\n|                         Login                            |");
    printf("\n============================================================\n");
    printf("   Masukkan username :");
    scanf("%s",user);
    printf("   Masukkan password :");
    scanf("%s",pass);
    printf("============================================================\n");

    if (strcmp(username,user)==0 && strcmp(password,pass)!=0)
    {
    printf("                >>Maaf Password anda salah!!<<\n");
    printf("============================================================\n");
    }
     if (strcmp(username,user)!=0 && strcmp(password,pass)==0)
    {
    printf("                >>Maaf Username anda salah!!<<\n");
    printf("============================================================\n");
    }
     if (strcmp(username,user)!=0 && strcmp(password,pass)!=0)
    {
    printf("                >>Maaf Anda tidak terdaftar<<\n");
    printf("============================================================\n");

    }

    if (strcmp(username,user)==0 && strcmp(password,pass)==0)
    {

system ("cls");
        printf("                   >>Selamat Datang %s<<",user);

        mulai:
        RentalPS();
        printf("\n| Masukan Pilihan Anda : ");
        scanf("%d",&pilihan);



        switch (pilihan){
            case 1:
                system ("cls");
                printf("\n=============================================================================");
                printf("\n                             | %s |", console [0]);
                printf("\n=============================================================================\n");
                printf("Nama Pemesan        : ");
                scanf("%s",&nama);
                printf("Nomer TV            : ");
                scanf("%d",&tv);
                printf("Rental Berapa Jam   : ");
                scanf("%d",&jam);
                printf ("Mulai dari jam     :");
                scanf("%s",&m_jam);
                printf("\n=============================================================================");

    system ("cls");
    printf("\n=============================================================================");
    printf("\n                             | Struk Pembayaran |");
    printf("\n=============================================================================");
    printf("\n| Nama                       : %s                                           ",nama);
    printf("\n| No TV                      : %d                                           ",tv);
    printf("\n| Per Jam                    : %d                                           ",jam);
    printf("\n| Mulai dari Jam             : %s                                           ",m_jam);
    printf("\n| total yang harus di bayar  : %.2f                                         ", Total(jam));
    printf("\n=============================================================================");

                break;
            case 2:
                system ("cls");
                printf("\n=============================================================================");
                printf("\n                             | %s |", console [1]);
                printf("\n=============================================================================\n");
                printf("Nama Pemesan        : ");
                scanf("%s",&nama);
                printf("Nomer TV            : ");
                scanf("%d",&tv);
                printf("Rental Berapa Jam   : ");
                scanf("%d",&jam);
                printf ("Mulai dari jam     :");
                scanf("%s",&m_jam);
                printf("\n=============================================================================");

    system ("cls");
    printf("\n=============================================================================");
    printf("\n                             | Struk Pembayaran |");
    printf("\n=============================================================================");
    printf("\n| Nama                       : %s                                           ",nama);
    printf("\n| No TV                      : %d                                           ",tv);
    printf("\n| Per Jam                    : %d                                           ",jam);
    printf("\n| Mulai dari Jam             : %s                                           ",m_jam);
    printf("\n| total yang harus di bayar  : %.2f                                         ", Total1(jam));
    printf("\n=============================================================================");

                break;

            case 3:
                system ("cls");
                printf("\n=============================================================================");
                printf("\n                             | %s |", console [2]);
                printf("\n=============================================================================\n");
                printf("Nama Pemesan        : ");
                scanf("%s",&nama);
                printf("Nomer TV            : ");
                scanf("%d",&tv);
                printf("Rental Berapa Jam   : ");
                scanf("%d",&jam);
                printf ("Mulai dari jam     :");
                scanf("%s",&m_jam);
                printf("\n=============================================================================");

    system ("cls");
    printf("\n=============================================================================");
    printf("\n                             | Struk Pembayaran |");
    printf("\n=============================================================================");
    printf("\n| Nama                       : %s                                           ",nama);
    printf("\n| No TV                      : %d                                           ",tv);
    printf("\n| Per Jam                    : %d                                           ",jam);
    printf("\n| Mulai dari Jam             : %s                                           ",m_jam);
    printf("\n| total yang harus di bayar  : %.2f                                         ", Total2(jam));
    printf("\n=============================================================================");

                break;

            case 4:
                system ("cls");
                printf("\n=============================================================================");
                printf("\n                             | %s |", console [3]);
                printf("\n=============================================================================\n");
                printf("Nama Pemesan        : ");
                scanf("%s",&nama);
                printf("Nomer TV            : ");
                scanf("%d",&tv);
                printf("Rental Berapa Jam   : ");
                scanf("%d",&jam);
                printf ("Mulai dari jam     :");
                scanf("%s",&m_jam);
                printf("\n=============================================================================");

    system ("cls");
    printf("\n=============================================================================");
    printf("\n                             | Struk Pembayaran |");
    printf("\n=============================================================================");
    printf("\n| Nama                       : %s                                           ",nama);
    printf("\n| No TV                      : %d                                           ",tv);
    printf("\n| Per Jam                    : %d                                           ",jam);
    printf("\n| Mulai dari Jam             : %s                                           ",m_jam);
    printf("\n| total yang harus di bayar  : %.2f                                         ", Total3(jam));
    printf("\n=============================================================================");

                break;


            default:
                printf("maaf playstation atau XBOX yang anda pilih tidak ada ");
                break;
        }


    }
printf("\n=============================================================================\n");
printf ("\n apakah anda ingin ulang (Y/x) :");
scanf ("%s", &ulang);
printf("\n=============================================================================");

if (ulang=='y')
{
    system("cls");
    goto mulai;

}
else
{
    system("cls");
    printf("\n=============================================================================\n");
    printf ("|              Terimakasih Sudah Berkunjung ke Rental ON                      |");
    printf("\n=============================================================================");
}

return 0;
}
