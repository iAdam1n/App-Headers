/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessageEphemeralTimerViewStatus : NSObject <NSCopying> {

	unsigned long long _subtype;
	double _timerNotSet_messageLifetimeInMilliseconds;
	double _timerSet_expirationTimestampInMillseconds;

}
+(id)timerNotSetWithMessageLifetimeInMilliseconds:(double)arg1 ;
+(id)timerSetWithExpirationTimestampInMillseconds:(double)arg1 ;
+(id)timerExpired;
-(void)matchTimerNotSet:(/*^block*/id)arg1 timerSet:(/*^block*/id)arg2 timerExpired:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
