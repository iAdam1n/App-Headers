/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibDialogView.h>

@class UILabel, S8ImageView, UIImageView, UIButton, S8Button, NSString;

@interface EventDialogView : XibDialogView {

	BOOL _isChecked;
	UILabel* _eventHeaderLabel;
	S8ImageView* _eventImage;
	UIImageView* _checkedImage;
	UIButton* _turnOffButton;
	UILabel* _turnOffLabel;
	S8Button* _goButton;
	UILabel* _bannerLabel;
	NSString* _action;
	NSString* _eventId;

}

@property (nonatomic,retain) UILabel * eventHeaderLabel;              //@synthesize eventHeaderLabel=_eventHeaderLabel - In the implementation block
@property (nonatomic,retain) S8ImageView * eventImage;                //@synthesize eventImage=_eventImage - In the implementation block
@property (nonatomic,retain) UIImageView * checkedImage;              //@synthesize checkedImage=_checkedImage - In the implementation block
@property (nonatomic,retain) UIButton * turnOffButton;                //@synthesize turnOffButton=_turnOffButton - In the implementation block
@property (nonatomic,retain) UILabel * turnOffLabel;                  //@synthesize turnOffLabel=_turnOffLabel - In the implementation block
@property (nonatomic,retain) S8Button * goButton;                     //@synthesize goButton=_goButton - In the implementation block
@property (nonatomic,retain) UILabel * bannerLabel;                   //@synthesize bannerLabel=_bannerLabel - In the implementation block
@property (assign,nonatomic) BOOL isChecked;                          //@synthesize isChecked=_isChecked - In the implementation block
@property (nonatomic,retain) NSString * action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * eventId;                      //@synthesize eventId=_eventId - In the implementation block
+(id)viewWithEventNotice:(id)arg1 ;
-(void)dismissed:(id)arg1 ;
-(id)initWithAction:(id)arg1 imagePath:(id)arg2 buttonText:(id)arg3 headerText:(id)arg4 bannerText:(id)arg5 eventId:(id)arg6 ;
-(S8ImageView *)eventImage;
-(UILabel *)eventHeaderLabel;
-(UILabel *)bannerLabel;
-(UILabel *)turnOffLabel;
-(void)setIsChecked:(BOOL)arg1 ;
-(UIImageView *)checkedImage;
-(void)turnOffPressed;
-(void)eventPressed;
-(void)setEventHeaderLabel:(UILabel *)arg1 ;
-(void)setEventImage:(S8ImageView *)arg1 ;
-(void)setCheckedImage:(UIImageView *)arg1 ;
-(UIButton *)turnOffButton;
-(void)setTurnOffButton:(UIButton *)arg1 ;
-(void)setTurnOffLabel:(UILabel *)arg1 ;
-(void)setBannerLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)setChecked:(BOOL)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(BOOL)isChecked;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
-(void)setGoButton:(S8Button *)arg1 ;
-(S8Button *)goButton;
@end

