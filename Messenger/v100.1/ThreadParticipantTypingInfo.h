/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ThreadParticipantTypingInfo : NSObject {

	int _lastTypingReceivedState;
	double _lastTypingReceivedTime;

}

@property (nonatomic,readonly) int lastTypingReceivedState;                //@synthesize lastTypingReceivedState=_lastTypingReceivedState - In the implementation block
@property (nonatomic,readonly) double lastTypingReceivedTime;              //@synthesize lastTypingReceivedTime=_lastTypingReceivedTime - In the implementation block
-(double)lastTypingReceivedTime;
-(int)lastTypingReceivedState;
-(id)initWithTypingState:(int)arg1 receivedTime:(double)arg2 ;
@end
