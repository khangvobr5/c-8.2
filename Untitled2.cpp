int main() {
    int arr[100], n, i, x;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap c�c phan tu cua mang:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu can t�m: ");
    scanf("%d", &x);
    int found = 0;
    for (i = 0; i < n; ++i) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Vi tr� cua phan tu %d trong mang l� %d\n", x, i);
    } else {
        printf("Phan tu %d kh�ng ton tai trong mang\n", x);
    }
    return 0;
}
