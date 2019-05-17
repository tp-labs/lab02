## Laboratory work I

Данная лабораторная работа посвещена изучению утилит для разработки проектов

## Tasks

- [ ] 1. Ознакомиться со ссылками учебного материала
- [ ] 2. Выполнить инструкцию учебного материала
- [ ] 3. Составить отчет и отправить ссылку личным сообщением в **Slack**

## Tutorial

```bash
## Присваивает переменной GITHUB_USERNAME переменную <имя_пользователя> 
$ export GITHUB_USERNAME=<имя_пользователя>
## Присваивает переменной GIST_TOKEN переменную <сохранённый_токен>
$ export GIST_TOKEN=<сохраненный_токен>
## Создаёт псевдоним edit
## и присваивает ему один из следующих редакторов <nano|vi|vim|subl>
$ alias edit=<nano|vi|vim|subl>
```

```ShellSession
## mkdir - создаёт папку GITHUB_USERNAME
## и в ней создаёт папку workspace
## -p - это флаг, который создаёт родительский каталог,если его там нет
$ mkdir -p ${GITHUB_USERNAME}/workspace
## заходит в каталог GITHUB_USERNAME/workspace
$ cd ${GITHUB_USERNAME}/workspace
## pwd - выдаёт полный путь к каталогу, в котором находится пользователь
$ pwd
## cd .. - переход назад по каталогу
$ cd ..
## pwd - выдаёт полный путь к каталогу, в котором находится пользователь
$ pwd
```

```ShellSession
## mkdir - создаёт папку tasks в папке workspace 
$ mkdir -p workspace/tasks/
## Аналогично выше описанному
$ mkdir -p workspace/projects/
## Аналогично выше описанному
$ mkdir -p workspace/reports/
## cd - переходит в папку workspace
$ cd workspace
```

```ShellSession
# Debian
## wget - скачивает файл по данной ссылке
$ wget https://nodejs.org/dist/v6.11.5/node-v6.11.5-linux-x64.tar.xz
## распаковывает файл, который скачали ранее
$ tar -xf node-v6.11.5-linux-x64.tar.xz
## удаляет файл, который скачали ранее
## -r - рекурсивное удаление, т.е удалятся и вложенные папки
$ rm -rf node-v6.11.5-linux-x64.tar.xz
## файл, который прежде назывался node-v6.11.5-linux
## теперь имеет название node
$ mv node-v6.11.5-linux-x64 node
```

```ShellSession
## показывает все папки в bin, которая содержится в node
$ ls node/bin
## выдаёт полный список директорий
$ echo ${PATH}
## добавляет новую директорию
$ export PATH=${PATH}:`pwd`/node/bin
## выдаёт полный список директорий 
$ echo ${PATH}
## создаёт папку scripts
$ mkdir scripts
## направляет стандартный ввод в scripts/activate
$ cat > scripts/activate<<EOF
## добавляет новую директорию
export PATH=\${PATH}:`pwd`/node/bin
EOF
## служит для выполнения скрипта
## эту команду можно заменить простой точкой (".")
$ source scripts/activate
```

```ShellSession
## скачивает пакет вручную
## для скачивания, в качестве аргумента принимает нужный пакет
$ npm install -g gistup
## показывает все папки в bin, которая сожержится в node
$ ls node/bin
```

```ShellSession
## направляет стандартный поток ввода в ~/.gistup.json
$ cat > ~/.gistup.json <<EOF
{
  "token": "${GIST_TOKEN}"
}
EOF
```

## Report

```ShellSession
$ export LAB_NUMBER=01
$ git clone https://github.com/tp-labs/lab${LAB_NUMBER} tasks/lab${LAB_NUMBER}
$ mkdir reports/lab${LAB_NUMBER}
$ cp tasks/lab${LAB_NUMBER}/README.md reports/lab${LAB_NUMBER}/REPORT.md
$ cd reports/lab${LAB_NUMBER}
$ edit REPORT.md
$ gistup -m "lab${LAB_NUMBER}" # enter: yes↵
```

