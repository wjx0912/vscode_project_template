let { BrowserWindow } = require('electron');

exports.makeWin = function () {
    let win = new BrowserWindow({
        webPreferences: { enableRemoteModule: true, nodeIntegration: true, contextIsolation: false },
    });
    return win;
};
