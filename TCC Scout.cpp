#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Defini��o da estrutura de um jogador
struct Player {
    string name;
    int age;
    string position;
    int jogos;
    int gols;
    float desa;
    int assis;
    string notes;
};

// Fun��o para adicionar um novo jogador ao sistema
void addPlayer(vector<Player> &players) {
    Player newPlayer;
    cout << "Nome do jogador: ";
    getline(cin, newPlayer.name);
    cout << "Idade do jogador: ";
    cin >> newPlayer.age;
    cin.ignore();
    cout << "Posi��o do jogador: ";
    getline(cin, newPlayer.position);
    cout << "Jogos do jogador: ";
    cin >> newPlayer.jogos;
    cin.ignore();
    cout << "Gols do jogador: ";
    cin >> newPlayer.gols;
    cin.ignore();
    cout << "Assist�ncias do jogador: ";
    cin >> newPlayer.assis;
    cin.ignore();
    cout << "Desarmes do jogador: ";
    cin >> newPlayer.desa;
    cin.ignore();
    cout << "Observa��es sobre o jogador: ";
    getline(cin, newPlayer.notes);

    players.push_back(newPlayer);
    cout << "Jogador adicionado com sucesso!" << endl;
}

// Fun��o para exibir todos os jogadores cadastrados
void displayPlayers(const vector<Player> &players) {
    cout << "Jogadores cadastrados:" << endl;
    for (const auto &player : players) {
        cout << fixed << setprecision(1) << endl ; //Limitar decimal para uma casa
        cout << "Nome: " << player.name << endl;
        cout << "Idade: " << player.age << endl;
        cout << "Posi��o: " << player.position << endl;
        cout << "Jogos: " << player.jogos << endl;
        cout << "Gols: " << player.gols << endl;
        cout << "Assist�ncias: " << player.assis << endl;
        cout << "Desarmes: " << player.desa << endl;
        cout << "Desarmes por jogo: " << player.desa/player.jogos << endl;
        cout << "Observa��es: " << player.notes << endl << endl;
    }
}

