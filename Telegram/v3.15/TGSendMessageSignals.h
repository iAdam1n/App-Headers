/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TGSendMessageSignals : NSObject
+(id)sendTextMessageWithPeerId:(long long)arg1 text:(id)arg2 replyToMid:(int)arg3 ;
+(id)sendMediaWithPeerId:(long long)arg1 replyToMid:(int)arg2 attachment:(id)arg3 uploadSignal:(id)arg4 mediaProducer:(/*^block*/id)arg5 ;
+(id)forwardMessagesWithMessageIds:(id)arg1 toPeerIds:(id)arg2 fromPeerId:(long long)arg3 fromPeerAccessHash:(long long)arg4 ;
+(id)broadcastMessageWithText:(id)arg1 toPeerIds:(id)arg2 ;
+(id)_channelInfoSignalForPeerId:(long long)arg1 ;
+(id)_addMessageToDatabaseWithPeerId:(long long)arg1 replyToMid:(int)arg2 text:(id)arg3 attachment:(id)arg4 isChannelGroup:(BOOL)arg5 ;
+(id)_sendMediaWithMessage:(id)arg1 accessHash:(long long)arg2 isChannelGroup:(BOOL)arg3 replyToMid:(int)arg4 uploadInfo:(id)arg5 mediaProducer:(/*^block*/id)arg6 ;
+(id)forwardMessageWithMessageIds:(id)arg1 peerId:(long long)arg2 accessHash:(long long)arg3 fromPeerId:(long long)arg4 fromPeerAccessHash:(long long)arg5 ;
+(id)sendLocationWithPeerId:(long long)arg1 replyToMid:(int)arg2 locationAttachment:(id)arg3 ;
+(id)sendRemoteDocumentWithPeerId:(long long)arg1 replyToMid:(int)arg2 documentAttachment:(id)arg3 ;
+(id)forwardMessageWithMid:(int)arg1 peerId:(long long)arg2 ;
@end
