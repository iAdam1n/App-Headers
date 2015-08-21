/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTimelinePlistSerialization.h>
#import <Twitter/TFNPlistSerialization.h>

@class NSString;

@interface TFNTwitterSuggestsInfo : NSObject <TFNTwitterTimelinePlistSerialization, TFNPlistSerialization> {

	NSString* _controllerData;
	NSString* _scribeComponent;
	NSString* _sourceData;
	NSString* _suggestionType;
	NSString* _suggestModuleType;
	NSString* _suggestModuleIdentifier;
	long long _cursor;

}

@property (nonatomic,copy,readonly) NSString * controllerData;                       //@synthesize controllerData=_controllerData - In the implementation block
@property (nonatomic,copy,readonly) NSString * scribeComponent;                      //@synthesize scribeComponent=_scribeComponent - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceData;                           //@synthesize sourceData=_sourceData - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionType;                       //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestModuleType;                    //@synthesize suggestModuleType=_suggestModuleType - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestModuleIdentifier;              //@synthesize suggestModuleIdentifier=_suggestModuleIdentifier - In the implementation block
@property (nonatomic,readonly) long long cursor;                                     //@synthesize cursor=_cursor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)scribeComponent;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(NSString *)suggestModuleType;
-(id)timelinePlistDictionaryValue;
-(id)initWithTimelinePlistDictionary:(id)arg1 ;
-(NSString *)suggestModuleIdentifier;
-(id)scribeSuggestionDetails;
-(NSString *)suggestionType;
-(NSString *)controllerData;
-(NSString *)sourceData;
-(id)_initWithControllerData:(id)arg1 scribeComponent:(id)arg2 sourceData:(id)arg3 suggestionType:(id)arg4 suggestModuleType:(id)arg5 suggestsModuleIdentifer:(id)arg6 cursor:(long long)arg7 ;
-(long long)cursor;
@end

