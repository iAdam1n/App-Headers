/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/eBayTableViewCell.h>

@protocol FeedbackDelegate;
@class RadioButtonControl, UILabel;

@interface EBUItemDeliveryDateCell : eBayTableViewCell {

	id<FeedbackDelegate> _feedbackDelegate;
	RadioButtonControl* _yesNoRadioButtons;
	UILabel* _questionLabel;
	UILabel* _estimatedDeliveryDateLabel;

}

@property (nonatomic,retain) RadioButtonControl * yesNoRadioButtons;                    //@synthesize yesNoRadioButtons=_yesNoRadioButtons - In the implementation block
@property (nonatomic,retain) UILabel * questionLabel;                                   //@synthesize questionLabel=_questionLabel - In the implementation block
@property (nonatomic,retain) UILabel * estimatedDeliveryDateLabel;                      //@synthesize estimatedDeliveryDateLabel=_estimatedDeliveryDateLabel - In the implementation block
@property (nonatomic,readonly) long long selectedSegment; 
@property (assign,nonatomic,__weak) id<FeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
-(double)optimalHeight;
-(void)segmentAction:(id)arg1 ;
-(void)setExpectedDeliveryDateRange:(id)arg1 to:(id)arg2 ;
-(double)heightForLabel;
-(UILabel *)questionLabel;
-(UILabel *)estimatedDeliveryDateLabel;
-(BOOL)ipad;
-(RadioButtonControl *)yesNoRadioButtons;
-(void)setYesNoRadioButtons:(RadioButtonControl *)arg1 ;
-(void)setQuestionLabel:(UILabel *)arg1 ;
-(void)setEstimatedDeliveryDateLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)selectedSegment;
-(void)setupConstraints;
-(void)setFeedbackDelegate:(id<FeedbackDelegate>)arg1 ;
-(id<FeedbackDelegate>)feedbackDelegate;
@end
