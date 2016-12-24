/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBTimeInputOptionViewDelegate.h>

@protocol FBTimeInputDelegate;
@class NSString, FBTimeInputOptionView, UILabel, UIImageView, NSDate;

@interface FBTimeInput : UIView <FBTimeInputOptionViewDelegate> {

	BOOL _shouldUse12HourTime;
	NSString* _amSymbol;
	FBTimeInputOptionView* _hourOption;
	FBTimeInputOptionView* _minuteOption;
	FBTimeInputOptionView* _amPMOption;
	UILabel* _separatorLabel;
	UIImageView* _clockImageView;
	id<FBTimeInputDelegate> _delegate;

}

@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic,__weak) id<FBTimeInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timeInputOptionDidPressLeftRightKey:(id)arg1 keyInput:(id)arg2 ;
-(void)timeInputOptionDidBeginEditing:(id)arg1 ;
-(void)timeInputOptionDidChangeValue:(id)arg1 ;
-(void)timeInputOptionDidEndEditing:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBTimeInputDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBTimeInputDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end
