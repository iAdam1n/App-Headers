/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBOutgoingMessageTarget;

@interface MNMessageSendQueueKey : FBValueObject <NSCopying> {

	FBOutgoingMessageTarget* _target;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) FBOutgoingMessageTarget * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
-(id)initWithTarget:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(FBOutgoingMessageTarget *)target;
@end
