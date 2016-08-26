/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class MNMessageCellLayoutInjector, NSString;

@interface MNMessageCellLayout : NSObject <FBClassInjectable, FBViewerContextClassProvidable> {

	MNMessageCellLayoutInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(MNTypingCellLayoutSpec)layoutSpecForTypingCellWithPreviousIsSameMessageGroup:(BOOL)arg1 ;
-(id)layoutElementsForMessageRow:(id)arg1 viewportSize:(CGSize)arg2 ;
-(id)layoutSpecForMessageRow:(id)arg1 viewportSize:(CGSize)arg2 ;
-(CGRect)rectForComposingStickerWithSize:(CGSize)arg1 viewportSize:(CGSize)arg2 shouldShowWideGutter:(BOOL)arg3 ;
-(double)heightForComposingStickerWithHeight:(double)arg1 ;
-(id)_getAudioMessageBubbleSizesForMessageRow:(id)arg1 bubbleContentInsets:(UIEdgeInsets)arg2 maxWidth:(double)arg3 ;
-(id)_getStickerBubbleSizesForMessageRow:(id)arg1 ;
-(id)_getTextHybridBubbleSizesForMessageRow:(id)arg1 bubbleContentInsets:(UIEdgeInsets)arg2 maxSize:(CGSize)arg3 ;
-(CGSize)_textSizeForMessageCoreViewModel:(id)arg1 maxWidth:(double)arg2 ;
-(CGSize)_photoSizeForMessageRow:(id)arg1 maxSize:(CGSize)arg2 ;
-(CGSize)_fileAttachmentsSizeForMessageRow:(id)arg1 maxWidth:(double)arg2 ;
-(CGSize)_videoSizeForMessageRow:(id)arg1 maxSize:(CGSize)arg2 ;
-(CGSize)_attachmentSizeForMessageRow:(id)arg1 maxSize:(CGSize)arg2 ;
-(CGSize)_attributionSizeForMessageRow:(id)arg1 maxWidth:(double)arg2 ;
-(CGSize)_stickerSizeForSticker:(id)arg1 messageRow:(id)arg2 ;
-(CGSize)_audioSizeForMessageRow:(id)arg1 maxAudioWidth:(double)arg2 ;
-(CGSize)_textSizeForCoreTextLayoutConfig:(id)arg1 ;
-(CGSize)_cachedTextSizeForCoreTextLayoutConfig:(id)arg1 ;
-(CGSize)_compositeAttachmentSizeForMessageRow:(id)arg1 maxSize:(CGSize)arg2 attachmentViewClass:(Class)arg3 ;
-(CGRect)_layoutStickerFrameForStickerSize:(CGSize)arg1 tableWidth:(double)arg2 alignRight:(BOOL)arg3 verticalOffset:(double)arg4 bottomAlignWithProfilePic:(BOOL)arg5 rowHeight:(double)arg6 shouldShowWideGutter:(BOOL)arg7 ;
-(void)dealloc;
@end
