/*
 * Liri Calculator - A calculator application for Papyros
 * Copyright (C) 2015 Pierre Jacquier (ttp://pierre-jacquier.com)
 * Copyright (C) 2016 Michael Spencer <sonrisesoftware@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <QtGui/QGuiApplication>
#include <QtQml/QQmlApplicationEngine>
#include <QtQml/QQmlContext>

int main(int argc, char **argv)
{
        QGuiApplication app(argc, argv);

        app.setOrganizationName("Liri Project");
        app.setOrganizationDomain("liriproject.me");
        app.setApplicationName("Liri Calculator");

        #if QT_VERSION >= QT_VERSION_CHECK(5, 7, 0)
            app.setDesktopFileName("me.liriproject.Calculator.desktop");
        #endif

        // Set the X11 WML_CLASS so X11 desktops can find the desktop file
        qputenv("RESOURCE_NAME", "me.liriproject.Calculator");

        QQmlApplicationEngine engine(QUrl("qrc:/qml/main.qml"));

        return app.exec();
}
