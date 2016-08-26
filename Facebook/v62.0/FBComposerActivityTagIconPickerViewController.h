/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComposerActivityTagIconPickerCollectionViewControllerDelegate.h>
#import <Facebook/FBDismissalConfirmationViewControllerProtocol.h>

@protocol FBComposerActivityTagIconPickerViewControllerDelegate;
@class UIView, FBTaggableActivityIconPickerIndicatorView, FBComposerExpressionPickerMoodSelectionView, FBComposerActivityTagIconPickerCollectionViewController, UICollectionView, FBUserSession, FBGradientView, FBTaggableActivityComposition, NSString;

@interface FBComposerActivityTagIconPickerViewController : UIViewController <FBComposerActivityTagIconPickerCollectionViewControllerDelegate, FBDismissalConfirmationViewControllerProtocol> {

	UIView* _activityIndicatorBottomBorder;
	FBTaggableActivityIconPickerIndicatorView* _activityIndicatorView;
	unsigned long long _activitySelectionStyle;
	FBComposerExpressionPickerMoodSelectionView* _filledInSelectionActivityIndicatorView;
	FBComposerActivityTagIconPickerCollectionViewController* _iconPickerCollectionVC;
	UICollectionView* _iconPickerCollectionView;
	unsigned long long _iconPickerType;
	FBUserSession* _session;
	FBGradientView* _shadowView;
	FBTaggableActivityComposition* _taggableActivityComposition;
	double _topContentHeight;
	id<FBComposerActivityTagIconPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerActivityTagIconPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(id)analyticsModule;
-(void)didTapBack:(id)arg1 ;
-(id)initWithComposition:(id)arg1 customIcons:(id)arg2 session:(id)arg3 type:(unsigned long long)arg4 activitySelectionStyle:(unsigned long long)arg5 withActivityIndicator:(BOOL)arg6 ;
-(id)initWithComposition:(id)arg1 customIcons:(id)arg2 session:(id)arg3 ;
-(void)didTapDone:(id)arg1 ;
-(void)setTopContentHeight:(double)arg1 ;
-(void)composerActivityTagIconPickerCollectionViewController:(id)arg1 didPickTaggableActivity:(id)arg2 ;
-(BOOL)shouldDismissViewController;
-(void)setDelegate:(id<FBComposerActivityTagIconPickerViewControllerDelegate>)arg1 ;
-(id<FBComposerActivityTagIconPickerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)didCancel:(id)arg1 ;
@end
