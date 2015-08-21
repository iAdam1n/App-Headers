/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, NSSet, NSDictionary;

@interface FBAnalyticsLoggingPolicyModel : FBValueObject <NSCopying, NSCoding> {

	NSString* _appVersion;
	NSString* _checksum;
	NSSet* _eventBlacklist;
	NSDictionary* _frequencyConfig;

}

@property (nonatomic,copy,readonly) NSString * appVersion;                       //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * checksum;                         //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy,readonly) NSSet * eventBlacklist;                      //@synthesize eventBlacklist=_eventBlacklist - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * frequencyConfig;              //@synthesize frequencyConfig=_frequencyConfig - In the implementation block
-(id)initWithAppVersion:(id)arg1 checksum:(id)arg2 eventBlacklist:(id)arg3 frequencyConfig:(id)arg4 ;
-(NSSet *)eventBlacklist;
-(NSDictionary *)frequencyConfig;
-(NSString *)checksum;
-(NSString *)appVersion;
@end

