# B 站视频嵌入

官方代码：

```html
<iframe src="//player.bilibili.com/player.html?aid=375588815&bvid=BV1so4y1m7U5&cid=339262048&page=1&autoplay=0" scrolling="no" border="0" frameborder="no" framespacing="0" allowfullscreen="true"> </iframe>
```

本项目中使用：

```html
<iframe src="//player.bilibili.com/player.html?aid=375588815&bvid=BV1so4y1m7U5&cid=339262048&page=1&high_quality=1&danmaku=0&autoplay=0" allowfullscreen="true" width="100%" height="500" scrolling="no" frameborder="0" sandbox="allow-top-navigation allow-same-origin allow-forms allow-scripts"></iframe>
```

参数解析：

```s
&high_quality=1（1=最高画质 0=最低画质）

&danmaku=0（1=打开弹幕 0=关闭弹幕）

&autoplay=0（1=自动播放 0=禁止自动播放）

sandbox="allow-top-navigation allow-same-origin allow-forms allow-scripts"（禁止弹出网页）
```
