/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface TGBridgeResponse : NSObject <NSCoding> {

	int _type;
	long long _subscriptionIdentifier;
	id _next;
	NSString* _error;

}

@property (nonatomic,readonly) long long subscriptionIdentifier;              //@synthesize subscriptionIdentifier=_subscriptionIdentifier - In the implementation block
@property (nonatomic,readonly) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id next;                                       //@synthesize next=_next - In the implementation block
@property (nonatomic,readonly) NSString * error;                              //@synthesize error=_error - In the implementation block
+(id)single:(id)arg1 forSubscription:(id)arg2 ;
+(id)fail:(id)arg1 forSubscription:(id)arg2 ;
+(id)completeForSubscription:(id)arg1 ;
-(long long)subscriptionIdentifier;
-(id)next;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(NSString *)error;
@end
