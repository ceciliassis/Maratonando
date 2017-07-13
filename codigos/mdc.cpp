int mdc(int a, int b) {
    return b == 0 ? a : mdc(b, a % b);
}