#include <iostream>
#include <fstream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::ifstream fin("in.txt");
    std::string s, s2, s3, s4, s5;
    int kol1, kol2;
    if (fin.is_open())
    {
        fin >> s;
        kol1 = std::stoi(s) - 1;
        s2 = s2 + s + "\n";
        fin >> s3;
        for (int i = 0; i < kol1; i++)
        {
            fin >> s;
            s2 = s2 + s + " ";
        }// for (int i = 0; i < kol1; i++)
        s2 = s2 + s3 + " ";
        fin >> s;
        kol2 = std::stoi(s) - 1;
        std::ofstream fout("out.txt");
        fout << s << std::endl;
        for (int i = 0; i < kol2; i++)
        {
            fin >> s;
            s4 = s4 + s + " ";
        }
        fin >> s;
        fout << s << " ";
        fout << s4 << " ";
        fout << std::endl;
        fout << s2;
        fout.close();

        fin.close();
        std::cout << "создан файл out.txt!" << std::endl;
    }
    else
    {
        std::cout << "Не получилось открыть файл in.txt!" << std::endl;

    }
}