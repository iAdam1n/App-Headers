/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, MKDefaultButton;

@interface SKPSearchTableHeaderView : UIView {

	NSString* _title;
	NSString* _buttonTitle;
	/*^block*/id _actionBlock;
	UILabel* _titleLabel;
	MKDefaultButton* _button;

}

@property (nonatomic,readonly) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) MKDefaultButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * buttonTitle;                  //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) id actionBlock;                            //@synthesize actionBlock=_actionBlock - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)buttonDidPress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MKDefaultButton *)button;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(id)viewConstraints;
@end
