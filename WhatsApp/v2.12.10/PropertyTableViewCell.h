/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, NSTimer;

@interface PropertyTableViewCell : UITableViewCell {

	UILabel* _labelLabel;
	UILabel* _labelValue;
	UILabel* _labelComment;
	UIImageView* _imageViewStar;
	BOOL _isFavorite;
	BOOL _valueHighlighted;
	BOOL _popupActive;
	NSTimer* _popupTimer;

}

@property (nonatomic,readonly) UILabel * labelLabel;                //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * labelValue;                //@synthesize labelValue=_labelValue - In the implementation block
@property (nonatomic,readonly) UILabel * labelComment;              //@synthesize labelComment=_labelComment - In the implementation block
@property (assign,nonatomic) BOOL isFavorite; 
@property (assign,nonatomic) BOOL valueHighlighted;                 //@synthesize valueHighlighted=_valueHighlighted - In the implementation block
@property (nonatomic,readonly) BOOL popupActive;                    //@synthesize popupActive=_popupActive - In the implementation block
+(double)heightForText:(id)arg1 withFont:(id)arg2 hasComment:(BOOL)arg3 hasStar:(BOOL)arg4 cellWidth:(double)arg5 ;
+(id)labelTextColorNormal;
+(id)valueTextColorNormal;
+(id)commentFont;
+(id)commentTextColorNormal;
+(id)labelTextColorSelected;
+(id)valueTextColorSelected;
+(id)commentTextColorSelected;
+(id)valueTextColorHighlighted;
+(id)labelFont;
+(id)valueFont;
-(UILabel *)labelValue;
-(UILabel *)labelComment;
-(void)setValueHighlighted:(BOOL)arg1 ;
-(BOOL)popupActive;
-(void)showCopyPasteView:(id)arg1 ;
-(void)didHideMenu;
-(BOOL)valueHighlighted;
-(BOOL)isFavorite;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)copy:(id)arg1 ;
-(void)setIsFavorite:(BOOL)arg1 ;
-(UILabel *)labelLabel;
@end
