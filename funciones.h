#define mxP 100

typedef struct {
    char nombre[100];
    int cantidad;
    float precio;
} Pr;

void aP(Pr *prs, int *nP);
void eP(Pr *prs, int nP);
void delP(Pr *prs, int *nP);
void lP(Pr *prs, int nP);
void mostrarFactura(Pr *prs, int nP);
