#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow window;
    auto build = window.menuBar()->addMenu("Build");
    build->addAction("qmake, cmake or nothing");
    for (const auto &section : {"Current Project", "All Projects", "Subproject"}) {
        build->addSection(section);
        build->addAction("Build");
        build->addAction("Rebuild");
        build->addAction("Deploy");
        build->addAction("Clean");
    }
    build->addSection("File");
    build->addAction("Build");
    window.resize(800, 600);
    window.show();
    return app.exec();
}
