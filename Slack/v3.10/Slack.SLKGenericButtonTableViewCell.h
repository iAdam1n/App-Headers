/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack.SLKGenericBaseTableViewCell.h>

@class UILabel, NSString;

@interface Slack.SLKGenericButtonTableViewCell : Slack.SLKGenericBaseTableViewCell {

	 buttonLabel;
	 buttonText;

}

@property (assign,__weak,nonatomic) UILabel * buttonLabel; 
@property (copy,nonatomic) NSString * buttonText; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(UILabel *)buttonLabel;
-(void)setButtonLabel:(UILabel *)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

