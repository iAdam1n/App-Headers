/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBCommerceProductStoreFrontSubscribeComponentState : FBValueObject <NSCopying> {

	BOOL _isSubscribed;
	BOOL _isEnabled;

}

@property (nonatomic,readonly) BOOL isSubscribed;              //@synthesize isSubscribed=_isSubscribed - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled;                 //@synthesize isEnabled=_isEnabled - In the implementation block
-(id)initWithIsSubscribed:(BOOL)arg1 isEnabled:(BOOL)arg2 ;
-(BOOL)isEnabled;
-(BOOL)isSubscribed;
@end
