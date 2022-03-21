#include <stdio.h>
#include <math.h>

#define Pi 3.14


int cylinder(double r, double h, double* V, double* S);

int main(){
    double r, h, Area, V;
    
        while(scanf("%lf %lf", &r, &h)!=EOF){
            if(cylinder(r, h, &Area, &V) == -1){
                fprintf(stderr, "Enter valid sides\n");
            }
            else{
                printf("Area=%lf  V=%lf\n", V, Area);
            }
        }

return 0;
}


int cylinder(double r, double h, double* V, double* S){

    if(r<=0 || h<=0){
        return -1;
    }
        *S=Pi*(r*r);
        *V=Pi*(r*r)*h;
        return 0;


}
