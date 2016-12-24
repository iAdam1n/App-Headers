/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBIntentTarget, NSString, NSURL;

@interface FBExternalURLHandlerResult : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBIntentTarget* _intent_target;
	NSString* _appSection_identifier;
	NSURL* _genericOpen_uRL;

}
+(id)intentWithTarget:(id)arg1 ;
+(id)appSectionWithIdentifier:(id)arg1 ;
+(id)genericOpenWithURL:(id)arg1 ;
-(void)matchIntent:(/*^block*/id)arg1 appSection:(/*^block*/id)arg2 genericOpen:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
