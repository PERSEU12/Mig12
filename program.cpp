#include <iostream>
#include <cmath>

using namespace std;

int main(){
//declaracao de variaveis
int respUm;
float R;
int V;
float I;
char respForm;
float P;

cout<<"que operacao deseja executar?"<< endl;

//operacoes(opcoes)

cout<<"\n1-Lei de Ohms\n\n2-Formulas de potencia\n\n  >>>>> ";
cin>>respUm;

//Primeira lei de Ohms--//-------------------

if(respUm==1){
	cout<<"insira o valor de V, R, I, respectivamente"<< endl;
        cout<<"V=";
	cin>>V;
	cout<<"R=";
	cin>>R;
	cout<<"I=";
	cin>>I;

	if(V==0){
		V=R*I;
		cout<<"O valor de V="<<V<<endl;
	}
	else if(R==0){
		R=V/I;
		cout<<"O valor de R="<<R<<endl;

	}
	else if(I==0){
		I=V/R;
		cout<<"O valor de I="<<I<<endl;
	}
}
//final----------------//--------------------

//formulas de potencia----------------------
else if(respUm==2){
	cout<<"Escolha uma das formulas a seguir para ser usada: \n"<<endl;
	cout<<"\na)P=VxI"<< endl;
	cout<<"b)P=RxI²"<< endl;
	cout<<"c)P=V²/R"<< endl;
	cout<<">>>> ";
	cin>>respForm;
	if(respForm=='a'){
		cout<<"Entre com oque se pede"<< endl;
		cout<<"P > ";
		cin>>P;
		cout<<"V > ";		cin>>V;
		cout<<"I > "<< endl;
		cin>>I;
		if(P==0){
			P=V*I;
			cout<<"O valor de P="<<P;
		}
		else if(V==0){
			V=P/I;
			cout<<"O valor de V="<<V;
		}
		else if(I==0){
			I=P/V;
			cout<<"O valor de I="<<I;
		}
	}
	else if(respForm=='b'){
		P=R*pow(I, 2);
                cout<<"Entre com os valores pedidos"<< endl;
                cout<<"P > "<< endl;
                cin>>P;
                cout<<"R > "<< endl;
                cin>>R;
                cout<<"I > "<< endl;
                cin>>I;
		if(P==0){
			P=V*pow(I, 2);
			cout<<"O valor de P="<<P;
		}
		else if(I==0){
			I=sqrt(P/R);
			cout<<"O valor de I="<<I;
		}
		else if(R==0){
			R=P/pow(I, 2);
			cout<<"O valor de R="<< endl;
		}
      	}
	else if(respForm=='c'){
		P=pow(V, 2)/R;
                cout<<"Entre com os valores pedidos"<< endl;
                cout<<"P > "<< endl;
                cin>>P;
                cout<<"R > "<< endl;
                cin>>R;
		cout<<"V > "<< endl;
		cin>>V;
		if(P==0){
			cout<<"O valor de P="<<P<< endl;
			P=pow(V, 2)/R;
		}
		else if(V==0){
			V=sqrt(P*R);
			cout<<"O valor de V="<<V<<endl;
		}
		else if(R==0){
			R=pow(V, 2)/P;
			cout<<"O valor de R="<<R<< endl;
		}
	}
}
//final------------------------------------
}

