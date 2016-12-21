// Auto generated by Testing Dashboard
// File        : scripts/Modify/BreakOut/Tests/BreakOutTest09.js
// Timestamp   : 2016-12-21 15:04:56
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function BreakOutTest09() {
    TdbTest.call(this, 'scripts/Modify/BreakOut/Tests/BreakOutTest09.js');
}

BreakOutTest09.prototype = new TdbTest();

BreakOutTest09.prototype.test00 = function() {
    qDebug('running BreakOutTest09.test00()...');
    this.setUp();
    this.importFile('scripts/Modify/BreakOut/Tests/data/closed_polyline.dxf');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::MainToolsPanel::ModifyToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadQToolBar::CadToolBar::ModifyToolsPanel::BreakOutButton');
    this.setToolOption('BreakOut/RemoveSegment', 'true');
    this.updateToolOptions();
    this.setZoom(11.789473684210526, new RVector(-32.2321, -38.7545, 0, true));
    var p = new RVector(76, 60.723214);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(46.566964, 57.245536);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(47.075893, 58.433036);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('BreakOutTest09_000.dxf');
    this.tearDown();
    qDebug('finished BreakOutTest09.test00()');
};

