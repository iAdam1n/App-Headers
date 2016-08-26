/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
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
-(id)viewConstraints;
-(void)buttonDidPress:(id)arg1 ;
-(MKDefaultButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end
