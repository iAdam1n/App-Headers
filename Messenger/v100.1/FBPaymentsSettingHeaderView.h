/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBPaymentsLoadingIndicatorControlling;
@class FBRichTextView, UIView, NSString;

@interface FBPaymentsSettingHeaderView : UIView {

	FBRichTextView* _titleTextView;
	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	BOOL _shouldDisplayLoadingIndicator;
	UIView* _rightAccessoryView;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic,__weak) UIView * rightAccessoryView;              //@synthesize rightAccessoryView=_rightAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayLoadingIndicator;              //@synthesize shouldDisplayLoadingIndicator=_shouldDisplayLoadingIndicator - In the implementation block
-(void)setShouldDisplayLoadingIndicator:(BOOL)arg1 ;
-(void)setRightAccessoryView:(UIView *)arg1 ;
-(UIView *)rightAccessoryView;
-(BOOL)shouldDisplayLoadingIndicator;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
