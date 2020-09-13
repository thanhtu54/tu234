#include<stdio.h>
#include<conio.h>
using namespace std;
void nhapmang(int a[], int& n)
{
    printf("nhap so phan tu :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf(" phan tu thu %d :", i);
        scanf("%d", &a[i]);
    }
}
int xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}
void sapxeptang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j]) //neu giam thi doi thanh dau >
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    printf("\n mang sap xep giam la: ");
    xuatmang(a, n);
}
void nhapmang(int a[], int& n)
{
    printf("nhap so phan tu :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf(" phan tu thu %d :", i);
        scanf("%d", &a[i]);
    }
}
int xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}
void chen1sokvaocuoimang(int a[], int n, int k) //chen cuoi
{
    for (int i = 0; i < n; i++)
    {
        a[n] = k;
    }
    n = n + 1;
    xuatmang(a, n);
}
void chen1sokvaodaumang(int a[], int n, int k) //chen dau
{
    for (int i = n; i >= 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = k;
    n++;
    xuatmang(a, n);
}
