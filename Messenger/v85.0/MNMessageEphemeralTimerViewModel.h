/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey;

@interface MNMessageEphemeralTimerViewModel : FBValueObject <NSCopying> {

	BOOL _shouldCountdown;
	FBMMessageKey* _messageKey;
	double _messageRemainingLifetimeInSeconds;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                       //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,readonly) double messageRemainingLifetimeInSeconds;              //@synthesize messageRemainingLifetimeInSeconds=_messageRemainingLifetimeInSeconds - In the implementation block
@property (nonatomic,readonly) BOOL shouldCountdown;                                  //@synthesize shouldCountdown=_shouldCountdown - In the implementation block
-(FBMMessageKey *)messageKey;
-(id)initWithMessageKey:(id)arg1 messageRemainingLifetimeInSeconds:(double)arg2 shouldCountdown:(BOOL)arg3 ;
-(BOOL)shouldCountdown;
-(double)messageRemainingLifetimeInSeconds;
@end
