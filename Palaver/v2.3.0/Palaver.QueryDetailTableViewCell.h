/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 26, 2015 at 1:21:43 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D7C9C869-53E4-46E2-8916-FD36C54A9FF5/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class TTTAttributedLabel, UIButton;

@interface Palaver.QueryDetailTableViewCell : UITableViewCell {

	 label;
	 accessoryButton;

}

@property (assign,__weak,nonatomic) TTTAttributedLabel * label; 
@property (assign,__weak,nonatomic) UIButton * accessoryButton; 
+(double)height:(id)arg1 width:(double)arg2 ;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(void)handleAccessoryAction;
-(UIButton *)accessoryButton;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(TTTAttributedLabel *)label;
-(void)setLabel:(TTTAttributedLabel *)arg1 ;
@end
