/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSearchStructuredText, NSString, NSArray;

@interface FBSearchSuggestionQuery : NSObject <NSCopying> {

	FBSearchStructuredText* _structuredText;
	unsigned long long _keywordMode;
	NSString* _canonicalString;
	NSString* _keyDescription;
	NSArray* _topKeywordSuggestionsOnDisplay;

}

@property (nonatomic,readonly) FBSearchStructuredText * structuredText;              //@synthesize structuredText=_structuredText - In the implementation block
@property (nonatomic,readonly) unsigned long long keywordMode;                       //@synthesize keywordMode=_keywordMode - In the implementation block
@property (nonatomic,readonly) NSString * canonicalString;                           //@synthesize canonicalString=_canonicalString - In the implementation block
@property (nonatomic,readonly) NSString * keyDescription;                            //@synthesize keyDescription=_keyDescription - In the implementation block
@property (nonatomic,copy) NSArray * topKeywordSuggestionsOnDisplay;                 //@synthesize topKeywordSuggestionsOnDisplay=_topKeywordSuggestionsOnDisplay - In the implementation block
-(id)initWithStructuredText:(id)arg1 keywordMode:(unsigned long long)arg2 ;
-(void)setTopKeywordSuggestionsOnDisplay:(NSArray *)arg1 ;
-(FBSearchStructuredText *)structuredText;
-(unsigned long long)keywordMode;
-(NSString *)canonicalString;
-(NSArray *)topKeywordSuggestionsOnDisplay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyDescription;
@end
