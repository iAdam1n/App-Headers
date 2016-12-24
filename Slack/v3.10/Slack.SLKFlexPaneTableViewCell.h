/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UIImageView, UILabel, UIImage;

@interface Slack.SLKFlexPaneTableViewCell : UITableViewCell {

	 cellbackgroundView;
	 thumbImageView;
	 mainLabel;
	 bottomSeperatorView;
	 labelTextColor;
	 highlightedBackgroundColor;
	 highlightedForegroundColor;
	 highlightedImage;
	 thumbImage;

}

@property (assign,__weak,nonatomic) UIView * cellbackgroundView; 
@property (assign,__weak,nonatomic) UIImageView * thumbImageView; 
@property (assign,__weak,nonatomic) UILabel * mainLabel; 
@property (assign,__weak,nonatomic) UIView * bottomSeperatorView; 
@property (retain,nonatomic) UIImage * highlightedImage; 
@property (retain,nonatomic) UIImage * thumbImage; 
-(UIView *)bottomSeperatorView;
-(UIImageView *)thumbImageView;
-(void)setThumbImageView:(UIImageView *)arg1 ;
-(UIView *)cellbackgroundView;
-(void)setCellbackgroundView:(UIView *)arg1 ;
-(void)setBottomSeperatorView:(UIView *)arg1 ;
-(UIImage *)thumbImage;
-(void)setThumbImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(UIImage *)highlightedImage;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(void)setMainLabel:(UILabel *)arg1 ;
-(UILabel *)mainLabel;
@end
