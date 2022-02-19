参考：https://www.jianshu.com/p/1ef707202199

```bash
npm init -y
npm i  -D  typescript ts-node     // 即便全局安装了typescript，这里仍然需要；不需要tsconfig-paths
npx tsc --init
```



注意：

1.文件夹名如果正好是typescript，需要改package.json，把name改成非'typescript'

2.tsc --init 会生成tsconfig.json，但是默认的无法调试typescript（至少sourcemap没有设置），需要自定义

3.配置launch.json



