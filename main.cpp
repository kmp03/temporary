#include <QtWidgets>
#include "counter.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QLabel lbl("0");
    QPushButton cmd("ADD");
    Counter counter;

    lbl.show();
    cmd.show();

    // from this
    QObject::connect(&cmd, SIGNAL(clicked()), &counter, SLOT(slotInc()));
    QObject::connect(&counter, SIGNAL(counterChanged(int)), &lbl, SLOT(setNum(int)));
    QObject::connect(&counter, SIGNAL(goodBye()), &app, SLOT(quit()));
    // to this

    return app.exec();
}
