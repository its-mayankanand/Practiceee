#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

class TextEditor : public QMainWindow {
    Q_OBJECT

public:
    TextEditor(QWidget *parent = nullptr) : QMainWindow(parent) {
        auto *widget = new QWidget(this);
        auto *layout = new QVBoxLayout(widget);

        textEdit = new QTextEdit(this);
        layout->addWidget(textEdit);

        auto *createButton = new QPushButton("Create File", this);
        auto *addButton = new QPushButton("Add to File", this);
        auto *readButton = new QPushButton("Read from File", this);
        auto *emptyButton = new QPushButton("Empty File", this);
        auto *deleteButton = new QPushButton("Delete File", this);
        auto *copyButton = new QPushButton("Copy File", this);
        
        layout->addWidget(createButton);
        layout->addWidget(addButton);
        layout->addWidget(readButton);
        layout->addWidget(emptyButton);
        layout->addWidget(deleteButton);
        layout->addWidget(copyButton);

        setCentralWidget(widget);

        connect(createButton, &QPushButton::clicked, this, &TextEditor::createFile);
        connect(addButton, &QPushButton::clicked, this, &TextEditor::addToFile);
        connect(readButton, &QPushButton::clicked, this, &TextEditor::readFile);
        connect(emptyButton, &QPushButton::clicked, this, &TextEditor::emptyFile);
        connect(deleteButton, &QPushButton::clicked, this, &TextEditor::deleteFile);
        connect(copyButton, &QPushButton::clicked, this, &TextEditor::copyFile);
    }

private slots:
    void createFile() {
        QString fileName = QFileDialog::getSaveFileName(this, "Create File", "", "Text Files (*.txt)");
        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QIODevice::WriteOnly)) {
                file.close();
                QMessageBox::information(this, "Success", "File Created Successfully");
            }
        }
    }

    void addToFile() {
        QString fileName = QFileDialog::getOpenFileName(this, "Open File", "", "Text Files (*.txt)");
        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QIODevice::Append)) {
                QTextStream out(&file);
                out << textEdit->toPlainText();
                file.close();
                QMessageBox::information(this, "Success", "File Updated Successfully");
            }
        }
    }

    void readFile() {
        QString fileName = QFileDialog::getOpenFileName(this, "Open File", "", "Text Files (*.txt)");
        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QIODevice::ReadOnly)) {
                QTextStream in(&file);
                textEdit->setPlainText(in.readAll());
                file.close();
                QMessageBox::information(this, "Success", "File Read Successfully");
            }
        }
    }

    void emptyFile() {
        QString fileName = QFileDialog::getOpenFileName(this, "Open File", "", "Text Files (*.txt)");
        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
                file.close();
                QMessageBox::information(this, "Success", "File Emptied Successfully");
            }
        }
    }

    void deleteFile() {
        QString fileName = QFileDialog::getOpenFileName(this, "Open File", "", "Text Files (*.txt)");
        if (!fileName.isEmpty()) {
            if (QFile::remove(fileName)) {
                QMessageBox::information(this, "Success", "File Deleted Successfully");
            } else {
                QMessageBox::warning(this, "Error", "File Not Found");
            }
        }
    }

    void copyFile() {
        QString sourceFileName = QFileDialog::getOpenFileName(this, "Open Source File", "", "Text Files (*.txt)");
        if (!sourceFileName.isEmpty()) {
            QString destFileName = QFileDialog::getSaveFileName(this, "Save Copy As", "", "Text Files (*.txt)");
            if (!destFileName.isEmpty()) {
                QFile::copy(sourceFileName, destFileName);
                QMessageBox::information(this, "Success", "File Copied Successfully");
            }
        }
    }

private:
    QTextEdit *textEdit;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    TextEditor editor;
    editor.setWindowTitle("Text Editor");
    editor.resize(400, 300);
    editor.show();
    return app.exec();
}

#include "main.moc"