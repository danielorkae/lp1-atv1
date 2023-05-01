#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

using namespace std;

void populate_musics();

vector<string> get_musics();
void save_musics(vector<string> musics);
void search_music(vector<string> musics, string name);

int main()
{
    populate_musics();

    vector<string> musics = get_musics();

    cout << "Buscando música 'Hey Jude'..." << endl;
    search_music(musics, "Hey Jude");

    cout << "Buscando música 'Let It Be'..." << endl;
    search_music(musics, "Yellow Submarine");

    cout << "Buscando música 'Show das Poderosas'..." << endl;
    search_music(musics, "Show das Poderosas");

    cout << "Buscando música 'O chico bateu no bode'..." << endl;
    search_music(musics, "O chico bateu no bode");

    cout << "Buscando música 'Love Me Do'..." << endl;
    search_music(musics, "Love Me Do");

    return 0;
}

/// @brief Popula o arquivo de músicas com as músicas do Beatles.
void populate_musics()
{
    vector<string> musics_to_save;

    musics_to_save.push_back("Hey Jude");
    musics_to_save.push_back("Let It Be");
    musics_to_save.push_back("Yesterday");
    musics_to_save.push_back("Come Together");
    musics_to_save.push_back("Help!");
    musics_to_save.push_back("All You Need Is Love");
    musics_to_save.push_back("Yellow Submarine");
    musics_to_save.push_back("Love Me Do");
    musics_to_save.push_back("Can't Buy Me Love");
    musics_to_save.push_back("A Hard Day's Night");
    musics_to_save.push_back("I Want to Hold Your Hand");
    musics_to_save.push_back("She Loves You");
    musics_to_save.push_back("Eleanor Rigby");
    musics_to_save.push_back("Penny Lane");
    musics_to_save.push_back("Strawberry Fields Forever");

    save_musics(musics_to_save);
}

/// @brief Retorna as músicas salvas no arquivo de músicas.
/// @return
vector<string> get_musics()
{
    vector<string> musics;
    fstream file;

    file.open("musics.txt", ios::in | ios::app);

    string music;
    while (getline(file, music))
    {
        musics.push_back(music);
    }

    file.close();

    return musics;
}

/// @brief Salva as músicas no arquivo de músicas.
/// @param musics
void save_musics(vector<string> musics)
{
    fstream file;
    file.open("musics.txt", ios::out);
    file.close();

    file.open("musics.txt", ios::out | ios::app);

    for (int i = 0; i < musics.size(); i++)
    {
        file << musics[i] << endl;
    }

    file.close();
}

/// @brief Busca uma música no arquivo de músicas.
/// @param musics
/// @param name
void search_music(vector<string> musics, string name)
{
    for (int i = 0; i < musics.size(); i++)
    {
        if (musics[i] == name)
        {
            cout << "Música encontrada na linha: " << i + 1 << endl
                 << endl;
            return;
        }
    }

    cout << "Música não encontrada" << endl
         << endl;
}
