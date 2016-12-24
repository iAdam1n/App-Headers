/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBInlineComposerProductionPrompt, FBInlineComposerPhotoRemindersPrompt, FBInlineComposerMagicStoryPrompt, FBInlineComposerPasteboardLinkPrompt, NSArray, FBInlineComposerMoviePrompt, FBInlineComposerGoodFriendsPrompt, FBInlineComposerGroupWelcomePrompt;

@interface FBInlineComposerPromptContent : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBInlineComposerProductionPrompt* _productionPrompt_prompt;
	FBInlineComposerPhotoRemindersPrompt* _photoReminderPrompt_prompt;
	FBInlineComposerMagicStoryPrompt* _magicStoryPrompt_prompt;
	FBInlineComposerPasteboardLinkPrompt* _pasteboardLinkPrompt_prompt;
	NSArray* _actionButtonsPrompt_actionButtonConfigurations;
	FBInlineComposerMoviePrompt* _moviePrompt_prompt;
	FBInlineComposerGoodFriendsPrompt* _goodFriendsPrompt_prompt;
	FBInlineComposerGroupWelcomePrompt* _groupWelcomePrompt_prompt;

}
+(id)draftRecoveryPrompt;
+(id)actionButtonsPromptWithActionButtonConfigurations:(id)arg1 ;
+(id)goodFriendsPromptWithPrompt:(id)arg1 ;
+(id)groupWelcomePromptWithPrompt:(id)arg1 ;
+(id)magicStoryPromptWithPrompt:(id)arg1 ;
+(id)mediaPickerPrompt;
+(id)moviePromptWithPrompt:(id)arg1 ;
+(id)pasteboardLinkPromptWithPrompt:(id)arg1 ;
+(id)photoReminderPromptWithPrompt:(id)arg1 ;
+(id)productionPromptWithPrompt:(id)arg1 ;
-(void)matchMediaPickerPrompt:(/*^block*/id)arg1 productionPrompt:(/*^block*/id)arg2 photoReminderPrompt:(/*^block*/id)arg3 magicStoryPrompt:(/*^block*/id)arg4 pasteboardLinkPrompt:(/*^block*/id)arg5 actionButtonsPrompt:(/*^block*/id)arg6 moviePrompt:(/*^block*/id)arg7 goodFriendsPrompt:(/*^block*/id)arg8 draftRecoveryPrompt:(/*^block*/id)arg9 groupWelcomePrompt:(/*^block*/id)arg10 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
