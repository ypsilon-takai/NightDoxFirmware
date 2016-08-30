# ErgoDox firmware memo

## キーレイアウトについてのメモ
- kbfun_2_keys_capslock_press_release  
 special.c  
 シフトキーを押しながら別のシフトキーを押すとロックされる機能

- kbfun_shift_press_release  
 special.c  
 シフトキーを押した状態にする。


- _kbfun_press_release
 private.c  
 押された/放されたキーの状態を保存  
 kbfun_press_releaseから呼ばれる。

-  kbfun_toggle
 basic.c  
 押された/放されたキーの状態を反転

- kbfun_transparent
 basic.c  
 1つ前のレイヤースタックのキーを呼び出す

### レイヤー間の移動について
レイヤー間の移動はkey_pushとkey_releaseにそれぞれ関数が定義されて動作するという凝った
仕様のため、ちょっと理解するのが面倒で、設定するのも大変。

レイヤーにすることで、下の層を透過できるという機能が利用できるのはいいけれど、
そのために複雑になってしまうのは、費用対効果という点でどうだろう？


## ビルド関連
### makefile修正

キーマップを作る処理が正常に動かず、調べてみると、不要な処理だったようなので、
makeの対象から除外した。

cleanもgitのオプションが足りなかったので追加

### ビルド方法
NightDoxFirmware ディレクトリで レイアウトを指定してmakeする。  
makefileを変更してしまってもよかったかも。

> make LAYOUT=dvorak-yosi

buildの下にできるけど、とりあえずちょっと名前が長い。
srcの下にできるやつでもいいかもしれない。

### 転送
Teensyツールで転送で、できあがった、eppとhexを順に転送する。  
コマンドラインの環境はまだ未設定。





