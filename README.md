# AlgorithmAndDataStructure_otsuki_akiba
講談社　アルゴリズムとデータ構造

# 環境構築  
[こちらを参考にした](https://tanaken.me/posts/190513/)
Dockerfile

```
FROM ubuntu:latest
MAINTAINER username
WORKDIR /home/project

RUN apt-get update && apt-get install -y \
  vim \
  gcc \
  g++
```

起動

```
docker run -itv [ホスト側の作業ディレクトリパス]:[コンテナ側の作業ディレクトリパス] [IMAGE ID] /bin/bash
```

