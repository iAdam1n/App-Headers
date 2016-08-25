/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHSmartifyTextStorage.h>
#import <PTHCommon/PTHUIViewColorNameChangeCategory.h>

@class NSString;

@interface PTHTweetbotTextStorage : PTHSmartifyTextStorage <PTHUIViewColorNameChangeCategory> {

	BOOL _dynamicTextNeedsUpdate;
	NSString* _bodyColorName;
	NSString* _hashtagColorName;
	NSString* _linkColorName;
	NSString* _mentionColorName;

}

@property (nonatomic,copy) NSString * bodyColorName;                 //@synthesize bodyColorName=_bodyColorName - In the implementation block
@property (nonatomic,copy) NSString * hashtagColorName;              //@synthesize hashtagColorName=_hashtagColorName - In the implementation block
@property (nonatomic,copy) NSString * linkColorName;                 //@synthesize linkColorName=_linkColorName - In the implementation block
@property (nonatomic,copy) NSString * mentionColorName;              //@synthesize mentionColorName=_mentionColorName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBodyColorName:(NSString *)arg1 ;
-(void)setLinkColorName:(NSString *)arg1 ;
-(NSString *)bodyColorName;
-(NSString *)hashtagColorName;
-(void)setHashtagColorName:(NSString *)arg1 ;
-(NSString *)linkColorName;
-(NSString *)mentionColorName;
-(void)setMentionColorName:(NSString *)arg1 ;
-(void)colorThemeDidChange;
-(id)init;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)processEditing;
@end

