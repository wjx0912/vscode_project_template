一、创建工程：

npm init vite@latest

然后选择：vue, vue-ts



二、修改：vite.config.ts，在defineConfig里面加入：

```
  build: {
	  sourcemap: true
  }
```



三、新建.vscode/launch.json，内容：

```
{
	// Use IntelliSense to learn about possible attributes.
	// Hover to view descriptions of existing attributes.
	// For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
	"version": "0.2.0",
	"configurations": [
		{
			"type": "pwa-chrome",
			"request": "launch",
			"name": "Launch Chrome against localhost",
			"url": "http://localhost:3000",
			"webRoot": "${workspaceFolder}"
		}
	]
}
```



四、先npm run dev，然后f5运行launch.json

