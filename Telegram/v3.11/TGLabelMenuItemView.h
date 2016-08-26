/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGGroupedCell.h>

@class NSString, UIColor, UILabel;

@interface TGLabelMenuItemView : TGGroupedCell {

	int _itemTag;
	NSString* _title;
	NSString* _label;
	UIColor* _color;
	UILabel* _labelView;
	UILabel* _titleView;

}

@property (nonatomic,retain) UILabel * labelView;              //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UILabel * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) int itemTag;                      //@synthesize itemTag=_itemTag - In the implementation block
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIColor * color;                  //@synthesize color=_color - In the implementation block
-(int)itemTag;
-(void)setItemTag:(int)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(UILabel *)labelView;
-(void)setLabelView:(UILabel *)arg1 ;
@end
