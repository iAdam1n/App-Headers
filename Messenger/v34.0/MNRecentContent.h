/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSDictionary, NSString;

@interface MNRecentContent : FBValueObject <NSCopying> {

	NSDictionary* _attachmentJSON;
	unsigned long long _timestamp;
	NSString* _attributionID;
	NSString* _messageID;
	NSString* _cacheKey;

}

@property (nonatomic,copy,readonly) NSDictionary * attachmentJSON;              //@synthesize attachmentJSON=_attachmentJSON - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * attributionID;                   //@synthesize attributionID=_attributionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageID;                       //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheKey;                        //@synthesize cacheKey=_cacheKey - In the implementation block
-(id)initWithAttachmentJSON:(id)arg1 timestamp:(unsigned long long)arg2 attributionID:(id)arg3 messageID:(id)arg4 cacheKey:(id)arg5 ;
-(NSDictionary *)attachmentJSON;
-(NSString *)attributionID;
-(unsigned long long)timestamp;
-(NSString *)cacheKey;
-(NSString *)messageID;
@end

