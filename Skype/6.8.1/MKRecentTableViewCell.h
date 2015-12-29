//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTableViewCell.h"

@class MKPresenceStatusView, MKRecentTableViewCellStylesheet, NSArray, NSAttributedString, NSString, UILabel, UIView;

@interface MKRecentTableViewCell : MKTableViewCell
{
    _Bool _unread;
    _Bool _shouldShowOverlay;
    UILabel *_captionLabel;
    UIView *_renderView;
    NSString *_name;
    NSString *_timestamp;
    NSArray *_thumbnails;
    NSString *_captionIcon;
    UILabel *_timestampLabel;
    MKRecentTableViewCellStylesheet *_stylesheet;
    MKPresenceStatusView *_presenceStatusView;
    UIView *_presenceStatusWrapperView;
    UILabel *_nameLabel;
    UILabel *_captionIconLabel;
    UIView *_containerThumbnailsView;
    UIView *_containerRenderView;
    UIView *_avatarSelectionOverlay;
}

+ (double)heightForStyle:(long long)arg1;
+ (double)heightForModel:(id)arg1;
+ (Class)captionLabelClass;
@property(retain, nonatomic) UIView *avatarSelectionOverlay; // @synthesize avatarSelectionOverlay=_avatarSelectionOverlay;
@property(retain, nonatomic) UIView *containerRenderView; // @synthesize containerRenderView=_containerRenderView;
@property(retain, nonatomic) UIView *containerThumbnailsView; // @synthesize containerThumbnailsView=_containerThumbnailsView;
@property(retain, nonatomic) UILabel *captionIconLabel; // @synthesize captionIconLabel=_captionIconLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *presenceStatusWrapperView; // @synthesize presenceStatusWrapperView=_presenceStatusWrapperView;
@property(retain, nonatomic) MKPresenceStatusView *presenceStatusView; // @synthesize presenceStatusView=_presenceStatusView;
@property(retain, nonatomic) MKRecentTableViewCellStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(nonatomic) _Bool shouldShowOverlay; // @synthesize shouldShowOverlay=_shouldShowOverlay;
@property(retain, nonatomic) NSString *captionIcon; // @synthesize captionIcon=_captionIcon;
@property(retain, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool unread; // @synthesize unread=_unread;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
- (void).cxx_destruct;
- (id)mk_secondaryLabel;
- (id)mk_captionLabel;
- (id)mk_titleLabel;
- (_Bool)isAccessibilityElement;
- (void)updateThumbnailsGallery:(id)arg1;
@property(retain, nonatomic) NSAttributedString *attributedCaption;
- (void)setCaption:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (void)setShowPresenceStatus:(_Bool)arg1;
- (struct CGRect)frameAvatarView;
- (void)commonInitStyleRecent;
- (void)mk_commonInit;
- (id)initWithReuseIdentifier:(id)arg1;

@end
