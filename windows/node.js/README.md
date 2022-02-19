.vscode下的文件可以自动生成



新创建项目：

npm   init   --yes

npm   install   lodash  --save



下载git的项目：

npm   install   .





参考：

{

 // 使用 IntelliSense 了解相关属性。

 // 悬停以查看现有属性的描述。

 // 欲了解更多信息，请访问: https://go.microsoft.com/fwlink/?linkid=830387

 // https://stackoverflow.com/questions/34835082/how-to-debug-using-npm-run-scripts-from-vscode

 "version": "0.2.0",

 "configurations": [

  {

   "name": "Launch via NPM",

   "request": "launch",

   "runtimeArgs": ["run-script", "dev"],

   "runtimeExecutable": "npm",

   "skipFiles": ["<node_internals>/**"],

   "type": "pwa-node",

   "console": "integratedTerminal"

  }

 ]

}
