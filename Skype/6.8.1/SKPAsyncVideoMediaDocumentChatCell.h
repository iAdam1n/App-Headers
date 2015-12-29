//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPChatCell.h"

@class MKBubbleView, MKDefaultButton, SKPMediaDocumentStatusView, UIImageView, UILabel, UIView;

@interface SKPAsyncVideoMediaDocumentChatCell : SKPChatCell
{
    _Bool _downloadWasCanceled;
    unsigned long long _videoDownloadState;
    UIView *_thumbnailViewContainer;
    SKPMediaDocumentStatusView *_statusView;
    MKBubbleView *_bubbleView;
    UIImageView *_thumbnailImageView;
    MKDefaultButton *_playButton;
    MKDefaultButton *_videoMailButton;
    UIView *_protectionView;
    UILabel *_placeholderLabel;
    MKDefaultButton *_actionButton;
    long long _currentNetworkStatus;
    UILabel *_statusLabel;
    long long _currentState;
}

+ (struct CGSize)sizeForViewModel:(id)arg1 whenConstrainedToWidth:(double)arg2 traitCollection:(id)arg3;
+ (id)observedKeyPaths;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) long long currentNetworkStatus; // @synthesize currentNetworkStatus=_currentNetworkStatus;
@property(nonatomic) _Bool downloadWasCanceled; // @synthesize downloadWasCanceled=_downloadWasCanceled;
@property(retain, nonatomic) MKDefaultButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIView *protectionView; // @synthesize protectionView=_protectionView;
@property(retain, nonatomic) MKDefaultButton *videoMailButton; // @synthesize videoMailButton=_videoMailButton;
@property(retain, nonatomic) MKDefaultButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) MKBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) SKPMediaDocumentStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *thumbnailViewContainer; // @synthesize thumbnailViewContainer=_thumbnailViewContainer;
@property(nonatomic) unsigned long long videoDownloadState; // @synthesize videoDownloadState=_videoDownloadState;
- (void).cxx_destruct;
- (void)actionButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)contentAccessibilityHint;
- (id)contentAccessibilityValue;
- (id)contentAccessibilityString;
- (void)updateThumbnail:(_Bool)arg1;
- (id)placeholderImage;
- (void)updateVideoStatusView;
- (void)updateProgressBar:(double)arg1;
- (void)configureWithViewModel:(id)arg1;
- (_Bool)canPlayVideo;
- (void)showDownloadUI;
- (void)showPlayUI;
- (void)showPlayOrDownloadUI;
- (void)setViewModel:(id)arg1;
- (void)updateNetworkForVideoStatusView;
- (void)refreshDueToChangeInViewModelProperty:(id)arg1;
- (id)accessibilityStringFromStatusViewState:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
