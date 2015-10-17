/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
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
-(NSMutableDictionary *)predefinedAttributes;
-(id)initWithKey:(id)arg1 metadataDictionary:(id)arg2 customAttributes:(id)arg3 ;
-(NSDictionary *)customAttributes;
-(NSString *)key;
-(NSDictionary *)metadata;
-(id)payloadDictionary;
@end
