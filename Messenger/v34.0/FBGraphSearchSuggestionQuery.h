/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCopying.h>

@class FBGraphSearchStructuredText, NSString;

@interface FBGraphSearchSuggestionQuery : NSObject <NSCopying> {

	FBGraphSearchStructuredText* _structuredText;
	unsigned long long _keywordMode;
	NSString* _canonicalString;
	NSString* _keyDescription;

}

@property (nonatomic,readonly) FBGraphSearchStructuredText * structuredText;              //@synthesize structuredText=_structuredText - In the implementation block
@property (nonatomic,readonly) unsigned long long keywordMode;                            //@synthesize keywordMode=_keywordMode - In the implementation block
@property (nonatomic,readonly) NSString * canonicalString;                                //@synthesize canonicalString=_canonicalString - In the implementation block
@property (nonatomic,readonly) NSString * keyDescription;                                 //@synthesize keyDescription=_keyDescription - In the implementation block
-(unsigned long long)keywordMode;
-(id)initWithStructuredText:(id)arg1 keywordMode:(unsigned long long)arg2 ;
-(FBGraphSearchStructuredText *)structuredText;
-(NSString *)canonicalString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyDescription;
@end

