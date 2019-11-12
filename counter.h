#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject {
    Q_OBJECT
private:
    int m_nValue;

public:
    Counter();
public slots:
    void slotInc();
signals:
    void goodBye();
    void counterChanged(int);
};

#endif // COUNTER_H
