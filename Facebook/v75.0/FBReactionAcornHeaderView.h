/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>
#import <Facebook/FBReactionAcornHeaderLocationPopOverViewControllerDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBLocationAccessManagerDelegate.h>

@protocol FBReactionAcornHeaderViewDelegate;
@class UILabel, FBNetworkImageView, FBRichTextView, FBReactionMinTapAreaButton, FBReactionContext, FBPopoverController, FBLocationAccessManager, NSString;

@interface FBReactionAcornHeaderView : UIControl <FBReactionAcornHeaderLocationPopOverViewControllerDelegate, FBPopoverControllerDelegate, FBLocationAccessManagerDelegate> {

	UILabel* _dateSummaryLabel;
	FBNetworkImageView* _weatherIcon;
	UILabel* _weatherIconMidDot;
	UILabel* _temperatureLabel;
	FBRichTextView* _locationLabel;
	UILabel* _locationLabelMidDot;
	FBNetworkImageView* _upsellImageView;
	FBReactionMinTapAreaButton* _locationIcon;
	FBReactionContext* _reactionContext;
	FBPopoverController* _popOverViewController;
	FBLocationAccessManager* _locationAccessManager;
	BOOL _shouldUpsellLhab;
	id<FBReactionAcornHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBReactionAcornHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(unsigned long long)getLabelStyle;
-(void)_locationIconTapped:(id)arg1 ;
-(id)newMidDotLabelwithColor:(id)arg1 ;
-(void)_weatherTapped:(id)arg1 ;
-(void)_acornHeaderTapped:(id)arg1 ;
-(CGRect)_frameForLabel:(id)arg1 withMinX:(double)arg2 rightInset:(double)arg3 headerSize:(CGSize)arg4 ;
-(void)userDidPerformInteraction:(id)arg1 inHeaderLocationViewController:(id)arg2 ;
-(void)userDidTurnOnLocationHistorywithLocationServiceOnInViewController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dateSummaryText:(id)arg2 dateSummaryTextLong:(id)arg3 imageDownloader:(id)arg4 locationText:(id)arg5 weatherIcon:(id)arg6 temperatureText:(id)arg7 reactionContext:(id)arg8 shouldUpsellLhab:(BOOL)arg9 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBReactionAcornHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBReactionAcornHeaderViewDelegate>)delegate;
@end
