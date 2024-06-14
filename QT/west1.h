#ifndef WEST1_H
#define WEST1_H

#include <QWidget>
#include <QStandardItemModel>
#include <QProcess>

namespace Ui {
class West1;
}

class West1 : public QWidget
{
    Q_OBJECT

public:

    explicit West1(QWidget *parent = nullptr);
    ~West1();

    void setKeyword(const QString &keyword);

private slots:
    void on_exit1Button_clicked();

private:
    Ui::West1 *ui;
    QStandardItemModel *csvModel;
    QString m_keyword;
    QString imagePath;
    QProcess *process;
    void colorRow(int row, const QColor &color);

};

#endif // WEST1_H
