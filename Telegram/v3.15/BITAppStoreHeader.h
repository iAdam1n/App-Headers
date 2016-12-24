/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, UIImage;

@interface BITAppStoreHeader : UIView {

	UILabel* _headerLabelView;
	UILabel* _middleLabelView;
	NSString* _headerText;
	NSString* _subHeaderText;
	UIImage* _iconImage;
	unsigned long long _style;

}

@property (nonatomic,copy) NSString * headerText;                   //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) NSString * subHeaderText;                //@synthesize subHeaderText=_subHeaderText - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                   //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
-(void)setSubHeaderText:(NSString *)arg1 ;
-(NSString *)subHeaderText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIImage *)iconImage;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
@end
