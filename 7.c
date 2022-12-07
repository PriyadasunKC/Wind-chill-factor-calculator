# include <stdio.h>
# include <math.h>

int windChillFactor ();
int main(){

    windChillFactor();
    return 0;
}

int windChillFactor (){
    
    double windVelocity = 0;
    double temperature = 0;
    double wcf = 0;

    printf("Enter Wind velocity : ");
    scanf("%lf",&windVelocity);
    printf("Enter Temperature : ");
    scanf("%lf",&temperature);

    wcf =  35.74 + 0.6215 * temperature + (0.4275 * temperature - 35.75) * pow(windVelocity,0.16);
    printf("Wind chill factor : %lf",wcf);

    return 0;
}