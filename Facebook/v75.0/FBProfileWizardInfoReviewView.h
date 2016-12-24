/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBProfileWizardView.h>
#import <Facebook/FBCompleteProfileMegaphoneManagerDelegate.h>

@protocol FBProfileWizardInfoReviewViewDelegate;
@class UIActivityIndicatorView, FBCompleteProfileMegaphoneManager, FBContextualTimelineExpandoCell, NSString;

@interface FBProfileWizardInfoReviewView : FBProfileWizardView <FBCompleteProfileMegaphoneManagerDelegate> {

	UIActivityIndicatorView* _loadingView;
	FBCompleteProfileMegaphoneManager* _completeProfileMegaphoneManager;
	double _timelinephoneCellHeight;
	FBContextualTimelineExpandoCell* _timelinephoneCell;
	BOOL _titleAndSubtitleViewHasAnimated;
	BOOL _timelinephonecellHasAnimated;
	CGSize _titleAndSubtitleViewSize;
	BOOL _appearanceHasAnimated;
	id<FBProfileWizardInfoReviewViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfileWizardInfoReviewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWizardModel:(id)arg1 currentStepIndex:(unsigned long long)arg2 session:(id)arg3 ;
-(void)animatingAppearance;
-(void)animatingDisppearance;
-(void)_animatingTimelinephoneCellViewAppearance;
-(void)completeProfileMegaphoneWillAppear:(id)arg1 desiredAnimation:(long long)arg2 ;
-(void)completeProfileMegaphoneWillAdjustHeight:(id)arg1 desiredAnimation:(long long)arg2 ;
-(void)completeProfileMegaphoneWillDisappear:(id)arg1 desiredAnimation:(long long)arg2 ;
-(void)completeProfileMegaphone:(id)arg1 didOpenViewController:(id)arg2 ;
-(void)completeProfileMegaphone:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)_animatingTitleAndSubtitleViewDisappearance;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBProfileWizardInfoReviewViewDelegate>)arg1 ;
-(id<FBProfileWizardInfoReviewViewDelegate>)delegate;
-(double)_contentHeight;
@end
