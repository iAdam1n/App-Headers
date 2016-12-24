/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNEmojiDefaultColorPickerViewDelegate;
@class FBPickerView, FBStackedView, UIButton, MNEmojiDefaultColorPickerTitleView;

@interface MNEmojiDefaultColorPickerView : UIView {

	FBPickerView* _pickerView;
	FBStackedView* _stackedView;
	UIButton* _cancelButton;
	MNEmojiDefaultColorPickerTitleView* _titleView;
	id<MNEmojiDefaultColorPickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEmojiDefaultColorPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithPickerView:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNEmojiDefaultColorPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEmojiDefaultColorPickerViewDelegate>)delegate;
-(void)_cancelButtonTapped;
@end
