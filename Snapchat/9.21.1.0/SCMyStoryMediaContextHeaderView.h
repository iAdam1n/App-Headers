//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCExpandedButton, SCScrollUpAffordanceView, UIActivityIndicatorView, UIImage, UILabel;

@interface SCMyStoryMediaContextHeaderView : UIView
{
    SCExpandedButton *_saveButton;
    SCExpandedButton *_deleteButton;
    UIActivityIndicatorView *_loadingSpinner;
    id <SCMyStoryMediaContextHeaderViewDelegate> _delegate;
    UILabel *_screenshotCountLabel;
    UILabel *_viewersCountLabel;
    SCExpandedButton *_affordanceButton;
    SCExpandedButton *_headerAreaButton;
    SCExpandedButton *_screenshottersButton;
    SCExpandedButton *_viewersButton;
    UIImage *_screenshotIconImageGreen;
    UIImage *_screenshotIconImage;
    SCScrollUpAffordanceView *_upwardAffordanceView;
    SCScrollUpAffordanceView *_downwardAffordanceView;
    long long _headerStyle;
    UIView *_gradientView;
    UIView *_backgroundView;
    UIView *_widgetsContainerview;
}

@property(retain, nonatomic) UIView *widgetsContainerview; // @synthesize widgetsContainerview=_widgetsContainerview;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(retain, nonatomic) SCScrollUpAffordanceView *downwardAffordanceView; // @synthesize downwardAffordanceView=_downwardAffordanceView;
@property(retain, nonatomic) SCScrollUpAffordanceView *upwardAffordanceView; // @synthesize upwardAffordanceView=_upwardAffordanceView;
@property(retain, nonatomic) UIImage *screenshotIconImage; // @synthesize screenshotIconImage=_screenshotIconImage;
@property(retain, nonatomic) UIImage *screenshotIconImageGreen; // @synthesize screenshotIconImageGreen=_screenshotIconImageGreen;
@property(retain, nonatomic) SCExpandedButton *viewersButton; // @synthesize viewersButton=_viewersButton;
@property(retain, nonatomic) SCExpandedButton *screenshottersButton; // @synthesize screenshottersButton=_screenshottersButton;
@property(retain, nonatomic) SCExpandedButton *headerAreaButton; // @synthesize headerAreaButton=_headerAreaButton;
@property(retain, nonatomic) SCExpandedButton *affordanceButton; // @synthesize affordanceButton=_affordanceButton;
@property(retain, nonatomic) UILabel *viewersCountLabel; // @synthesize viewersCountLabel=_viewersCountLabel;
@property(retain, nonatomic) UILabel *screenshotCountLabel; // @synthesize screenshotCountLabel=_screenshotCountLabel;
@property(nonatomic) __weak id <SCMyStoryMediaContextHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteButtonPressed:(id)arg1;
- (void)saveButtonPressed:(id)arg1;
- (void)screenshottersButtonPressed:(id)arg1;
- (void)viewersButtonPressed:(id)arg1;
- (void)headerAreaButtonPressed:(id)arg1;
- (void)affordanceButtonPressed:(id)arg1;
- (void)setDeleteButtonEnabled:(_Bool)arg1;
- (void)showSaveButton;
- (void)showSavingLoadingAnimation;
- (void)disableUpwardAffordanceView;
- (void)enableUpwardAffordanceView;
- (void)disableDownwardAffordanceView;
- (void)enableDownwardAffordanceView;
- (void)disableViewersInteraction;
- (void)enableViewersInteraction;
- (void)setScreenshotIconSelected:(_Bool)arg1;
- (void)updateGradientViewWithVisibility:(_Bool)arg1;
- (void)_setupSubviews;
- (id)init;

@end
