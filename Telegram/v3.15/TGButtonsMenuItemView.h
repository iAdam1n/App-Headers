/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class ASHandle, NSArray, TGHighlightableButton;

@interface TGButtonsMenuItemView : UITableViewCell {

	ASHandle* _watcherHandle;
	NSArray* _buttons;
	TGHighlightableButton* _leftButton;
	TGHighlightableButton* _rightButton;

}

@property (nonatomic,retain) TGHighlightableButton * leftButton;               //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) TGHighlightableButton * rightButton;              //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) ASHandle * watcherHandle;                         //@synthesize watcherHandle=_watcherHandle - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                //@synthesize buttons=_buttons - In the implementation block
-(void)setWatcherHandle:(ASHandle *)arg1 ;
-(ASHandle *)watcherHandle;
-(id)createButtonWithTitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)buttonPressed:(id)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(TGHighlightableButton *)leftButton;
-(TGHighlightableButton *)rightButton;
-(void)setLeftButton:(TGHighlightableButton *)arg1 ;
-(void)setRightButton:(TGHighlightableButton *)arg1 ;
@end
