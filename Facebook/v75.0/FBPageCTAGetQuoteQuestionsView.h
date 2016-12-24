/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBPageCTAGetQuoteSharedTextInputViewDelegate.h>

@protocol FBPageCTAGetQuoteQuestionsViewDelegate, FBPageCTAGetQuoteSharedTextInputViewResizeDelegate;
@class FBPageCTAGetQuoteSharedHeaderView, NSMutableArray, UILabel, NSArray, NSString;

@interface FBPageCTAGetQuoteQuestionsView : UIView <FBPageCTAGetQuoteSharedTextInputViewDelegate> {

	FBPageCTAGetQuoteSharedHeaderView* _headerView;
	NSMutableArray* _questionsInputViews;
	UILabel* _addQuestionLabel;
	id<FBPageCTAGetQuoteQuestionsViewDelegate> _delegate;
	id<FBPageCTAGetQuoteSharedTextInputViewResizeDelegate> _resizeDelegate;

}

@property (nonatomic,copy,readonly) NSArray * questions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setUpQuestionInputView:(id)arg1 ;
-(void)_setUpAddQuestionLabel;
-(void)_hideAddQuestionLabel;
-(void)_didTapAddQuestionLabel;
-(void)_addQuestion:(id)arg1 ;
-(id)_getQuoteQuestionInputView:(id)arg1 ;
-(void)_questionsDidChanged;
-(void)_updateQuestionIndicator;
-(void)didTapRemoveButton:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 questionTypes:(id)arg2 currentQuestions:(id)arg3 questionInputResizeDelegate:(id)arg4 ;
-(void)showErrorAlertForQuestionInput;
-(NSArray *)questions;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
