var electron = require('electron');
var app = electron.app;
var BrowserWindow = electron.BrowserWindow;
var win = null;

app.on('ready', function () {
    win = new BrowserWindow({
        webPreferences: { enableRemoteModule: true, nodeIntegration: true, contextIsolation: false },
    });
    win.loadFile('index.html');
    win.on('close', function () {
        win = null;
    });
});

app.on('window-all-closed', function () {
    app.quit();
});
