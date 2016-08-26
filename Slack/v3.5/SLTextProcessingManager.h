/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, TSFParserContext, SLKDependencies;

@interface SLTextProcessingManager : NSObject {

	NSMutableDictionary* _processedTextByHash;
	NSMutableDictionary* _processedTextByEmoji;
	TSFParserContext* _tsfParser;
	SLKDependencies* _dependencies;

}

@property (nonatomic,retain) NSMutableDictionary * processedTextByHash;               //@synthesize processedTextByHash=_processedTextByHash - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * processedTextByEmoji;              //@synthesize processedTextByEmoji=_processedTextByEmoji - In the implementation block
@property (nonatomic,retain) TSFParserContext * tsfParser;                            //@synthesize tsfParser=_tsfParser - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                   //@synthesize dependencies=_dependencies - In the implementation block
-(void)clearProcessedText;
-(void)didDownloadCustomEmoji:(id)arg1 ;
-(void)setProcessedTextByHash:(NSMutableDictionary *)arg1 ;
-(void)setProcessedTextByEmoji:(NSMutableDictionary *)arg1 ;
-(void)setTsfParser:(TSFParserContext *)arg1 ;
-(TSFParserContext *)tsfParser;
-(NSMutableDictionary *)processedTextByHash;
-(NSMutableDictionary *)processedTextByEmoji;
-(id)textForString:(id)arg1 withColor:(id)arg2 parsingMode:(unsigned long long)arg3 ;
-(id)processedAttributedStringForText:(id)arg1 withColor:(id)arg2 ;
-(id)processedAttributedStringForText:(id)arg1 withColor:(id)arg2 parsingMode:(unsigned long long)arg3 ;
-(id)hashKeyForString:(id)arg1 withColor:(id)arg2 parsingMode:(unsigned long long)arg3 ;
-(id)processText:(id)arg1 withColor:(id)arg2 parsingMode:(unsigned long long)arg3 ;
-(id)cacheStringForSection:(id)arg1 ;
-(id)joinOrLeftStringWithOriginalString:(id)arg1 usersWhoLeftOrJoined:(id)arg2 ;
-(id)joinOrLeftStringWithUsers:(id)arg1 didJoin:(BOOL)arg2 usersWhoLeftAndJoined:(id)arg3 usersWhoJoinedAndLeft:(id)arg4 ;
-(id)initWithDependencies:(id)arg1 ;
-(id)linksForText:(id)arg1 ;
-(id)linksForText:(id)arg1 withColor:(id)arg2 ;
-(id)processedAttributedStringForText:(id)arg1 ;
-(id)rolledUpJoinAndLeaveStringFromSection:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)dealloc;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
