## Laboratory work III

Данная лабораторная работа посвещена изучению систем совместной разработки на примере сервиса **GitHub**.

```bash
$ open https://github.com
```

## Tasks

- [ ] 1. Зарегистрироваться на сервисе совместной разработки **GitHub**
- [ ] 2. Создать публичный репозиторий с названием **lab3** и с лиценцией **MIT**
- [ ] 3. Отправить личным сообщением ссылку на созданный репозиторий в **Slack**
- [ ] 4. Выполнить инструкцию учебного материала
- [ ] 5. Ознакомиться со ссылками учебного материала

## Tutorial

```bash
$ export GITHUB_USERNAME=<имя_пользователя>
$ export GITHUB_EMAIL=<адрес_почтового_ящика>
```

```bash
$ mkdir lab3 && cd lab3
$ git init
$ git config --global user.name ${GITHUB_USERNAME}
$ git config --global user.email ${GITHUB_EMAIL}
$ git config -e --global
$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab3
$ git pull origin master
$ touch README.md
$ git status
$ git add README.md
$ git commit -m"added README.md"
$ git push origin master
```

Добавить на сервисе **GitHub** в репозитории **lab3** файл **.gitignore**
со следующем содержимом:

```
*build*/
*install*/
*.swp
```

```bash
$ git pull origin master
$ git log
```

```bash
$ mkdir sources
$ mkdir include
$ mkdir examples
$ cat > sources/print.cpp <<EOF
#include <print.hpp>

void print(const std::string& text, std::ostream& out) {
  out << text;
}

void print(const std::string& text, std::ofstream& out) {
  out << text;
}
EOF
```

```bash
$ cat > include/print.hpp <<EOF
#include <string>
#include <fstream>
#include <iostream>

void print(const std::string& text, std::ostream& out = std::cout);
void print(const std::string& text, std::ofstream& out);
EOF
```

```bash
$ cat > examples/example1.cpp <<EOF
#include <print.hpp>

int main(int argc, char** argv) {
  print("hello");
}
EOF
```

```bash
$ cat > examples/example2.cpp <<EOF
#include <fstream>
#include <print.hpp>

int main(int argc, char** argv) {
  std::ofstream file("log.txt");
  print(std::string("hello"), file);
}
EOF
```

```bash
$ nano README.md
```

```bash
$ git status
$ git add -p
$ git add .
$ git commit -m"added sources"
$ git push origin master
```

## Links

- [Git](https://git-scm.com)
- [Bitbucket](https://bitbucket.org)
- [Gitlab](https://about.gitlab.com)
- [GitHub](https://services.github.com/resources/)
