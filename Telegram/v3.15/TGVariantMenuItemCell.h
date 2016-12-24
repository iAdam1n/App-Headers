/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGGroupedCell.h>

@class NSString, UILabel, UIImageView;

@interface TGVariantMenuItemCell : TGGroupedCell {

	NSString* _title;
	NSString* _variant;
	UILabel* _titleLabel;
	UILabel* _variantLabel;
	UIImageView* _variantImageView;

}

@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * variantLabel;                      //@synthesize variantLabel=_variantLabel - In the implementation block
@property (nonatomic,retain) UIImageView * variantImageView;              //@synthesize variantImageView=_variantImageView - In the implementation block
@property (nonatomic,retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * variant;                          //@synthesize variant=_variant - In the implementation block
-(void)setVariantImage:(id)arg1 ;
-(UILabel *)variantLabel;
-(void)setVariantLabel:(UILabel *)arg1 ;
-(UIImageView *)variantImageView;
-(void)setVariantImageView:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)variant;
-(void)setVariant:(NSString *)arg1 ;
@end
