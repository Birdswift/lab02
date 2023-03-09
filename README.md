Лабораторная работа №2

Часть 1 

1)Создал пустой репозиторий на github.com под названием "lab02"

2)Следую инструкции по создании первого коммита на странице репозитория

В терминале для удобства создаю отдельную директорию командой mkdir lab02

Перехожу в созданную директорию cd lab02

Инициализирую git init

В файл README.md ввожу текст командой echo "Creating repository test" >> README.md

Добавляю README.md git add README.md

Делаю коммит git commit -m "first commit"

Создаю ветку main git branch -M main

Привязываюсь к репозиторию на github.com git remote add origin https://github.com/Birdswift/lab02.git


Пушу в ветку main git push -u origin main

3)Реализовываю программу с плохим стилем кода
cat << EOF > hw.cpp

>#include <iostream>
>

>using namespace std;

>void main(){

>cout << "Hello world!" << endl;

>}

>EOF

4)Добавляю ее git add hw.cpp

5)Делаю коммит git commit -m "Bad style"

6)Изменяю исходный код: 

Вызываю редактор nano sudo nano hw.cpp

В редакторе меняю код программы на
                               
#include <iostream>

#include <string>

using namespace std;

void main() {

string name = "";

cout << "Hello, please, input your name." << endl;

cin >> name;

cout << "Hello world from " << name << endl;

}

7)git add -u hw.cpp (без него система не пропускает)
 
Создаю коммит git commit -m "New commit"

8)Пушу в ветку main git push origin main

9)Проверка git log на коммиты

Part 2

1)Создаю локальную ветку patch1 git checkout -b "patch1"

2)Вызываю редактор nano для редактирования файла hw.cpp sudo nano hw.cpp

Произвожу изменения 

#include <iostream>

#include <string>

void main(){

std::string name = "";

std::cout << "Hello, please, input your name." <<std::endl;

std::cin >> name;

std::cout << "Hello world from " << name <<std::endl;

}

3)Выполняю commit&push в ветку 

git add -A

git commit -m "Good commit"

git push origin patch1

4)Проверка доступности ветки patch1 git branch 

5)Создал pull-request 

6)Редактирую код, добавляю комментарии sudo nano hw.cpp

7)Добавляю, коммичу, пушу.

git add hw.cpp

git commit -m "With comments"

git push origin patch1

8)Проверил наличие изменений

9)Замёржил patch1 git merge origin/patch1

Удалил patch 1 git push origin --delete patch1 

10)Сделал git pull локально

11)Посмотрел историю  git log

12)Перешел перед удалением на основную ветку git checkout main

Удалил ветку patch1 git branch -d patch1

Part 3

1)Создаю новую ветку patch2 git checkout -b patch2

2)Устанавливаю утилиту clang-format sudo apt install clang-format

Применяю ее clang-format -style=Mozilla hw.cpp

Появляется редактированная надпись 

#include <iostream>
#include <string>

void
main()
{
  std::string name = "";
  std::cout << "Hello, please, input your name." << std::endl; //запрос имени
  std::cin >> name;                                      //ввод имени
  std::cout << "Hello world from " << name << std::endl; //вывод имени
}

Копирую и вставляю через редактор sudo nano hw.cpp

3)Добавляю, коммичу и пушу

git add hw.cpp

git commit -m "Formated"

git push origin patch2
 
Создаю Pull-request
 
4)В ветке main изменяю комментарий

5)Появились конфликты

6)Командой git pull --rebase origin main снова убедился в наличии конфликтов

Далее добавил конфликтный файл git add -A

Выполнил git rebase --continue

7)Сделал force-push git push --force push origin patch2

8)Убедился в отсутствии конфликтов git pull --rebase origin main

9)Вмёржил в main(master)
