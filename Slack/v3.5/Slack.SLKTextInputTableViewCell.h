/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UITextField, UILabel, UIColor;

@interface Slack.SLKTextInputTableViewCell : UITableViewCell {

	 textField;
	 iconView;
	 defaultTextColor;
	 iconColor;
	 textSize;
	 isDirty;

}

@property (retain,nonatomic) UITextField * textField; 
@property (retain,nonatomic) UILabel * iconView; 
@property (readonly,nonatomic) UIColor * defaultTextColor; 
@property (readonly,nonatomic) UIColor * iconColor; 
@property (readonly,nonatomic) double textSize; 
@property (assign,nonatomic) BOOL isDirty; 
-(UIColor *)iconColor;
-(void)configure:(id)arg1 placeholder:(id)arg2 ;
-(void)makeTextBold;
-(void)makeTextDefaultWeight;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(double)textSize;
-(UITextField *)textField;
-(UILabel *)iconView;
-(void)setIconView:(UILabel *)arg1 ;
-(BOOL)isDirty;
-(UIColor *)defaultTextColor;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setIsDirty:(BOOL)arg1 ;
@end

