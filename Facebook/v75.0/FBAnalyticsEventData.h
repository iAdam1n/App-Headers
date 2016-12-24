/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface FBAnalyticsEventData : FBValueObject <NSCopying, NSCoding> {

	NSString* _eventName;
	NSString* _module;
	NSDictionary* _extra;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                 //@synthesize module=_module - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;              //@synthesize extra=_extra - In the implementation block
-(NSDictionary *)extra;
-(void)logToAnalytics:(id)arg1 ;
-(id)initWithEventName:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(BOOL)isValid;
-(NSString *)eventName;
-(NSString *)module;
@end
