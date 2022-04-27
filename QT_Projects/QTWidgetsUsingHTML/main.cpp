#include<QApplication>
#include<QPushButton>
#include<QGridLayout>
#include<QLabel>
#include<QLineEdit>
//#include<QVBoxLayout>
//#include<QHBoxLayout>
//#include<QLabel>


int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    //    QLabel *label= new QLabel("Hello World");
    //    QLabel *label= new QLabel("<p style=""color:red;font-size:80px;"" >Manisha</p>");

    //    label->show();

    QWidget *mainWindow = new QWidget();

    mainWindow->setWindowTitle("MainWindow");

    //    QPushButton *button1 = new QPushButton("Button 1");
    //    QPushButton *button2 = new QPushButton("Button 2");
    //    QPushButton *button3 = new QPushButton("Button 3");

    //    QHBoxLayout *hLayout = new QHBoxLayout;
    //    hLayout->addWidget(button1);
    //    hLayout->addWidget(button2);
    //    hLayout->addWidget(button3);

    //    QVBoxLayout *vLayout = new QVBoxLayout;
    //    vLayout->addWidget(button1);
    //    vLayout->addWidget(button2);
    //    vLayout->addWidget(button3);

    //    mainWindow->setLayout(hLayout);
    //    mainWindow->setLayout(vLayout);

    QGridLayout *grid = new QGridLayout;

    QLabel *username = new QLabel("User Name: ");
    QLineEdit *userText = new QLineEdit();

    QLabel *passwordLabel = new QLabel("Password: ");
    QLineEdit *passwordText = new QLineEdit();

    QPushButton *login = new QPushButton("Login");

    grid->addWidget(username, 0,0);
    grid->addWidget(userText, 0, 1);

    grid->addWidget(passwordLabel, 1,0);
    grid->addWidget(passwordText, 1, 1);
    passwordText->setEchoMode(QLineEdit::Password);

    grid->addWidget(login,2,0,1,2);


    mainWindow->setLayout(grid);
    mainWindow->show();
    return app.exec();
}