// Fun��o para pesquisar jogadores por posi��o
void searchPlayersByPosition(const vector<Player> &players, const string &position) {
    cout << "Jogadores na posi��o de " << position << ":" << endl;
    bool found = false;
    for (const auto &player : players) {
        if (player.position == position) {
            cout << fixed << setprecision(1) << endl ;
            cout << "Nome: " << player.name << endl;
            cout << "Idade: " << player.age << endl;
            cout << "Posi��o: " << player.position << endl;
            cout << "Jogos: " << player.jogos << endl;
            cout << "Gols: " << player.gols << endl;
            cout << "Assist�ncias: " << player.assis << endl;
            cout << "Desarmes: " << player.desa << endl;
            cout << "Desarmes por jogo: " << player.desa/player.jogos << endl;
            cout << "Observa��es: " << player.notes << endl << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Nenhum jogador encontrado na posi��o de " << position << endl;
    }
}

// Fun��o para pesquisar jogadores por nome
void searchPlayerByName(const vector<Player> &players, const string &name) {
    cout << "Resultado da pesquisa por jogador '" << name << "':" << endl;
    bool found = false;
    for (const auto &player : players) {
        if (player.name == name) {
            cout << fixed << setprecision(1) << endl ;
            cout << "Nome: " << player.name << endl;
            cout << "Idade: " << player.age << endl;
            cout << "Posi��o: " << player.position << endl;
            cout << "Jogos: " << player.jogos << endl;
            cout << "Gols: " << player.gols << endl;
            cout << "Assist�ncias: " << player.assis << endl;
            cout << "Desarmes: " << player.desa << endl;
            cout << "Desarmes por jogo: " << player.desa/player.jogos << endl;
            cout << "Observa��es: " << player.notes << endl << endl;
            found = true;
            break; // N�o precisamos procurar mais
        }
    }
    if (!found) {
        cout << "Jogador '" << name << "' n�o encontrado." << endl;
    }
}

// Fun��o para pesquisar jogadores por gols
void searchPlayersByRating(const vector<Player> &players, double minGols) {
    // Pesquisar por Gols
    cout << "Jogadores com n�mero de gols maior ou igual a " << minGols << ":" << endl;
    bool found = false;
    for (const auto &player : players) {
        if (player.gols >= minGols) {
            cout << fixed << setprecision(1) << endl ;
            cout << "Nome: " << player.name << endl;
            cout << "Idade: " << player.age << endl;
            cout << "Posi��o: " << player.position << endl;
            cout << "Jogos: " << player.jogos << endl;
            cout << "Gols: " << player.gols << endl;
            cout << "Assist�ncias: " << player.assis << endl;
            cout << "Desarmes: " << player.desa << endl;
            cout << "Desarmes por jogo: " << player.desa/player.jogos << endl;
            cout << "Observa��es: " << player.notes << endl << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Nenhum jogador encontrado com n�mero de gols maior ou igual a " << minGols << endl;
    }
}

// Fun��o para pesquisar jogadores por assistencias
void searchPlayersByAssis(const vector<Player> &players, double minAssis) {
    cout << "Jogadores com n�mero de assis�ncias maior ou igual a " << minAssis << ":" << endl;
    bool found = false;
    for (const auto &player : players) {
        if (player.assis >= minAssis) {
            cout << fixed << setprecision(1) << endl ;
            cout << "Nome: " << player.name << endl;
            cout << "Idade: " << player.age << endl;
            cout << "Posi��o: " << player.position << endl;
            cout << "Jogos: " << player.jogos << endl;
            cout << "Gols: " << player.gols << endl;
            cout << "Assist�ncias: " << player.assis << endl;
            cout << "Desarmes: " << player.desa << endl;
            cout << "Desarmes por jogo: " << player.desa/player.jogos << endl;
            cout << "Observa��es: " << player.notes << endl << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Nenhum jogador encontrado com n�mero de Assist�ncias maior ou igual a " << minAssis << endl;
    }
}

// Fun��o para pesquisar jogadores por Desarme
void searchPlayersByDesa(const vector<Player> &players, double minDesa) {
    cout << "Jogadores com n�mero de Desarmes maior ou igual a " << minDesa << ":" << endl;
    bool found = false;
    for (const auto &player : players) {
        if (player.desa >= minDesa) {
            cout << fixed << setprecision(1) << endl ;
            cout << "Nome: " << player.name << endl;
            cout << "Idade: " << player.age << endl;
            cout << "Posi��o: " << player.position << endl;
            cout << "Jogos: " << player.jogos << endl;
            cout << "Gols: " << player.gols << endl;
            cout << "Assist�ncias: " << player.assis << endl;
            cout << "Desarmes: " << player.desa << endl;
            cout << "Desarmes por jogo: " << player.desa/player.jogos << endl;
            cout << "Observa��es: " << player.notes << endl << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Nenhum jogador encontrado com n�mero de Assist�ncias maior ou igual a " << minDesa << endl;
    }
}

int main() {
    vector<Player> players;
    int choice;

    do {
        cout << "Scout Futebol TCC:" << endl;
        cout << "\nMenu:" << endl;
        cout << "1. Adicionar jogador" << endl;
        cout << "2. Visualizar jogadores cadastrados" << endl;
        cout << "3. Pesquisar jogador por posi��o" << endl;
        cout << "4. Pesquisar jogador por nome" << endl;
        cout << "5. Pesquisar jogador por Gols" << endl;
        cout << "6. Pesquisar jogador por Assist�ncias" << endl;
        cout << "7. Pesquisar jogador por Desarmes" << endl;
        cout << "8. Sair" << endl;
        cout << "Escolha: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                addPlayer(players);
                break;
            case 2:
                displayPlayers(players);
                break;
            case 3:
                {
                    string position;
                    cout << "Digite a posi��o do jogador que deseja pesquisar: ";
                    getline(cin, position);
                    searchPlayersByPosition(players, position);
                }
                break;
            case 4:
                {
                    string name;
                    cout << "Digite o nome do jogador que deseja pesquisar: ";
                    getline(cin, name);
                    searchPlayerByName(players, name);
                }
                break;
            case 5:
                {
                    double minRating;
                    cout << "Digite a quantidade de gols do jogador: ";
                    cin >> minRating;
                    searchPlayersByRating(players, minRating);
                }
                break;
                
                case 6:
                {
                    double minAssis;
                    cout << "Digite a quantidade de Assist�ncias do jogador: ";
                    cin >> minAssis;
                    searchPlayersByAssis(players, minAssis);
                }
                break;
                
                  case 7:
                {
                    double minDesa;
                    cout << "Digite a quantidade de Desarmes do jogador: ";
                    cin >> minDesa;
                    searchPlayersByDesa(players, minDesa);
                }
                break;
                
            case 8:
                cout << "Scout Futebol TCC Fechado!" << endl;
                break;
            default:
                cout << "Op��o inv�lida. Tente novamente." << endl;
        }
    } while (choice != 8);

    return 0;
}
