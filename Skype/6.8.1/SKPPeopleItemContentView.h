//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, MKGlobalStylesheet, MKImageView, NSArray, NSAttributedString, NSLayoutConstraint, NSString, SKPAttributedLabel, UIImage, UIImageView;

@interface SKPPeopleItemContentView : UIView
{
    _Bool _showCheckmark;
    _Bool _selected;
    _Bool _highlighted;
    UIImageView *_presenceImageView;
    MKImageView *_imageView;
    SKPAttributedLabel *_titleLabel;
    SKPAttributedLabel *_detailLabel;
    UIImageView *_checkmarkImageView;
    UIImage *_selectedCheckmarkImage;
    UIImage *_normalCheckmarkImage;
    UIImage *_onlinePresenceImage;
    UIImage *_awayPresenceImage;
    UIImage *_busyPresenceImage;
    CALayer *_selectedImageOverlayLayer;
    long long _style;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_detailText;
    long long _presenceStatus;
    NSString *_highlightedTitleText;
    NSString *_highlightedDetailText;
    MKGlobalStylesheet *_stylesheet;
    NSArray *_showCheckmarkConstraints;
    NSArray *_hideCheckmarkConstraints;
    NSLayoutConstraint *_presenceImageViewConstraintX;
    NSLayoutConstraint *_presenceImageViewConstraintY;
    NSLayoutConstraint *_checkmarkImageViewConstraintX;
    NSLayoutConstraint *_checkmarkImageViewConstraintY;
    double _checkmarkDiameter;
    double _checkmarkPaddingWidth;
    double _checkmarkBorderWidth;
    double _presenceDiameter;
    double _presencePaddingWidth;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) double presencePaddingWidth; // @synthesize presencePaddingWidth=_presencePaddingWidth;
@property(nonatomic) double presenceDiameter; // @synthesize presenceDiameter=_presenceDiameter;
@property(nonatomic) double checkmarkBorderWidth; // @synthesize checkmarkBorderWidth=_checkmarkBorderWidth;
@property(nonatomic) double checkmarkPaddingWidth; // @synthesize checkmarkPaddingWidth=_checkmarkPaddingWidth;
@property(nonatomic) double checkmarkDiameter; // @synthesize checkmarkDiameter=_checkmarkDiameter;
@property(retain, nonatomic) NSLayoutConstraint *checkmarkImageViewConstraintY; // @synthesize checkmarkImageViewConstraintY=_checkmarkImageViewConstraintY;
@property(retain, nonatomic) NSLayoutConstraint *checkmarkImageViewConstraintX; // @synthesize checkmarkImageViewConstraintX=_checkmarkImageViewConstraintX;
@property(retain, nonatomic) NSLayoutConstraint *presenceImageViewConstraintY; // @synthesize presenceImageViewConstraintY=_presenceImageViewConstraintY;
@property(retain, nonatomic) NSLayoutConstraint *presenceImageViewConstraintX; // @synthesize presenceImageViewConstraintX=_presenceImageViewConstraintX;
@property(retain, nonatomic) NSArray *hideCheckmarkConstraints; // @synthesize hideCheckmarkConstraints=_hideCheckmarkConstraints;
@property(retain, nonatomic) NSArray *showCheckmarkConstraints; // @synthesize showCheckmarkConstraints=_showCheckmarkConstraints;
@property(retain, nonatomic) MKGlobalStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) NSString *highlightedDetailText; // @synthesize highlightedDetailText=_highlightedDetailText;
@property(retain, nonatomic) NSString *highlightedTitleText; // @synthesize highlightedTitleText=_highlightedTitleText;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) long long presenceStatus; // @synthesize presenceStatus=_presenceStatus;
@property(retain, nonatomic) NSAttributedString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)showHighlightedState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showHighlightedState:(_Bool)arg1 onLabel:(id)arg2 animated:(_Bool)arg3;
- (void)showHighlightedState:(_Bool)arg1 onAttributedTextOfLabel:(id)arg2;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePresenceImage;
- (void)updateCheckmarkImage;
- (void)setBackgroundColor:(id)arg1;
- (void)updateSelectionState;
- (void)updateDetail;
- (void)updateTitle;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)updateImages;
- (void)updateMetrics;
- (void)updateStyleProperties;
@property(readonly, nonatomic) UIImage *awayPresenceImage; // @synthesize awayPresenceImage=_awayPresenceImage;
@property(readonly, nonatomic) UIImage *busyPresenceImage; // @synthesize busyPresenceImage=_busyPresenceImage;
@property(readonly, nonatomic) UIImage *onlinePresenceImage; // @synthesize onlinePresenceImage=_onlinePresenceImage;
@property(readonly, nonatomic) UIImage *selectedCheckmarkImage; // @synthesize selectedCheckmarkImage=_selectedCheckmarkImage;
@property(readonly, nonatomic) UIImage *normalCheckmarkImage; // @synthesize normalCheckmarkImage=_normalCheckmarkImage;
@property(readonly, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(readonly, nonatomic) SKPAttributedLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) SKPAttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *presenceImageView; // @synthesize presenceImageView=_presenceImageView;
@property(readonly, nonatomic) MKImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) CALayer *selectedImageOverlayLayer; // @synthesize selectedImageOverlayLayer=_selectedImageOverlayLayer;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
