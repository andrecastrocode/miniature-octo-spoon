//
// Created by andre on 21/06/20.
//

#include <iostream>

#include <boost/version.hpp>

#include <QCoreApplication>

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "BOOST VERSION: " << BOOST_LIB_VERSION << std::endl;
    std::cout << "QT VERSION: " << QT_VERSION_STR << std::endl;

    QCoreApplication app(argc, argv);
    QCoreApplication::exec();

    return 0;
}
