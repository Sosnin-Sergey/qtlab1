/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(400, 300);
        textBrowser = new QTextBrowser(Form);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 0, 371, 251));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\265\321\200\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265, \320\277\320\276\321\201\320\273\320\265 \321\207\320\265\320\263\320\276 \320\262\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265 \320\272 \320\275\320\265\320"
                        "\274\321\203(\321\201\320\273\320\276\320\266\320\265\320\275\320\270\320\265, \321\203\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265, \320\264\320\265\320\273\320\265\320\275\320\270\320\265, \320\262\321\213\321\207\320\270\321\202\320\260\320\275\320\270\320\265), \320\260 \320\267\320\260\321\202\320\265\320\274 \320\262\321\202\320\276\321\200\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 \321\201\320\276 \320\267\320\275\320\260\320\272\320\276\320\274 &quot;=&quot;.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\247\320\270\321\201\320\273\320\276 \320\274\320\276\320\266\320\275\320\276 \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\207\320\265\321\200\320\265\320\267 \320\272\320\275\320\276\320\277\320\272\321\203 Save "
                        "\320\270 \320\276\320\275\320\276 \320\261\321\203\320\264\320\265\321\202 \320\277\320\276\320\272\320\260\320\267\320\260\320\275\320\276 \320\262 \320\270\321\201\321\202\320\276\321\200\320\270\320\270.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222 \320\270\321\201\321\202\320\276\321\200\320\270\321\216 \320\274\320\276\320\266\320\275\320\276 \320\267\320\260\320\271\321\202\320\270 \321\207\320\265\321\200\320\265\320\267 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\270\321\201\321\202\320\276\321\200\320\270\321\216&quot; \320\270 \321\207\320\265\321\200\320\265\320\267 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\320\241\320\272\321\200\321\213\321\202\321\214 \320\230\321\201\321\202\320\276\321\200\320\270\321\216&quot; \320\265\321\221 \320\274\320\276\320\266\320\275\320\276 \321\201\320\272\321\200\321\213\321\202\321"
                        "\214.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\220\320\262\321\202\320\276\321\200 \320\241\320\276\321\201\320\275\320\270\320\275 \320\241\320\265\321\200\320\263\320\265\320\271 \320\230\320\237-314</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
