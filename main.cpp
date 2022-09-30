#include <QApplication>
#include"main_window.h"
#include <QDebug>

using namespace std;

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);
  srand(time(nullptr));
  MainWindow main_window;
  main_window.setFixedSize(650,350);
  main_window.show();
  return QApplication::exec();
}
