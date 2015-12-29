//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SKPDialpadButton;

@interface SKPDialpadNumericView : UIView
{
    _Bool _forLandscape;
    id <SKPDialpadNumericViewDelegate> _delegate;
    long long _buttonStyle;
    SKPDialpadButton *_dialpadButton1;
    SKPDialpadButton *_dialpadButton2;
    SKPDialpadButton *_dialpadButton3;
    SKPDialpadButton *_dialpadButton4;
    SKPDialpadButton *_dialpadButton5;
    SKPDialpadButton *_dialpadButton6;
    SKPDialpadButton *_dialpadButton7;
    SKPDialpadButton *_dialpadButton8;
    SKPDialpadButton *_dialpadButton9;
    SKPDialpadButton *_dialpadButtonStar;
    SKPDialpadButton *_dialpadButton0;
    SKPDialpadButton *_dialpadButtonHash;
}

+ (struct CGSize)maxSizeForLandscapeSupport:(_Bool)arg1;
+ (struct CGSize)sizeForLandscapeSupport:(_Bool)arg1;
@property(retain, nonatomic) SKPDialpadButton *dialpadButtonHash; // @synthesize dialpadButtonHash=_dialpadButtonHash;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton0; // @synthesize dialpadButton0=_dialpadButton0;
@property(retain, nonatomic) SKPDialpadButton *dialpadButtonStar; // @synthesize dialpadButtonStar=_dialpadButtonStar;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton9; // @synthesize dialpadButton9=_dialpadButton9;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton8; // @synthesize dialpadButton8=_dialpadButton8;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton7; // @synthesize dialpadButton7=_dialpadButton7;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton6; // @synthesize dialpadButton6=_dialpadButton6;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton5; // @synthesize dialpadButton5=_dialpadButton5;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton4; // @synthesize dialpadButton4=_dialpadButton4;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton3; // @synthesize dialpadButton3=_dialpadButton3;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton2; // @synthesize dialpadButton2=_dialpadButton2;
@property(retain, nonatomic) SKPDialpadButton *dialpadButton1; // @synthesize dialpadButton1=_dialpadButton1;
@property(nonatomic, getter=isForLandscape) _Bool forLandscape; // @synthesize forLandscape=_forLandscape;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) __weak id <SKPDialpadNumericViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didButtonReleased:(id)arg1;
- (void)digitPressedForOneSecond:(id)arg1;
- (void)didButtonPressed:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)viewsConstraints;
- (id)dialpadButtonWithTitle:(id)arg1 headline:(id)arg2 dmtfTone:(long long)arg3 origin:(struct CGPoint)arg4 accessibility:(id)arg5;
- (void)addSeparatorLines;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(long long)arg2 forLandscapeSupport:(_Bool)arg3;

@end
