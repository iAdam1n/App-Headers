/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface TGImagePickerCellCheckButton : UIButton {

	BOOL _checked;
	UIImageView* _checkView;

}

@property (nonatomic,retain) UIImageView * checkView;              //@synthesize checkView=_checkView - In the implementation block
-(void)setChecked:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)checkView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)commonInit;
-(BOOL)checked;
-(void)setCheckView:(UIImageView *)arg1 ;
@end
