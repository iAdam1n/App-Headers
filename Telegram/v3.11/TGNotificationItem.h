/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TGNotificationItem : NSObject {

	BOOL _isChannelGroup;
	int _identifier;
	int _replyToMid;
	long long _conversationId;
	double _duration;
	/*^block*/id _configure;

}

@property (nonatomic,readonly) int identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,readonly) int replyToMid;                        //@synthesize replyToMid=_replyToMid - In the implementation block
@property (nonatomic,readonly) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL isChannelGroup;                   //@synthesize isChannelGroup=_isChannelGroup - In the implementation block
@property (nonatomic,copy) id configure;                              //@synthesize configure=_configure - In the implementation block
-(BOOL)isChannelGroup;
-(int)replyToMid;
-(id)initWithConversation:(id)arg1 identifier:(int)arg2 replyToMid:(int)arg3 duration:(double)arg4 configure:(/*^block*/id)arg5 ;
-(void)setConfigure:(id)arg1 ;
-(double)duration;
-(int)identifier;
-(id)configure;
-(long long)conversationId;
@end
