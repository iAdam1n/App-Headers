/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CustomEmojiProvider;
@class NSMutableArray, NSDictionary;

@interface TSFParserContext : NSObject {

	id<CustomEmojiProvider> _emojiProvider;
	NSMutableArray* _openElements;
	NSMutableArray* _blockElements;
	NSMutableArray* _tokens;
	NSDictionary* _blockClasses;

}

@property (assign,nonatomic,__weak) id<CustomEmojiProvider> emojiProvider;              //@synthesize emojiProvider=_emojiProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * openElements;                             //@synthesize openElements=_openElements - In the implementation block
@property (nonatomic,retain) NSMutableArray * blockElements;                            //@synthesize blockElements=_blockElements - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokens;                                   //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain) NSDictionary * blockClasses;                               //@synthesize blockClasses=_blockClasses - In the implementation block
+(id)parametersFromToken:(id)arg1 ;
+(id)tagFromToken:(id)arg1 ;
+(unsigned long long)locationOfPipeInToken:(id)arg1 ;
+(unsigned long long)locationOfPipeInTokenBackwards:(id)arg1 ;
+(unsigned long long)locationOfColonInToken:(id)arg1 ;
+(id)parserContextWithString:(id)arg1 ;
+(id)parserContextWithTokenArray:(id)arg1 ;
+(unsigned long long)locationOfCaretInToken:(id)arg1 ;
+(id)labelFromToken:(id)arg1 ;
-(void)resetWithString:(id)arg1 ;
-(void)setOpenElements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)openElements;
-(void)addCharacters:(id)arg1 ;
-(id<CustomEmojiProvider>)emojiProvider;
-(void)setEmojiProvider:(id<CustomEmojiProvider>)arg1 ;
-(void)setBlockElements:(NSMutableArray *)arg1 ;
-(void)setBlockClasses:(NSDictionary *)arg1 ;
-(void)resetWithTokenArray:(id)arg1 ;
-(NSMutableArray *)blockElements;
-(void)endElement:(id)arg1 ;
-(NSDictionary *)blockClasses;
-(Class)classForToken:(id)arg1 ;
-(unsigned long long)numBlockElements;
-(void)parse;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)elements;
-(id)attributedString;
-(NSMutableArray *)tokens;
-(void)startElement:(id)arg1 ;
-(void)setTokens:(NSMutableArray *)arg1 ;
@end
