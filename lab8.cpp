#include<iostream>
using namespace std;
int main() {
        int n,k,l,i,j;
        cout<<"введите размер матрицы:";
        cin >> n;
        double **a;
        a=new double* [n];
        double *g;
        g=new double [n];
        double *g1;
        g1=new double [n];
        for(i=0;i<n;i++) {
            a[i]=new double [n];
            for(j=0;j<n;j++) {
                cout<<"Введите элемент a["<<i+1<<","<<j+1<<"]: ";
                cin>>a[i][j];
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cout<<" "<<a[i][j];
            cout<<std::endl;
        }
        double max=a[0][0];
            k=0;
            l=0;
            for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                    if (a[i][j]>=max) {
                        max=a[i][j];
                        k=i;
                        l=j;
                    }                          
            }
            cout<<"Max a["<<k+1<<","<<l+1<<"]="<<max;
        double min=a[0][0];
            int k1=0;
            int l1=0;
            for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                if (a[i][j]<min) {
                    min=a[i][j];
                    k1=i;
                    l1=j;
                }
            }
            cout<<"\nMin a["<<k1+1<<","<<l1+1<<"]="<<min;
        for(i=0;i<n;++i) 
            g[i]=a[i][l1];
        for(j=0;j<n;++j) 
            g1[j]=a[k][j];
        for(i=0;i<n;++i)
            a[i][l1]=g1[i];
        for(j=0;j<n;++j) 
            a[k][j]=g[j];
        cout<<"\n";
        for(i=0;i<n;++i){
            for(j=0;j<n;++j)
                    cout<<" "<<a[i][j];
            cout<<std::endl;
        }
}