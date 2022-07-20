#ifndef ANGRBODA_H
#define ANGRBODA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Angrboda; }
QT_END_NAMESPACE

class Angrboda : public QMainWindow
{
    Q_OBJECT

public:
    Angrboda(QWidget *parent = nullptr);
    ~Angrboda();

private:
    Ui::Angrboda *ui;
};
#endif // ANGRBODA_H
