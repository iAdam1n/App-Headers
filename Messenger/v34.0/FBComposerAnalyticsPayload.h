/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, NSDictionary, FBPublishingAnalyticsPayload;

@interface FBComposerAnalyticsPayload : FBValueObject <NSCopying, NSCoding> {

	NSString* _sourceType;
	NSString* _contentOrigin;
	NSDictionary* _extraDataToIncludeInInitEvent;
	NSDictionary* _extraDataToIncludeInPostEvent;
	FBPublishingAnalyticsPayload* _publishingAnalyticsPayload;

}

@property (nonatomic,copy,readonly) NSString * sourceType;                                                  //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentOrigin;                                               //@synthesize contentOrigin=_contentOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInInitEvent;                           //@synthesize extraDataToIncludeInInitEvent=_extraDataToIncludeInInitEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInPostEvent;                           //@synthesize extraDataToIncludeInPostEvent=_extraDataToIncludeInPostEvent - In the implementation block
@property (nonatomic,copy,readonly) FBPublishingAnalyticsPayload * publishingAnalyticsPayload;              //@synthesize publishingAnalyticsPayload=_publishingAnalyticsPayload - In the implementation block
-(NSString *)contentOrigin;
-(NSDictionary *)extraDataToIncludeInInitEvent;
-(NSDictionary *)extraDataToIncludeInPostEvent;
-(FBPublishingAnalyticsPayload *)publishingAnalyticsPayload;
-(id)initWithSourceType:(id)arg1 contentOrigin:(id)arg2 extraDataToIncludeInInitEvent:(id)arg3 extraDataToIncludeInPostEvent:(id)arg4 publishingAnalyticsPayload:(id)arg5 ;
-(NSString *)sourceType;
@end

