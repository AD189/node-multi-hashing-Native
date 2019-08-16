node-multi-hashing-NAPI
===============

Cryptocurrency hashing functions for node.js.

fork:https://github.com/StarPool/node-multi-hashing-odo

这个版本使用了原生方式替换了NAN，目前支持最新版本的Node。其他的multi-hashing版本基于NAN开发，升级NAN2后目前仅支持到Node8。

增加了gts的支持，未测试。

调用方法：require('bindings')('multi-hashing')

Require
-----

这个版本需要gmp支持。

下载地址：https://gmplib.org/#DOWNLOAD

需要m4依赖：sudo apt-get install m4

官方安装说明：https://gmplib.org/manual/Installing-GMP.html#Installing-GMP

Deploy
-----
```bash
npm i --unsafe-perm
```


Algorithms
----------
* quark
* x11
* x13
* nist5
* scrypt
* scryptn
* scryptjane
* keccak
* bcrypt
* skein
* groestl
* blake
* fugue
* qubit
* hefty1
* shavite3
* cryptonight
* boolberry
* sha256d
* lbry
* gts

Usage
-----

So far this native Node.js addon can do the following hashing algos

```javascript
var multiHashing = require('bindings')('multi-hashing');
```

test.js
```bash
node test.js
```