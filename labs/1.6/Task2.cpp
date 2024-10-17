/*
    Student: Yakymenko Artur
    Group: 123
    Lab 1.6
*/
int main() {
    int ntA;
    float fdvB;
    unsigned short wB;

    ntA = 274;
    fdvB = 1.001e-2;
    wB = 78;

    double dtcD;
    int ntE;
    char chbF;

    dtcD = ntA;
    ntE = fdvB;
    chbF = wB;

    dtcD = (double)ntA;
    ntE = (int)fdvB;
    chbF = (char)wB;

    double* pdtcD;
    void* pV;
    pV = &ntA;
    pdtcD = (double*)pV;
    dtcD = *pdtcD;

    int* pntE;
    pV = &fdvB;
    pntE = (int*)pV;
    ntE = *pntE;

    char* pchF;
    pV = &wB;
    pchF = (char*)pV;
    chbF = *pchF;
    return 0;
}