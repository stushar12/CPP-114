int middle(int A, int B, int C)
{
    int a = A - B;
    int b = B - C;
    int c = C - A;
    if (a * b > 0)
        return B;
    else if (b * c > 0)
        return C;
    else
        return A;
}