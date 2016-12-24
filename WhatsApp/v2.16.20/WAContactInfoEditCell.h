/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol WAContactInfoEditCellDelegate;
@class UIView, UIButton, UIImageView, UITextField, NSString;

@interface WAContactInfoEditCell : UITableViewCell {

	UIView* _verticalSeparator;
	UIView* _topEdge;
	UIView* _bottomEdge;
	UIButton* _buttonLabel;
	UIImageView* _chevronImage;
	id<WAContactInfoEditCellDelegate> _delegate;
	UITextField* _textField;

}

@property (assign,nonatomic,__weak) id<WAContactInfoEditCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                      //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic) BOOL hideTopEdge; 
@property (assign,nonatomic) BOOL hideBottomEdge; 
-(void)setHideTopEdge:(BOOL)arg1 ;
-(void)labelButtonTouchUp:(id)arg1 ;
-(void)labelButtonTouchDown:(id)arg1 ;
-(void)labelButtonTouchCancel:(id)arg1 ;
-(BOOL)hideTopEdge;
-(BOOL)hideBottomEdge;
-(void)setHideBottomEdge:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<WAContactInfoEditCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<WAContactInfoEditCellDelegate>)delegate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(UITextField *)textField;
@end
