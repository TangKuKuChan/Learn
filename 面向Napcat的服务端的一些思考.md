# 前言
**Napcat**与众多机器人框架一样都是基于**Onebot**协议的，可以利用HTTP或者WS之类的与外部通信.我们可以利用其他语言与其通信，编写自己的消息处理服务端，这里以Python为例.

## 关于插件
一个服务端总是要实现许多功能的，并且在后续也会有新功能加入，我们并不会把那些代码全部塞进同一个文件里，相反，以插件的形式是一个不错的维护方式.

现在我们要解决两个问题：如何加载插架以及如何把新消息告诉插架.

### 加载插件
我们事先并不知道插架的名称，我们需要遍历插架目录获取.py文件并加载，这里我们使用Python提供的**importlib**包进行动态加载.

```python
plgsp = pwd / 'plugins'
    plugins_files = list(plgsp.iterdir())
    for plg in plugins_files:
        try:
            if plg.suffix==".py":
                print("找到："+str(plg))
                print("尝试加载")
                spec = importlib.util.spec_from_file_location(f"{plg.stem}",plg.resolve())
                module = importlib.util.module_from_spec(spec)
                spec.loader.exec_module(module)
                pluginslist.append(module)
            else:
                continue
        except Exception as ex:
            print("加载{0}时发生错误：{1}".format(plg,ex))
```
这里的pwd是服务端的工作目录利用以下代码获取，其中利用了Python 3.4版本开始提供的**pathlib**标准库.
```python
pwd = pathlib.Path(__file__).resolve().parents[0]
```
加载的插件用pluginslist储存起来，方便下一步操作。这里也可以利用字典以模块名:model形式保存，但目前来说没必要.

### 告知插件新消息（订阅与发布）
我想起来C#里的一套订阅发布机制，觉得这里应该也可以利用这个机制实现新消息的发布，但限于我所学有限，以下说法可能会很粗浅.

首先我们约定，在插架里必须有一个统一的方法用以发布者发布消息，具体实现方法由插件决定，但是参数列表必须一致.同时消息又分为群消息和私聊消息，插件或许只处理一种或都处理，我们又约定在插件里用大写变量 **TYPEID** 定义插件的消息处理范围，其值为0,1或者2.

>Python里并没有常量这个概念，但是我们通常用大写字母表示这个变量为常量。

到了这里，我们可以在前面的加载插件的方法中添加两个列表，分别放入可以处理私人消息的插件和可以处理群消息的插件。这个列表就相当于订阅者列表，实现订阅.

我们又可以进一步规范发布消息的方式，由服务端接收消息后，判定消息类型，再发布消息。群消息相比于私人消息会多出一个群QQ号，也就是多一个参数，我们约定插件需实现方法重载，方便统一.

总结下来就是，由两个分组的模块列表表示订阅者列表，收到消息后服务端根据消息类型在相应的列表遍历，用约定的发布方法发布消息.