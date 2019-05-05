int length1(double gdata[]);
int length2(double gdata[][2]);
int length3(double gdata[][3]);
int length4(double gdata[][4]);
int length5(double gdata[][5]);
int length6(double gdata[][6]);
int length2i(int gdata[][2]);
void copyd(int from, int upto, double q[], double p[]);
void copyi(int from, int upto, int q[], int p[]);
int addptd2(double gdata[][2], double pt[2]);
int addptd3(double gdata[][3], double pt[3]);
int addptd4(double gdata[][4], double pt[4]);
int addptd5(double gdata[][5], double pt[5]);
int addptd6(double gdata[][6], double pt[6]);
int add1(double gdata[], double x);
int add2(double gdata[][2], double x, double y);
int add3(double gdata[][3], double x, double y, double z);
int push2(double x, double y, double ptL[][2]);
int push3(double x, double y, double z, double ptL[][3]);
int push4(double x, double y, double z, double w, double ptL[][4]);
int push5(double x, double y, double z, double w, double u, double ptL[][5]);
int push6(double x, double y, double z, double w, double u, double v,double ptL[][6]);
void pull2(int num, double ptL[][2],double pt[2]);
void pull3(int num, double ptL[][3],double pt[3]);
void pull4(int num, double ptL[][4],double pt[4]);
void pull5(int num, double ptL[][5],double pt[5]);
void pull6(int num, double ptL[][6],double pt[6]);
int appendd2(int level, int from,int upto, double gdata[][2],double mat[][2]);
int appendd3(int level, int from,int upto, double gdata[][3],double mat[][3]);
int appendd6(int level, int from,int upto, double gdata[][6],double mat[][6]);
int prependd2(int from,int upto, double gdata[][2],double mat[][2]);
int prependd3(int from,int upto, double gdata[][3],double mat[][3]);
int appendd1(double num,double numvec[]);
int prependd1(double num, double numvec[]);
int appendi1(int num,int numvec[]);
int prependi1(int num, int numvec[]);
int removei2(int nrmv,int mat[][2]);
void removed3(int nrmv,double mat[][3]);
int dataindexi1(int out[],int din[][2]);
int dataindexd1(double out[],int din[][2]);
int dataindexd2(int level,double out[][2],int din[][2]);
int dataindexd3(int level, double out[][3],int din[][2]);
int dataindexd4(int level, double out[][4],int din[][2]);
int dataindexd6(int level, double out[][6],int din[][2]);
void replacelistd1(int ii,double out[],double rep[]);
void replacelistd2(int level,int jj,double out[][2],double rep[][2]);
void replacelistd3(int level,int jj,double out[][3],double rep[][3]);
void replacelistd6(int level,int ii,double out[][6],double rep[][6]);
void removelistd2(int level,int ii,double out[][2]);
void dispvec(int n,double dt[]);
void dispveci(int n,int dt[]);
void dispmatd1all(double dt[]);
void dispmatd2(int from, int upto, double mat[][2]);
void dispmatd3(int from, int upto, double mat[][3]);
void dispmatd4(int from, int upto, double mat[][4]);
void dispmatd5(int from, int upto, double mat[][5]);
void dispmatd6(int from, int upto, double mat[][6]);
void dispmatd2all(double mat[][2]);
void dispmatd3all(double mat[][3]);
void dispmatd4all(double mat[][4]);
void dispmatd5all(double mat[][5]);
void dispmatd6all(double mat[][6]);
void dispmati2(int from, int upto, int mat[][2]);
void dispmati1(int from, int upto, int mat[]);
void writedata3(const char *fname, double out[][3]);
void readdata3(const char *fname, double out[][3]);
void writedata2(const char *fname, double out[][2]);
void readdata2(const char *fname, double out[][2]);
int output2(const char *var, const char *fname, int level, double out[][2]);
void simplesort(double number[]);
int memberi(int a, int list[]);
double dotprod(int dim, double p[], double q[]);
double norm(int dim, double p[]);
double dist(int dim, double p[], double q[]);
void crossprod(int dim,double a[3],double b[3], double out[3]);
void reflectpoint(double p1[2],double regard[][2],double p2[2]);
void pointoncurve(double t, double gdata[][2], double eps, double pt[]);
int partcrv(double a,double b,double pkL[][2], double pL[][2]);
int partcrv3(double a,double b,double pkL[][3], double pL[][3]);
int connectseg(double pdata[][2], double eps, double out[][2]);
int connectseg3(double pdata[][3], double eps, double out[][3]);
void koutenseg(double a[2], double b[2], double c[2], double d[2],
          double eps, double eps2, double out[4]);
double paramoncurve(double p[2], int n, double ptL[][2]);
void nearestptpt(double pa[2], double pL[][2], double ans[4]);
int intersectselfPp(double data1[][2],double eps,double eps1s,double kL[][4]);
int intersectcrvsPp(double data1[][2], double data2[][2],
         double eps,double eps1s, double kL[][4]);
int dropnumlistcrv(double qd[][2], double eps1, int out[]);
int increasept2(double ptL[][2], int nn, double out[][2]);
int increasept3(double ptL[][3], int nn, double out[][3]);
void bezierpt(double t, double p0[2], double p3[2], 
        double p1[2], double p2[2], double ptout[2]);
int bezier(double ptL[][2], double ctrL[][4], int num, double out[][2]);
int ospline(int level, double ptL[][2], int num, double out[][2]);
void bezierpt3(double t, double p0[3], double p3[3], 
        double p1[3], double p2[3], double ptout[3]);
int bezier3(double ptL[][3], double ctrL[][6], int num, double out[][3]);
int ospline3(int level, double ptL[][3], int num, double out[][3]);
void segplot(double x1,double y1,double x2,double y2,double seg[][2]);
void addsegplot(double x1,double y1,double seg[][2]);
void circledata(double cx,double cy,double r, int num,double out[][2]);
void intersectline(double p1[2],double v1[2], double p2[2],double v2[2],double out[4]);
void intersectseg(double seg1[][2],double seg2[][2], double out[5]);
int osplineseg(double ptlist[5][2],int num,double out[][2]);
void intersectpartseg(double crv1[][2],double crv2[][2],int ii, int jj,int num,double out[6]);
void collectsameseg(double ptdL[][6],double rL[][6]);
void intersectcurvesPp(double crv1s[][2],double crv2s[][2],int nbez,double out[][6]);
void intersectcurves(double crv1[][2],double crv2[][2],int nbez,double out[][2]);

const double Inf=99999;
const int Infint=30000;