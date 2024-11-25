#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;

typedef struct{
    string nome;
    int fidelidade;
    bool socio;
    int totalComprado;
}cliente;

void imprimeCabecalho(){
    cout << "**********************************************************" << endl;
    cout << "Bem vindo ao sistema de gerenciamento das palhas do Bizzi!" << endl;
    cout << "**********************************************************" << endl;
    cout << endl;
}

void imprimeInterface(){
    cout << endl;
    cout << "O que voce deseja fazer?" << endl;
    cout << "1. Adicionar um cliente novo ao banco de dados" << endl;
    cout << "2. Registrar uma venda" <<  endl;
    cout << "3. Visualizar dados de um cliente" << endl;
    cout << "4. Visualizar dados de todos os clientes" << endl;
    cout << "5. Encerrar o programa" << endl;
    cout << endl;
}

void ordenaVetor(vector<cliente> *clientes){
    vector<cliente> :: iterator p, q;
    for(p = clientes->begin(); p != clientes->end(); p++){
        vector<cliente> :: iterator menor = p;
        for(q = p + 1; q != clientes->end(); q++){
            if(q->nome < menor->nome){
                menor = q;
            }
        }
        if(menor != p){
            swap(*p, *menor);
        }
    }

    for (p = clientes->begin(); p != clientes->end(); p++) {
        cout << p->nome << endl;
    }
}

void montaVetor(vector<cliente> *clientes){
    ifstream arquivo("clientes.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo 'clientes.txt'" << endl;
        return;
    }

    int num;
    arquivo >> num;

    clientes->clear();

    for(int i = 0; i < num / 3; i++){
        cliente novoCliente;
        string nomeLido;
        int qtdPalhas;
        bool serSocio;
        arquivo >> nomeLido;
        arquivo >> qtdPalhas;
        arquivo >> serSocio;
        novoCliente.nome = nomeLido;
        novoCliente.fidelidade = qtdPalhas;
        novoCliente.socio = serSocio;
        clientes->push_back(novoCliente);
    }  
    arquivo.close();

    ordenaVetor(clientes);
}

void sobrescreverArquivo(vector<cliente> *clientes, int num){
    vector<cliente> :: iterator p;
    ofstream sobrescrever("clientes.txt");
    if (!sobrescrever.is_open()) {
        cout << "Erro ao abrir o arquivo para sobrescrever 'clientes.txt'" << endl;
        return;
    }

    sobrescrever << num << endl;

    for (p = clientes->begin(); p != clientes->end(); p++) {
        sobrescrever << p->nome << endl; 
        sobrescrever << p->fidelidade << endl; 
        sobrescrever << p->socio << endl; 
    }

    sobrescrever.close();
}

void adicionarClientes(vector<cliente> *clientes) {
    int qtd, num;
    vector<cliente> :: iterator p;
    cout << "Quantos clientes voce quer adicionar?" << endl;
    cin >> qtd;

    num = (clientes->size() * 3) + (3 * qtd);

    sobrescreverArquivo(clientes, num);

    ofstream escrever("clientes.txt", ios::app);
    if (!escrever.is_open()) {
        cout << "Erro ao abrir o arquivo de escrita 'clientes.txt'" << endl;
        return;
    }

    for (int i = 0; i < qtd; i++) {
        string nome;
        char escolha;
        bool serSocio = false;

        cout << "Digite o nome do cliente:" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, nome);

        cout << nome << " eh socio da pandemia? (S ou N)" << endl;
        cin >> escolha;

        if (escolha == 'S') {
            serSocio = true;
        } else if (escolha == 'N') {
            serSocio = false;
        } else {
            cout << "Escolha invalida! Apenas 'S' ou 'N' sao permitidos." << endl;
            i--;
            continue;
        }

        escrever << nome << endl;
        escrever << 0 << endl; 
        escrever << serSocio << endl;
    }

    escrever.close();

    montaVetor(clientes);
}

int procurarCliente(vector<cliente> *clientes, string nome, vector<cliente> :: iterator inicio, vector<cliente> :: iterator fim){
    vector<cliente> :: iterator meio;
    meio = inicio + (fim - inicio) / 2;

    if(inicio > fim){
        return -1;
    }

    if(meio->nome == nome){
        return(distance(clientes->begin(), meio));
    }

    if(meio->nome < nome){
        return procurarCliente(clientes, nome, meio + 1, fim);
    }

    return procurarCliente(clientes, nome, inicio, meio - 1);
}

void registrarVenda(vector<cliente> *clientes){
    cout << "Digite o nome do cliente:" << endl;
    string nome;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nome);
    int res = procurarCliente(clientes, nome, clientes->begin(), clientes->end());

    
}

int main(){
    int escolha;
    vector<cliente> *clientes = new vector<cliente>;

    imprimeCabecalho();
    montaVetor(clientes);

    do{
        imprimeInterface();
        
        cin >> escolha;

        if(escolha == 1){
            adicionarClientes(clientes);
        }

        if(escolha == 2){
            registrarVenda(clientes);
        }

    }while(escolha != 5);

    delete clientes;
    
    return 0;
}