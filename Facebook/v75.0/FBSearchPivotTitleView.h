/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBSearchPivotTitleViewDelegate;
@class FBUserSession, FBRichTextView, NSAttributedString;

@interface FBSearchPivotTitleView : UIView {

	FBUserSession* _session;
	FBRichTextView* _titleView;
	id<FBSearchPivotTitleViewDelegate> _delegate;
	NSAttributedString* _pivotQueryAttributedString;

}

@property (assign,nonatomic,__weak) id<FBSearchPivotTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * pivotQueryAttributedString;                   //@synthesize pivotQueryAttributedString=_pivotQueryAttributedString - In the implementation block
+(double)heightForSession:(id)arg1 ;
+(CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(CGSize)arg2 session:(id)arg3 ;
-(void)_didTapTitle:(id)arg1 withEvent:(id)arg2 ;
-(void)_calculateTitlesSizesIfNeeded;
-(void)setPivotQueryAttributedString:(NSAttributedString *)arg1 ;
-(void)_didTapBackground:(id)arg1 ;
-(NSAttributedString *)pivotQueryAttributedString;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBSearchPivotTitleViewDelegate>)arg1 ;
-(id<FBSearchPivotTitleViewDelegate>)delegate;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)initWithSession:(id)arg1 ;
-(void)_updateUI;
@end
