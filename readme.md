# russel-screensaver-saver

キーボードやマウスを操作していない間でもパソコンがスクリーンセーバー・スクリーンロックを開始させないために、 59 秒に 1回、 Shift キーを押したことにするキーボードのためのソフトウェアです。

パソコンはキーボードが接続されたように認識しますが、実際にこのデバイスはキースイッチを持たず、ただ一定の周期で Shift キーが押されたという信号を出すだけです。スクリーンセーバーの設定を変更することができないが、流出・盗難や紛失の恐れがない限りにおいて、しばらく操作をしなくてもすばやく作業に戻るためのものです。

# 必要なもの

* Arduino IDE
* Arduino Pro Micro 互換機
* USB micro-B ケーブル

Arduino Pro Micro 互換機として、 HiLetgo Leonardo Pro Micro (ATmega32U4 5V / 16MHz) を選び、使っています。

# 作業手順

### 1 Arduino IDE を開いてこのリポジトリ内の `russel.ino` を開く

開くとファイルがこのリポジトリから移動されてしまうが、気にせず git で復旧すればよい。

### 2 Arduino IDE でボード書き込みの設定を確認する

ボードは `Sparkfun Pro Micro` 
プロセッサは `ATmega32U4 (5V, 16MHz)`

### 3 書き込む

書き込んだら完成

# 参考にした記事

[スクリーンセーバの起動を抑制する - Arduino Pro Micro(の互換機)を使用](https://qiita.com/tlab/items/c83981ab5a13b858a7da) ほぼこの通りです。
