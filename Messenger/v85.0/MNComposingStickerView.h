/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNMessagesViewComposing.h>

@protocol FBStickerResourceManager;
@class MNMessageCellLayout, FBMStickerView, UIView, UILabel, MNComposingLikeStickerAnimator, FBMDeliveryReceiptGating, FBMSticker, UIColor, NSString;

@interface MNComposingStickerView : UIView <FBClassProvidable, MNMessagesViewComposing> {

	id<FBStickerResourceManager> _stickerResourceManager;
	MNMessageCellLayout* _cellLayout;
	FBMStickerView* _stickerView;
	UIView* _wrapper;
	UIView* _emojiStickerWrapper;
	UILabel* _customLikeEmojiLabel;
	MNComposingLikeStickerAnimator* _animator;
	FBMDeliveryReceiptGating* _deliveryReceiptGating;
	BOOL _shouldShowWideGutter;
	FBMSticker* _sticker;
	UIColor* _stickerTintColor;
	NSString* _customLikeEmoji;

}

@property (assign,nonatomic) BOOL shouldShowWideGutter;              //@synthesize shouldShowWideGutter=_shouldShowWideGutter - In the implementation block
@property (nonatomic,retain) FBMSticker * sticker;                   //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,copy) UIColor * stickerTintColor;               //@synthesize stickerTintColor=_stickerTintColor - In the implementation block
@property (nonatomic,copy) NSString * customLikeEmoji;               //@synthesize customLikeEmoji=_customLikeEmoji - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMSticker *)sticker;
-(BOOL)shouldShowWideGutter;
-(void)setStickerTintColor:(UIColor *)arg1 ;
-(void)setShouldShowWideGutter:(BOOL)arg1 ;
-(double)initialViewHeightForComposingSticker;
-(double)finalViewHeightForComposingSticker;
-(void)setSticker:(FBMSticker *)arg1 ;
-(double)overshotViewHeightForSendingStickerType:(unsigned long long)arg1 ;
-(double)finalViewHeightForSendingStickerType:(unsigned long long)arg1 ;
-(void)setCustomLikeEmoji:(NSString *)arg1 ;
-(NSString *)customLikeEmoji;
-(void)beginAnimationWithConfig:(id)arg1 ;
-(void)endAnimation;
-(id)initWithStickerResourceManager:(id)arg1 messageCellLayout:(id)arg2 deliveryReceiptGating:(id)arg3 ;
-(double)initialUnpaddedViewHeightForComposingSticker;
-(double)likeHeight;
-(double)finalUnpaddedViewHeightForComposingSticker;
-(UIColor *)stickerTintColor;
-(void)reset;
@end

