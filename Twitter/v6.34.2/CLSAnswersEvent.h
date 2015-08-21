/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableDictionary;

@interface CLSAnswersEvent : NSObject {

	NSString* _key;
	NSDictionary* _customAttributes;
	NSMutableDictionary* _predefinedAttributes;
	NSDictionary* _metadata;

}

@property (nonatomic,copy,readonly) NSString * key;                                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * customAttributes;                         //@synthesize customAttributes=_customAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * predefinedAttributes;              //@synthesize predefinedAttributes=_predefinedAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
+(id)filterCustomAttributes:(id)arg1 ;
+(void)addAttribute:(id)arg1 forKey:(id)arg2 toDictionaryByValidating:(id)arg3 ;
+(BOOL)validAttributeValue:(id)arg1 ;
+(id)truncateAttribute:(id)arg1 ;
+(id)serializeSuccess:(id)arg1 ;
-(id)initWithKey:(id)arg1 metadataDictionary:(id)arg2 customAttributes:(id)arg3 ;
-(NSMutableDictionary *)predefinedAttributes;
-(id)initWithPredefinedEventType:(id)arg1 customAttributes:(id)arg2 ;
-(id)initWithCustomEventType:(id)arg1 customAttributes:(id)arg2 ;
-(void)addPredefinedAttribute:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)customAttributes;
-(NSString *)key;
-(NSDictionary *)metadata;
-(id)payloadDictionary;
@end

