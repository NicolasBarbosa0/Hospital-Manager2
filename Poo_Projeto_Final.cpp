#include <iostream>
#include <string>

using namespace std;

class Role{

    public:
        string name;
        string email;
        string role;


        protected:
        string password;


};

void hospitalQ() {
 int answer;
        cin >> answer;

        switch (answer){
        case 1:
            cout << "Casa da Paz";
            break;
        case 2:
            cout << "Paz de Casa";
            break;
        case 3:
            cout << "Cura Senhor";
            break;
        default:
            cout << "Hospital não encontrado";
            hospitalQ();
    }
}

class Doctor : public Role {
    public:

        Doctor() {   //Construtor

        role = "Medico";

        cout << "Ola doutor! Poderia nos informar seu nome?\n";
        cin >> name;


        cout << "Prazer em conhece-lo Dr." << name << "! Poderia nos informar seu email?\n";
        cin >> email;

        cout << "A qual hospital do nosso sistema o sr esta cadastrado?\n1- Casa da Paz\n2- Paz de Casa\n3- Cura Senhor\n";

        hospitalQ();

        cout << "\nO que gostaria de fazer hoje?\n1- Adicionar horario de consulta\n2- Consultar hospital associado\n3- Prescrever um remedio";

        }



};

class Hospital : public Role {
    public:

        string address;

    Hospital() {   //Construtor

    role = "Hospital";

    cout << "Agradecemos sua escolha de se registrar em nosso programa! Poderia nos informar o nome de sua instituicao?\n";
    cin >> name;

    cout << "\nEh um prazer ter o hospital " << name << " em nosso programa! Por favor nos iforme seu email comercial:\n";
    cin >> email;

    cout << "\nTudo pronto! O que voce gostaria de fazer agora?\n\n1-Adicionar endereco\n2- Ver funcionarios associados\n3-Adicionar funcionario";
    }

};

class Patient : public Role {
    public:


        Patient() {   //Construtor

        role = "Paciente";

        cout << "Espero que esteja bem! Poderia nos informar seu nome?\n";
        cin >> name;

        cout << "Prazer em conhece-lo " << name << "! Poderia nos informar seu email?\n";
        cin >> email;

        cout << "Em que hospital você gostaria de marcar uma consulta?\n\n1- Casa da Paz\n2- Paz de Casa\n3- Cura Senhor\n";
        hospitalQ();

        }


};

void createObj() {
    int aux;
    cin >> aux;

    if (aux == 1) {
        Patient newPatient;
    } else if (aux == 2) {
        Doctor newDoctor;
    } else if (aux == 3) {
        Hospital newH;
    } else {

        cout << "Desculpe, nao entendi. Por favor tente novamente";
        createObj();
    }
}

class User : public Role {

    public:


        User() { //Construtor

            cout << "Parece que voce eh novo por aqui! Seja bem vindo :)\n\nEm qual dos seguintes perfis voce se encaixa?\n1- Paciente\n2- Medico\n3- Hospital\n\n";
            createObj();
        }


};


class Medicine {

};


int main() {


    User newUser;



    return 0;

}
