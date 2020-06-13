#include <iostream>
using namespace std;

int main(){
int resultado;
char examen[2];

cout<<"PSICOTERAPIA EDUCATIVA INFANTIL"<<endl;   
cout<<"DESARROLLO DE HABILIDADES COGNITIVAS"<<endl;   
cout<<"DEPARTAMENTO DE DIFICULTADES ESPECIFICAS DEL APRENDIZAJE *DEA*"<<endl;
cout<<"WISC IV: Prueba de medicion de coeficiente intelectual"<<endl;
cout<<"Digite el resultado obtenido por el paciente:"<<endl;
cin>>resultado;
cin.ignore(20,'\n');

if(resultado>=90)
       {
       cout<<"¿Desea canalizar al paciente a PSICOTERAPIA? S/N"<<endl;
       cin.get(examen,2);
       cin.ignore(20,'\n');

        if(examen[0]=='s' || examen[0]== 'S')
            {
            cout<<"El expediente del paciente ha sido enviado al departamento de PSICOTERAPIA"<<endl;
            }
        else 
            {    
            cout<<"El expediente se ha almacenado en DIFICULTADES ESPEDIFICAS DEL APRENDIZAJE"<<endl;
            }
       }
else 
       {    
       cout<<"Iniciar proceso de alta en DIFICULTADES ESPECÍFICAS DEL APRENDIZAJE"<<endl;
       }
       

	cout<<"fin del programa"<<endl;
	cin.get();     //espera a que oprimas enter
	return 0;
}