/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAContactPropertyEditingCell.h>

@class UIButton, UIImageView;

@interface WAContactMultiValueEditingCell : WAContactPropertyEditingCell {

	UIButton* _labelButton;
	double _labelSectionWidth;
	UIImageView* _chevronImage;
	UIImageView* _fbBadge;

}

@property (nonatomic,retain) UIImageView * chevronImage;                                              //@synthesize chevronImage=_chevronImage - In the implementation block
@property (nonatomic,retain) UIImageView * fbBadge;                                                   //@synthesize fbBadge=_fbBadge - In the implementation block
@property (assign,nonatomic,__weak) id<WAContactMultiValueEditingCellDelegate> delegate; 
@property (nonatomic,readonly) UIButton * labelButton;                                                //@synthesize labelButton=_labelButton - In the implementation block
@property (assign,nonatomic) double labelSectionWidth;                                                //@synthesize labelSectionWidth=_labelSectionWidth - In the implementation block
-(void)reconfigure;
-(double)labelSectionWidth;
-(void)labelButtonAction:(id)arg1 ;
-(UIImageView *)fbBadge;
-(void)setFbBadge:(UIImageView *)arg1 ;
-(void)setLabelSectionWidth:(double)arg1 ;
-(void)setChevronImage:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIButton *)labelButton;
-(UIImageView *)chevronImage;
@end
