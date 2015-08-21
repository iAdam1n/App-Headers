/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, UIImageView;

@interface T1NativeTwoChoiceTextPollingResultsView : UIView {

	BOOL _hasVoted;
	BOOL _isChecked;
	BOOL _isWinner;
	NSString* _choice;
	NSString* _percentage;
	UILabel* _choiceLabel;
	UILabel* _percentageLabel;
	UIImageView* _checkmark;

}

@property (nonatomic,retain) NSString * choice;                      //@synthesize choice=_choice - In the implementation block
@property (nonatomic,retain) NSString * percentage;                  //@synthesize percentage=_percentage - In the implementation block
@property (assign,nonatomic) BOOL hasVoted;                          //@synthesize hasVoted=_hasVoted - In the implementation block
@property (assign,nonatomic) BOOL isChecked;                         //@synthesize isChecked=_isChecked - In the implementation block
@property (assign,nonatomic) BOOL isWinner;                          //@synthesize isWinner=_isWinner - In the implementation block
@property (nonatomic,retain) UILabel * choiceLabel;                  //@synthesize choiceLabel=_choiceLabel - In the implementation block
@property (nonatomic,retain) UILabel * percentageLabel;              //@synthesize percentageLabel=_percentageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * checkmark;                //@synthesize checkmark=_checkmark - In the implementation block
-(void)setHasVoted:(BOOL)arg1 ;
-(BOOL)hasVoted;
-(UILabel *)percentageLabel;
-(UILabel *)choiceLabel;
-(void)setChoice:(NSString *)arg1 ;
-(void)setIsChecked:(BOOL)arg1 ;
-(void)setIsWinner:(BOOL)arg1 ;
-(NSString *)choice;
-(void)setChoiceLabel:(UILabel *)arg1 ;
-(void)setPercentageLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isChecked;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(void)setPercentage:(NSString *)arg1 ;
-(BOOL)isWinner;
-(NSString *)percentage;
@end

