/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIButton.h>

@protocol GameCenterButtonDelegate;
@class UIImageView, UILabel, UIButton;

@interface GCButton : UIButton {

	UIImageView* backgroundView;
	UILabel* titleLabel;
	UILabel* subTitleLabel;
	UIImageView* iconView;
	UIButton* hintButton;
	int type;
	id<GameCenterButtonDelegate> _delegate;

}

@property (assign,nonatomic) id<GameCenterButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) int type; 
-(void)layoutUI;
-(void)hintButtonPressed;
-(void)gameCenterButtonWasPressed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<GameCenterButtonDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id<GameCenterButtonDelegate>)delegate;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setHighlighted:(BOOL)arg1 ;
@end

