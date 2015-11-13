/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@protocol SLKReacted;
@class SLKReaction;

@interface SLKReactionsView : UIView {

	BOOL _usedInDetail;
	id<SLKReacted> _reactableObject;
	SLKReaction* _selectedReaction;

}

@property (assign,nonatomic) BOOL usedInDetail;                                  //@synthesize usedInDetail=_usedInDetail - In the implementation block
@property (nonatomic,retain) id<SLKReacted> reactableObject;                     //@synthesize reactableObject=_reactableObject - In the implementation block
@property (assign,nonatomic,__weak) SLKReaction * selectedReaction;              //@synthesize selectedReaction=_selectedReaction - In the implementation block
+(double)heightThatFitsWidth:(double)arg1 forReactions:(id)arg2 inDetail:(BOOL)arg3 ;
+(id)cacheKeyForReactions:(id)arg1 ;
+(double)buttonSpaceForItem:(id)arg1 isLast:(BOOL)arg2 canAddMore:(BOOL)arg3 ;
+(unsigned long long)rowCountForWidth:(double)arg1 forReactions:(id)arg2 forceRow:(BOOL)arg3 ;
+(double)heightThatFitsPaddedWidth:(double)arg1 forReactions:(id)arg2 inDetail:(BOOL)arg3 ;
+(void)initialize;
-(id<SLKReacted>)reactableObject;
-(BOOL)usedInDetail;
-(void)setUsedInDetail:(BOOL)arg1 ;
-(void)setReactableObject:(id<SLKReacted>)arg1 ;
-(void)didLongPressReactionButton:(id)arg1 ;
-(void)didTapReactionButton:(id)arg1 ;
-(void)layoutInSuperviewIfNeeded;
-(void)layoutReactionButtonsIfNeeded;
-(void)showReactionPicker:(id)arg1 ;
-(void)toggleReaction:(id)arg1 ;
-(void)showReactionDetail:(id)arg1 ;
-(SLKReaction *)selectedReaction;
-(id)titleForMenuWithReaction:(id)arg1 ;
-(void)setSelectedReaction:(SLKReaction *)arg1 ;
-(void)shouldAddNewReaction:(id)arg1 ;
-(void)showReactionMenuController:(id)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
@end

