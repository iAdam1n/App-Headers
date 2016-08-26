/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SKPExpressionSearchSectionHeaderView : UIView {

	long long _style;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long style;                      //@synthesize style=_style - In the implementation block
+(double)heightForStyle:(long long)arg1 ;
-(void)setCountValue:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)title;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)image;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)commonInit;
-(void)setImageView:(UIImageView *)arg1 ;
@end
