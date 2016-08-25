/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SRIOConsumer : NSObject {

	/*^block*/id _scanner;
	/*^block*/id _handler;
	unsigned long long _bytesNeeded;
	BOOL _readToCurrentFrame;
	BOOL _unmaskBytes;

}

@property (nonatomic,copy,readonly) id consumer;                          //@synthesize scanner=_scanner - In the implementation block
@property (nonatomic,copy,readonly) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long long bytesNeeded;              //@synthesize bytesNeeded=_bytesNeeded - In the implementation block
@property (nonatomic,readonly) BOOL readToCurrentFrame;                   //@synthesize readToCurrentFrame=_readToCurrentFrame - In the implementation block
@property (nonatomic,readonly) BOOL unmaskBytes;                          //@synthesize unmaskBytes=_unmaskBytes - In the implementation block
-(unsigned long long)bytesNeeded;
-(BOOL)readToCurrentFrame;
-(BOOL)unmaskBytes;
-(void)setBytesNeeded:(unsigned long long)arg1 ;
-(void)setupWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5 ;
-(id)handler;
-(id)consumer;
@end

