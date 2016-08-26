/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBNullstateSuggestion : FBGraphQLInput {

	NSString* _semantic;
	NSString* _textDisplayed;
	NSString* _tracking;
	NSString* _keywordSource;

}

@property (nonatomic,copy) NSString * semantic;                   //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,copy) NSString * textDisplayed;              //@synthesize textDisplayed=_textDisplayed - In the implementation block
@property (nonatomic,copy) NSString * tracking;                   //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) NSString * keywordSource;              //@synthesize keywordSource=_keywordSource - In the implementation block
-(void)setTextDisplayed:(NSString *)arg1 ;
-(void)setKeywordSource:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)textDisplayed;
-(NSString *)keywordSource;
-(void)setTracking:(NSString *)arg1 ;
-(NSString *)tracking;
-(NSString *)semantic;
-(void)setSemantic:(NSString *)arg1 ;
@end
