#include<stdio.h>
int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double p=(((a*2)+(b*3)+(c*4)+(d*1)));
    double z=p/10;
    printf("Media: %.1f\n",z);
    if(z >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(z < 5.0){
        printf("Aluno reprovado.\n");
    }else if(z>=5.0 && z<=6.9){
    printf("Aluno em exame.\n");
      
    double e;
    scanf("%lf",&e);
    printf("Nota do exame: %.1f\n",e);
    double q=((z+e)/2);
    if(q>=5.0){
    printf("Aluno aprovado.\n");   
    }else{
    printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",q);
    }
    return 0;
}

