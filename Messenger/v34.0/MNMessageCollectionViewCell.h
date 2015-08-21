/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol MNMessageCollectionViewCellDelegate, MNMessageCellLinkHandling, MNAuthenticationManager, MNPluginManager;
@class MNMessageRow, MNMessageTextDataDetector, MNAdaptiveImageDownloader, FBMStickerResourceManager, MNMessageCellLayoutSpec;

@interface MNMessageCollectionViewCell : UICollectionViewCell {

	BOOL _parentCollectionViewScrolling;
	BOOL _contextMenuDisplayed;
	MNMessageRow* _messageRow;
	id<MNMessageCollectionViewCellDelegate> _delegate;
	id<MNMessageCellLinkHandling> _messageCellLinkHandler;
	MNMessageTextDataDetector* _messageTextDataDetector;
	id<MNAuthenticationManager> _authManager;
	MNAdaptiveImageDownloader* _imageDownloader;
	FBMStickerResourceManager* _stickerResourceManager;
	MNMessageCellLayoutSpec* _layoutSpec;
	id<MNPluginManager> _pluginManager;

}

@property (assign,getter=isParentCollectionViewScrolling,nonatomic) BOOL parentCollectionViewScrolling;              //@synthesize parentCollectionViewScrolling=_parentCollectionViewScrolling - In the implementation block
@property (nonatomic,readonly) MNMessageRow * messageRow;                                                            //@synthesize messageRow=_messageRow - In the implementation block
@property (assign,nonatomic,__weak) id<MNMessageCollectionViewCellDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNMessageCellLinkHandling> messageCellLinkHandler;                            //@synthesize messageCellLinkHandler=_messageCellLinkHandler - In the implementation block
@property (nonatomic,retain) MNMessageTextDataDetector * messageTextDataDetector;                                    //@synthesize messageTextDataDetector=_messageTextDataDetector - In the implementation block
@property (nonatomic,retain) id<MNAuthenticationManager> authManager;                                                //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,retain) MNAdaptiveImageDownloader * imageDownloader;                                            //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) FBMStickerResourceManager * stickerResourceManager;                                     //@synthesize stickerResourceManager=_stickerResourceManager - In the implementation block
@property (nonatomic,copy) MNMessageCellLayoutSpec * layoutSpec;                                                     //@synthesize layoutSpec=_layoutSpec - In the implementation block
@property (nonatomic,retain) id<MNPluginManager> pluginManager;                                                      //@synthesize pluginManager=_pluginManager - In the implementation block
@property (assign,nonatomic) BOOL contextMenuDisplayed;                                                              //@synthesize contextMenuDisplayed=_contextMenuDisplayed - In the implementation block
-(MNAdaptiveImageDownloader *)imageDownloader;
-(void)setImageDownloader:(MNAdaptiveImageDownloader *)arg1 ;
-(id<MNAuthenticationManager>)authManager;
-(void)setAuthManager:(id<MNAuthenticationManager>)arg1 ;
-(void)setStickerResourceManager:(FBMStickerResourceManager *)arg1 ;
-(FBMStickerResourceManager *)stickerResourceManager;
-(void)didDisappear;
-(void)setMessageRow:(MNMessageRow *)arg1 ;
-(MNMessageRow *)messageRow;
-(void)setMessageRow:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLayoutSpec:(MNMessageCellLayoutSpec *)arg1 ;
-(MNMessageCellLayoutSpec *)layoutSpec;
-(void)_menuDidHide:(id)arg1 ;
-(void)doMessageContentInit;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 messageTextDataDetector:(id)arg3 stickerResourceManager:(id)arg4 pluginManager:(id)arg5 ;
-(void)applyLayoutSpec:(id)arg1 ;
-(void)prepareForReuseForContent;
-(BOOL)shouldHighlight;
-(void)updateAsHighlighted:(BOOL)arg1 ;
-(void)hideContextMenuAnimated:(BOOL)arg1 ;
-(void)updateHighlightState;
-(void)updateParentCollectionViewScrolling;
-(void)_contextMenuRetryTapped:(id)arg1 ;
-(void)_contextMenuForwardTapped:(id)arg1 ;
-(void)_contextMenuReportTapped:(id)arg1 ;
-(void)_contextMenuHideTapped:(id)arg1 ;
-(void)addContextMenuItemsTo:(id)arg1 ;
-(id)contextMenuItems;
-(void)setContextMenuDisplayed:(BOOL)arg1 ;
-(BOOL)contextMenuDisplayed;
-(BOOL)_canDeleteMessage;
-(BOOL)_canCopyMessage;
-(BOOL)_canRetryMessage;
-(BOOL)_shouldShowContextualMenuForwardButton;
-(BOOL)_canReportMessage;
-(BOOL)_canHideMessage;
-(void)_deleteMessage;
-(void)_copyMessage;
-(void)_forwardMessageFromButton:(unsigned long long)arg1 ;
-(void)setLayoutSpec:(id)arg1 animated:(BOOL)arg2 ;
-(void)willAppear;
-(void)setParentCollectionViewScrolling:(BOOL)arg1 ;
-(void)showContextMenuAnimated:(BOOL)arg1 ;
-(BOOL)isParentCollectionViewScrolling;
-(id<MNMessageCellLinkHandling>)messageCellLinkHandler;
-(void)setMessageCellLinkHandler:(id<MNMessageCellLinkHandling>)arg1 ;
-(MNMessageTextDataDetector *)messageTextDataDetector;
-(void)setMessageTextDataDetector:(MNMessageTextDataDetector *)arg1 ;
-(id<MNPluginManager>)pluginManager;
-(void)setPluginManager:(id<MNPluginManager>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNMessageCollectionViewCellDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(id<MNMessageCollectionViewCellDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)accessibilityIdentifier;
-(BOOL)canBecomeFirstResponder;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(BOOL)canResignFirstResponder;
-(void)copy:(id)arg1 ;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(void)delete:(id)arg1 ;
@end

