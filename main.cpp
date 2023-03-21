//Матрици.
#include <iostream>
#include <array>
//3. В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной диагонали
/*int main(){
    const int nrows=10,ncols=10;
    int sum=0;
    std::array<std::array<int,nrows>,ncols>matrix;
    srand(0);
    for (int i=0;i<nrows;i++){
        for (int j=0;j<ncols;j++){
            matrix[i][j]=rand()%100-50;
            if((i==j) && (matrix[i][j]<0)){
                std::cout<<matrix[i][j]<<" ";
                sum+=matrix[i][j];
            }
        }
    }
    std::cout<<sum;
    return 0;
}*/
/*6. Дана матрица. Составить массив, каждый элемент которого равен максимальному
элементу соответствующей строки матрица.*/
/*
int main(){
    const int nrows=10,ncols=10;
    int max=-51;
    std::array<std::array<int,nrows>,ncols>matrix;
    std::array<int,nrows>massiv;
    srand(0);
    for (int i=0;i<nrows;i++){
        for (int j=0;j<ncols;j++){
            matrix[i][j]=rand()%100-50;
            std::cout<<matrix[i][j]<<"\t";
            if(max<matrix[i][j])
                max=matrix[i][j];
            if(j==ncols-1){
                massiv[i]=max;
                std::cout<<std::endl;
                max=-51;
            }
        }
    }
    for (int i=0;i<nrows;i++){
        std::cout<<massiv[i]<<" ";
    }
}
*/
/*7. Дана матрица. Элементы первой строки — количество осадков в соответствующий
день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
(ураган — когда самый сильный ветер был в самый дождливый день).*/
int main(){
    const int nrows=2,ncols=10;
    int max=-51,jmax1=0,jmax2=0;
    std::array<std::array<int,nrows>,ncols>matrix;
    srand(0);
    for (int j=0;j<ncols;j++){
        matrix[0][j]=rand()%100-50;
        std::cout<<matrix[0][j]<<"\t";
        if(max<matrix[0][j]){
            max=matrix[0][j];
            jmax1=j;
        }
    }
    max=-51;
    std::cout<<std::endl;
    for (int j=0;j<ncols;j++){
        matrix[1][j]=rand()%100-50;
        std::cout<<matrix[1][j]<<"\t";
        if(max<matrix[1][j]){
            max=matrix[1][j];
            jmax2=j;
        }
    }
    std::cout<<std::endl;
    if(jmax1==jmax2)
        std::cout<<"Yes"<<jmax1<<' '<<jmax2;
    else
        std::cout<<"No"<<jmax1<<' '<<jmax2;
}
