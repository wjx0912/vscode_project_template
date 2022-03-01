参考文章：https://cn.vuejs.org/v2/cookbook/debugging-in-vscode.html

说明：使用了插件Debugger for Chrome ，但官方已经不推荐了，取而代之的是https://github.com/microsoft/vscode-js-debug

这里保留一份方便以后调试vue2项目，正常情况下把vscode 这个插件disble掉



版本：node14, vue2.6.x, vue cli 4.5.x



步骤：

1.安装vue cli

npm i -g @vue/cli



2.创建vue2工程

vue ui或者命令行插件项目，参数：

|                                                   |
| :------------------------------------------------ |
| Preset选择Manual                                  |
| 勾选Router, Vuex, CSS，Use config files           |
| vue.js版本：2.x                                   |
| CSS pre-processor选择：Sass/SCSS (with node-sass) |
| linter选：ESLint + Standard config                |
| 其它全部默认                                      |
|                                                   |



3.新建文件：vue.config.js 内容：

```
module.exports = {
  configureWebpack () {
    return {
      devtool: 'source-map'
    }
  }
}
```



4.新建文件：.vscode/launch.json 内容：

```
{
  "version": "0.2.0",
  "configurations": [
      {
        "name": "Chrome (Launch)",
        "type": "chrome",
        "request": "launch",
        "url": "http://localhost:8080",
        "webRoot": "${workspaceFolder}",
        "pathMapping": {
          "/_karma_webpack_": "${workspaceFolder}"
        },
        "sourceMapPathOverrides": {
          "webpack:///./src/*": "${webRoot}/src/*"
        }
      },
  ]
}
```



5.vscode安装插件：Debugger for Chrome

(1)npm run serve

(2)找个vue或者js，设置断点

(3)启动 "Chrome (Launch)"