## Links

### Unix commands

- [ar](https://en.wikipedia.org/wiki/Ar_(Unix))
- [cat](https://en.wikipedia.org/wiki/Cat_(Unix))
- [cd](https://en.wikipedia.org/wiki/Cd_(command))
- [cp](https://en.wikipedia.org/wiki/Cp_(Unix))
- [cut](https://en.wikipedia.org/wiki/Cut_(Unix))
- [echo](https://en.wikipedia.org/wiki/Echo_(command))
- [env](https://en.wikipedia.org/wiki/Env_(shell))
- [ex](https://en.wikipedia.org/wiki/Ex_(editor))
- [file](https://en.wikipedia.org/wiki/File_(command))
- [find](https://en.wikipedia.org/wiki/Find)
- [ls](https://en.wikipedia.org/wiki/Ls)
- [man](https://en.wikipedia.org/wiki/Man_page)
- [mkdir](https://en.wikipedia.org/wiki/Mkdir)
- [mv](https://en.wikipedia.org/wiki/Mv)
- [nm](https://en.wikipedia.org/wiki/Nm_(Unix))
- [ps](https://en.wikipedia.org/wiki/Ps_(Unix))
- [pwd](https://en.wikipedia.org/wiki/Pwd)
- [rm](https://en.wikipedia.org/wiki/Rm_(Unix))
- [sed](https://en.wikipedia.org/wiki/Sed)
- [touch](https://en.wikipedia.org/wiki/Touch_(Unix))

### Package Managers

- [apt](http://help.ubuntu.ru/wiki/apt) | [dnf](https://en.wikipedia.org/wiki/DNF_(software)) | [yum](https://fedoraproject.org/wiki/Yum/ru)
- [brew](https://brew.sh) | [linuxbrew](http://linuxbrew.sh)
- [npm](https://docs.npmjs.com)

### Software

- [curl](https://www.gitbook.com/book/bagder/everything-curl/details)
- [wget](https://www.gnu.org/software/wget/manual/wget.pdf)
- [clang](https://clang.llvm.org)
- [g++](https://gcc.gnu.org/onlinedocs/gcc-4.0.2/gcc/G_002b_002b-and-GCC.html)
- [make](https://en.wikipedia.org/wiki/Make_(software))
- [open](https://developer.apple.com/legacy/library/documentation/Darwin/Reference/ManPages/man1/open.1.html)
- [openssl](https://www.openssl.org)
- [nano](https://www.nano-editor.org)
- [tree](https://linux.die.net/man/1/tree)
- [vim](http://www.vim.org)

## Homework

1. Скачайте библиотеку *boost* с помощью утилиты **wget**. Адрес для скачивания `https://sourceforge.net/projects/boost/files/boost/1.69.0/boost_1_69_0.tar.gz`.
2. Разархивируйте скаченный файл в директорию `~/boost_1_69_0`
3. Подсчитайте количество файлов в директории `~/boost_1_69_0` **не включая** вложенные директории.
4. Подсчитайте количество файлов в директории `~/boost_1_69_0` **включая** вложенные директории.
5. Подсчитайте количество заголовочных файлов, файлов с расширением `.cpp`, сколько остальных файлов (не заголовочных и не `.cpp`).
6. Найдите полный пусть до файла `any.hpp` внутри библиотеки *boost*.
7. Выведите в консоль все файлы, где упоминается последовательность `boost::asio`.
8. Скомпилирутйе *boost*. Можно воспользоваться [инструкцией](https://www.boost.org/doc/libs/1_61_0/more/getting_started/unix-variants.html#or-build-custom-binaries) или [ссылкой](https://codeyarns.com/2017/01/24/how-to-build-boost-on-linux/).
9. Перенесите все скомпилированные на предыдущем шаге статические библиотеки в директорию `~/boost-libs`.
10. Подсчитайте сколько занимает дискового пространства каждый файл в этой директории.
11. Найдите *топ10* самых "тяжёлых".

```
Copyright (c) 2015-2019 The ISC Authors
```
