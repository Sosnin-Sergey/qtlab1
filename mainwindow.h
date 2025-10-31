#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractButton>
#include <QKeyEvent>
#include <QWidget>
#include <QList>
#include <QListWidget>
#include <QPushButton>
#include <QBoxLayout>
#include <QStatusBar>
#include <form.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void numberGroup_clicked(QAbstractButton*);
    void actionGroup_clicked(QAbstractButton*);
    void onsaveaction();
    void onhidehistory();
    void onshowhistory();
    void onclearhistory();
    void onabout();
    void onhistoryitemclicked(QListWidgetItem *item);
    void on_actionDel_clicked();
    void on_actionCalc_clicked();
    void on_comma_clicked();
    void on_actionClear_clicked();
    void on_actionPercent_clicked();
    void on_actionSign_clicked();

    void on_action_triggered();

private:
    Ui::MainWindow *ui;
    //Digit limit
    const int DIGIT_LIMIT = 16;
    //Flag to check whether the previous button that was clicked was an operator
    bool operatorClicked;
    //Last operator requested
    QChar storedOperator;
    //Flag to check whether a number is stored in memory
    bool hasStoredNumber;
    //Stored number
    double storedNumber;
    //Calculate result based on stored number and displayed number
    void calculate_result();
    QList<QString> historylist;
    QWidget *historywidget;
    QListWidget *historyview;
    QPushButton *hidehistorybutton;
    QPushButton *clearhistorybutton;
    QBoxLayout *historylayout;
    QTimer *statusBarTimer;
protected:
    void keyPressEvent(QKeyEvent *e);
};

#endif // MAINWINDOW_H
