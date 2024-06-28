# Training

## The references

**from youtuber: [GCFLearnFree](https://www.youtube.com/@GCFLearnFree)**

+ youtube to mp3 tools: <https://wave.video/zh/convert/youtube-to-mp3-145>
+ (Highly recommend) mp3/mp4 file storage and convert to txt: <https://mwrfxz4d70m.feishu.cn/minutes/me>
+ (Need to pay) youtube to text and split the vedio: <https://maestra.ai/zh/tools/video-to-text/youtube-transcript-generator>

## Error correction explanation

| Serial Number | Style | Explanation |
| :--  | :-- | :--- |
| 1    | ... ~~and~~ ... | Surplus |
| 2    | ... ~~from~~(for) ... | Incorrect usage |
| 3    | ... (or) ... | Omission |

## Prompt

```
Prompt1:
现在你是我的英语听写助手，我需要你完成我提出的要求，根据听力原文，对我的听写内容进行改正，并给出每点错误的分析。

如果你理解了，只回复两个字：收到。在我知道你理解后，我会告诉你听力改正标准，以及错误分析标准，你基于这两个标准分别给我生成对应的内容。

---

Prompt2:
我等下会给你一段原文和我自己的听写内容，请你对照两份内容不一致的地方帮我改正。

现在我告诉你如何进行修改，有三种情况，一是漏写单词，二是多写单词，三是写错单词。

漏写单词举例：
原文中：Get better at what they do.
自己听写内容中：Get better what they do.
你帮我改正后：Get better (at)<sup>{index}</sup> what they do.

多写单词举例：
原文中：AI stands for artificial intelligence.
自己听写内容中：AI stands for artificial and intelligence.
你帮我改正后：AI stands for artificial ~~and~~<sup>{index}</sup> intelligence.

写错单词举例：
原文中：Do things faster more accurately.
自己听写内容中：Do things faster more arcuratly.
你帮我改正后：Do things faster more ~~arcuratly~~(accurately)<sup>{index}</sup>.

你也发现了，每次修改后都需要在后面加上 <sup>{index}</sup>，其中 index 是序号

注意，如果有连续多个漏写、多写或错写，那么应当把连续的几个单词同时包含，这里用漏写举例：
原文中：Get better at what they do.
自己听写内容中：Get better they do.
你帮我改正后：Get better (at what)<sup>{index}</sup> they do.

所以你要明白，在你给我的改正内容中，必须也要有括号、波浪线、<sup> 这些标签。

如果你明白了，请只用回复 "收到" 这两个字。

---

Propmt3:
原文：   
What is AI?

AI stands for artificial intelligence, and it's a way for computers to learn and work kind of like us. You can think of AI as a brain for a computer. Similar to how we use our brains to learn and make decisions, AI uses special computer programs to do the same thing. With AI, computers can help us with the stuff that would be really hard for people to do on their own. They can help docters diagnose diseases, allow us to predict the weather more accurately, and even play video games. It works by using software, to look lots of information and find patterns. Just like how you can tell the diffencence between a dog and a cat. AI can learn to recognize things too.

There are three main types of AI. supervised, unsupervised, and reinforcement learning. Each type learns in its own special way, but they all use lots of data to get better at what they do. AI is important because it helps us do things faster, more accurately and sometimes even better than we could on our own. Plus, it can help us solve really complex problems, that we might not be able to figure out by ourselves. With AI the possibilities are endless, from self-driving cars to personal assistance. AI is changing the way we live and work. So the next time you hear about AI, just remember that it's like a smart brain for computers, helping us to solve big problems and do things we never thought possible.    
   
自己听写内容中：   
What is AI?

AI stands for artificial and intelligence, and it's a way from computer to learn and work kind of like us. You can think of AI as a brain for computer. Similar to how we use brain to learn and make designs, AI uses special computer programs to do the same thing. With AI, compute can help us with the stuff will be very hard for people to do on the round. They can help docters dialog deasea, allow it's to predict weather more arcuritly, can even play video games.

It works by using software. to look lots of information and find patterns. Just like how you can tell the diffencence between the dog and cat. AI can learn to reculize things too.

There are three main types of AI. supervised, unsupervised, and reinforcement learning. Each type learns in it's own special way. But they all use lots of data to get better what they do. AI is important, because it helps do things faster, more arcuratly, and sometimes even better than we could under round.

Plus, it can help us solve really complex problems, that we might never be figure out by ourselves. With AI the passbilate and endless. From self-driving cars to personal systems. AI is changing the way we live and work. So next time you hear about AI, just remember it's like a small brain from computers, help us solve big problems that do things we never thought passible.
   
现在请你给我改正后的内容。
```

