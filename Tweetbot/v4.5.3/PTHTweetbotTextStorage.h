/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
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
