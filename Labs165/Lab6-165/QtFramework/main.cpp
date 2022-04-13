#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QIcon>
int main(int argc, char **argv)

{
 QApplication app (argc, argv);

/// QPushButton button ("Hello world !");
 //button.show();

 QPushButton button;

 button.setText("My Button !!!");
 button.setToolTip("A tooltip");

 QFont font ("Courier");
 button.setFont(font);

 QIcon myIcon("C:/Users/josh8/OneDrive/Desktop/PictureFolder/kermit.png");
 button.setIcon(myIcon);

 button.show();

 return app.exec();
}
