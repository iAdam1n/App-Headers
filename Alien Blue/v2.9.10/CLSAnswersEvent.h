/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(NSMutableDictionary *)predefinedAttributes;
-(id)initWithKey:(id)arg1 metadataDictionary:(id)arg2 customAttributes:(id)arg3 ;
-(id)payloadDictionary;
-(NSDictionary *)customAttributes;
-(NSString *)key;
-(NSDictionary *)metadata;
@end

