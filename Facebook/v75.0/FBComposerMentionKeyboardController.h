/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITableView, FBComposerMentionDecorator;

@interface FBComposerMentionKeyboardController : NSObject {

	UITableView* _mentionsView;
	FBComposerMentionDecorator* _mentionDecorator;
	long long _currentHighlightedMentionIndex;

}
+(id)newWithMentionView:(id)arg1 decorator:(id)arg2 ;
+(BOOL)isKeyboardSupportEnabled;
+(void)setIsKeyboardSupportEnabled:(BOOL)arg1 ;
-(BOOL)isMentionPickerShown;
-(void)selectNextMention;
-(void)selectPreviousMention;
-(void)commitSelectedMention;
-(void)selectMentionAtIndex:(long long)arg1 ;
-(id)initWithMentionView:(id)arg1 decorator:(id)arg2 ;
-(long long)_maxVisibleMentionIndex;
-(void)_selectMention:(long long)arg1 ;
-(void)reset;
@end
