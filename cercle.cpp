#include<iostream>
#include<cmath>
int main(int argc, char**argv){
int r,perim,aire,x;
const float pi=3.14;
do{
//on demande à l'utilisateur d'entrer le rayon// 
std::cout<<"Entrer le rayon du cercle"<<std::endl;
std::cin>>r;
//on determine le perimetre et l'aire dece cercle//
perim= 2*r*pi;
aire= pi*pow(r,2);
//on renvoie le resulatat à l'utilisateur//
std::cout<<"la circonference de ce cercle est de:"<<perim<<" et sa surface est de:"<<aire;
std::cin>>x;
}while(x!=0);
return 0;
}
