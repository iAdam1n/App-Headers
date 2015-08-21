/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBUDPPrimerTimeSyncer;
@class FBEncryptedChannelManager;

@interface FBUDPPrimer : NSObject {

	FBEncryptedChannelManager* _encryptedChannelManager;
	id<FBUDPPrimerTimeSyncer> _timeSyncer;
	unsigned long long _port;

}

@property (assign,nonatomic) unsigned long long port;              //@synthesize port=_port - In the implementation block
+(id)sendPrimerPacket:(id)arg1 timeSyncer:(id)arg2 ;
+(id)_encodedStringForURL:(id)arg1 headers:(id)arg2 originalHost:(id)arg3 channel:(id)arg4 estimatedServerUnixTime:(long long)arg5 ;
+(BOOL)_sendUDPPacketToIPAddress:(id)arg1 port:(unsigned long long)arg2 data:(id)arg3 ;
-(id)initWithEncryptedChannelManager:(id)arg1 timeSyncer:(id)arg2 ;
-(id)sendPrimerPacket:(id)arg1 ;
-(id)primerPacketForUrl:(id)arg1 headers:(id)arg2 userAgent:(id)arg3 originalHost:(id)arg4 clientQueryID:(id)arg5 ;
-(id)init;
-(unsigned long long)port;
-(void)setPort:(unsigned long long)arg1 ;
@end

