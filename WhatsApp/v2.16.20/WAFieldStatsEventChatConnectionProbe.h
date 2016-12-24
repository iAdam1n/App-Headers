/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WAFieldStatsEventChatConnectionProbe : NSObject {

	double _startTime;
	double _completionTime;
	double _connectionEstablishedTime;
	int _port;
	unsigned long long _state;

}

@property (assign,nonatomic) int port;                              //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)submitEvent;
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(int)port;
-(BOOL)canTransitionToState:(unsigned long long)arg1 ;
-(void)setPort:(int)arg1 ;
@end
