/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class TGModernButton, UIImageView, UILabel;

@interface TGStickerKeyboardTabSettingsCell : UICollectionViewCell {

	TGModernButton* _button;
	UIImageView* _imageView;
	UILabel* _badgeLabel;
	UIImageView* _badgeView;
	int _mode;
	/*^block*/id _pressed;

}

@property (nonatomic,copy) id pressed;              //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) int mode;              //@synthesize mode=_mode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPressed:(id)arg1 ;
-(id)pressed;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setBadge:(id)arg1 ;
-(void)buttonPressed;
@end
