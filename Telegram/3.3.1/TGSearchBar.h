//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSArray, NSString, NSTimer, TGModernButton, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UISegmentedControl, UITextField;

@interface TGSearchBar : UIView <UITextFieldDelegate>
{
    double _cancelButtonWidth;
    _Bool _showsScopeBar;
    _Bool _searchBarShouldShowScopeControl;
    _Bool _alwaysExtended;
    _Bool _hidesCancelButton;
    _Bool _showActivity;
    _Bool _delayActivity;
    _Bool _showsCustomCancelButton;
    int _style;
    int _customCurrentScope;
    id <TGSearchBarDelegate> _delegate;
    UIImageView *_customBackgroundView;
    UIImageView *_customActiveBackgroundView;
    NSArray *_customScopeButtonTitles;
    NSString *_placeholder;
    UIView *_wrappingClip;
    UIView *_wrappingView;
    UIImageView *_textFieldBackground;
    UITextField *_customTextField;
    UIImage *_normalTextFieldBackgroundImage;
    UIImage *_activeTextFieldBackgroundImage;
    TGModernButton *_customCancelButton;
    UILabel *_placeholderLabel;
    UIImageView *_customSearchIcon;
    UIActivityIndicatorView *_customSearchActivityIndicator;
    NSTimer *_searchActivityTimer;
    UIButton *_customClearButton;
    UIView *_customScopeButtonContainer;
    UISegmentedControl *_customSegmentedControl;
}

+ (double)searchBarScopeHeight;
+ (double)searchBarBaseHeight;
@property(nonatomic) int customCurrentScope; // @synthesize customCurrentScope=_customCurrentScope;
@property(retain, nonatomic) UISegmentedControl *customSegmentedControl; // @synthesize customSegmentedControl=_customSegmentedControl;
@property(retain, nonatomic) UIView *customScopeButtonContainer; // @synthesize customScopeButtonContainer=_customScopeButtonContainer;
@property(retain, nonatomic) UIButton *customClearButton; // @synthesize customClearButton=_customClearButton;
@property(retain, nonatomic) NSTimer *searchActivityTimer; // @synthesize searchActivityTimer=_searchActivityTimer;
@property(retain, nonatomic) UIActivityIndicatorView *customSearchActivityIndicator; // @synthesize customSearchActivityIndicator=_customSearchActivityIndicator;
@property(retain, nonatomic) UIImageView *customSearchIcon; // @synthesize customSearchIcon=_customSearchIcon;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic) _Bool showsCustomCancelButton; // @synthesize showsCustomCancelButton=_showsCustomCancelButton;
@property(retain, nonatomic) TGModernButton *customCancelButton; // @synthesize customCancelButton=_customCancelButton;
@property(retain, nonatomic) UIImage *activeTextFieldBackgroundImage; // @synthesize activeTextFieldBackgroundImage=_activeTextFieldBackgroundImage;
@property(retain, nonatomic) UIImage *normalTextFieldBackgroundImage; // @synthesize normalTextFieldBackgroundImage=_normalTextFieldBackgroundImage;
@property(retain, nonatomic) UITextField *customTextField; // @synthesize customTextField=_customTextField;
@property(retain, nonatomic) UIImageView *textFieldBackground; // @synthesize textFieldBackground=_textFieldBackground;
@property(retain, nonatomic) UIView *wrappingView; // @synthesize wrappingView=_wrappingView;
@property(retain, nonatomic) UIView *wrappingClip; // @synthesize wrappingClip=_wrappingClip;
@property(nonatomic) _Bool delayActivity; // @synthesize delayActivity=_delayActivity;
@property(nonatomic) _Bool showActivity; // @synthesize showActivity=_showActivity;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool hidesCancelButton; // @synthesize hidesCancelButton=_hidesCancelButton;
@property(nonatomic) _Bool alwaysExtended; // @synthesize alwaysExtended=_alwaysExtended;
@property(nonatomic) _Bool searchBarShouldShowScopeControl; // @synthesize searchBarShouldShowScopeControl=_searchBarShouldShowScopeControl;
@property(nonatomic) _Bool showsScopeBar; // @synthesize showsScopeBar=_showsScopeBar;
@property(retain, nonatomic) NSArray *customScopeButtonTitles; // @synthesize customScopeButtonTitles=_customScopeButtonTitles;
@property(retain, nonatomic) UIImageView *customActiveBackgroundView; // @synthesize customActiveBackgroundView=_customActiveBackgroundView;
@property(retain, nonatomic) UIImageView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(nonatomic) __weak id <TGSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchActivityTimerEvent;
- (void)localizationUpdated;
- (void)updateClipping:(double)arg1;
- (void)segmentedControlChanged;
@property(retain, nonatomic) NSString *text;
@property(nonatomic) long long selectedScopeButtonIndex;
- (void)customClearButtonPressed;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)updatePlaceholder:(id)arg1;
- (void)backgroundTapGesture:(id)arg1;
- (void)searchCancelButtonPressed;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)tappedSearchBar:(id)arg1;
- (_Bool)landscapeMode;
- (void)layoutSubviews;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowsCancelButton:(_Bool)arg1;
- (_Bool)showsCancelButton;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)topPadding;
- (double)inputHeight;
- (double)searchIconOffset;
- (double)inputContentOffset;
- (double)baseHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
