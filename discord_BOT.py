import discord
import getTimeByMessageId

TOKEN = ''

# 接続に必要なオブジェクトを生成
client = discord.Client()

# 起動時に動作する処理
@client.event
async def on_ready():
    # 起動したらターミナルにログイン通知が表示される
    print('Successfully logged in.')

# メッセージ受信時に動作する処理
@client.event
async def on_message(message):
    # メッセージ送信者がBotだった場合は無視する
    if message.author.bot:
        return
    #256 wo ukete id wo kaesu
    if message.content == '256':
        timestamp = getTimeByMessageId.id2time(message.id)
        ms = timestamp % 1000
        sec = ((timestamp - ms) / 1000) % 100
        min = (timestamp - sec*1000 - ms) / 100000
        await message.channel.send(min)
        await message.channel.send(sec)
        await message.channel.send(ms)

# Botの起動とDiscordサーバーへの接続
client.run(TOKEN)