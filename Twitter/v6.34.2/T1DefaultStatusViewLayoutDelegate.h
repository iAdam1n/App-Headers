/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1StatusViewLayoutDelegate.h>

@class NSString;

@interface T1DefaultStatusViewLayoutDelegate : NSObject <T1StatusViewLayoutDelegate> {

	unsigned long long _infoTextOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLayoutDelegate;
+(BOOL)_isMediaTypePhotoOrVideo:(unsigned long long)arg1 ;
+(BOOL)_shouldShowMediaTypeFirst:(unsigned long long)arg1 withMediaParameters:(id)arg2 ;
+(double)avatarMarginRight;
+(double)_photovideoMinSizeForAccount:(id)arg1 options:(unsigned long long)arg2 ;
-(CGSize)sizeForLayoutState:(id)arg1 ;
-(void)layoutSubviewsForLayoutableView:(id)arg1 ;
-(CGSize)layoutableView:(id)arg1 sizeThatFits:(CGSize)arg2 ;
-(unsigned long long)mediaForwardTypeForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(id)layoutStateForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4 withPreviousLayoutState:(id)arg5 ;
-(id)layoutStateForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 width:(double)arg4 contentEdgeInsets:(UIEdgeInsets)arg5 withPreviousLayoutState:(id)arg6 ;
-(BOOL)shouldShowDirectMessageInlineActionForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(BOOL)shouldShowInlineActionsForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(BOOL)layoutStateIsValidAfterStatusUpdate:(id)arg1 ;
-(unsigned long long)displayTextOptionsForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 mediaForwardType:(unsigned long long)arg4 ;
-(double)_layoutAuthorLine:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 mediaForwardType:(unsigned long long)arg5 maxX:(double)arg6 textX:(double)arg7 textY:(double)arg8 ;
-(id)authorViewLayoutStateForLayoutState:(id)arg1 ;
-(id)quotedStatusViewLayoutStateForLayoutState:(id)arg1 ;
-(id)nativeCardViewLayoutStateForLayoutState:(id)arg1 ;
-(CGSize)mediaForwardImageDownloadSizeForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(id)conversationConnectorImage;
-(BOOL)shouldShowAvatarForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(BOOL)shouldShowSocialTextForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(id)socialTextForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(BOOL)shouldShowInfoTextForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(id)infoTextForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 getBadgeImage:(out id*)arg4 ;
-(BOOL)shouldShowMediaTagsForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(BOOL)shouldShowAnalyticsInlineActionForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(id)primaryMediaTagsIcon;
-(BOOL)shouldShowMediaTagsAccountUserFirst;
-(BOOL)mediaTagsAreSingleLine;
-(BOOL)mediaTagsAreSummarized;
-(BOOL)mediaTagsSelectionEnabled;
-(BOOL)mediaTagsHighlightEnabled;
-(BOOL)shouldShowFollowControlForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(long long)followControlVariantForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(BOOL)shouldShowPromotedAccountForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(BOOL)shouldShowQuotedTweetForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 mediaForwardType:(unsigned long long)arg4 ;
-(BOOL)shouldShowInfoTextAboveInlineActions;
-(BOOL)shouldShowInfoTextBelowInlineActions;
-(BOOL)_layoutState:(id)arg1 isValidForStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 layoutMetrics:(id)arg5 ;
-(void)_performLayoutForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4 layoutState:(id)arg5 ;
-(BOOL)_layoutState:(id)arg1 isValidForStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 width:(double)arg5 contentEdgeInsets:(UIEdgeInsets)arg6 ;
-(void)_performLayoutForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 width:(double)arg4 contentEdgeInsets:(UIEdgeInsets)arg5 layoutState:(id)arg6 ;
-(double)_forwardCardHeightForStatus:(id)arg1 account:(id)arg2 ;
-(double)_layoutSocialText:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 maxX:(double)arg5 textX:(double)arg6 textY:(double)arg7 avatarFrame:(CGRect)arg8 ;
-(double)_layoutAuthorLine:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 mediaForwardType:(unsigned long long)arg5 layoutMetrics:(id)arg6 textY:(double)arg7 ;
-(double)_layoutMediaFirstAnatomy:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 mediaForwardType:(unsigned long long)arg5 layoutMetrics:(id)arg6 textX:(double)arg7 textMaxX:(double)arg8 textY:(double)arg9 ;
-(double)_layoutTextFirstAnatomy:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 mediaForwardType:(unsigned long long)arg5 layoutMetrics:(id)arg6 textY:(double)arg7 ;
-(double)_layoutPromotedAccount:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 maxX:(double)arg5 textX:(double)arg6 textY:(double)arg7 ;
-(double)_layoutInfoText:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 maxX:(double)arg5 avatarMaxX:(double)arg6 textX:(double)arg7 textY:(double)arg8 ;
-(double)_layoutInlineActions:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 maxX:(double)arg5 textX:(double)arg6 textY:(double)arg7 ;
-(double)_layoutMediaFirstAnatomy:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 mediaForwardType:(unsigned long long)arg5 maxX:(double)arg6 textX:(double)arg7 textY:(double)arg8 width:(double)arg9 contentEdgeInsets:(UIEdgeInsets)arg10 ;
-(double)_layoutTextFirstAnatomy:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 mediaForwardType:(unsigned long long)arg5 maxX:(double)arg6 textX:(double)arg7 textY:(double)arg8 width:(double)arg9 contentEdgeInsets:(UIEdgeInsets)arg10 ;
-(double)_layoutText:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 mediaForwardType:(unsigned long long)arg5 layoutMetrics:(id)arg6 textY:(double)arg7 ;
-(double)counteractLineHeightForLayoutState:(id)arg1 ;
-(double)_layoutQuotedStatusView:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 layoutMetrics:(id)arg5 textY:(double)arg6 topMargin:(double)arg7 ;
-(double)_layoutMediaForward:(id)arg1 type:(unsigned long long)arg2 forStatus:(id)arg3 options:(unsigned long long)arg4 account:(id)arg5 maxX:(double)arg6 textX:(double)arg7 textY:(double)arg8 topMargin:(double)arg9 width:(double)arg10 ;
-(double)_layoutMediaTags:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 maxX:(double)arg5 textX:(double)arg6 textY:(double)arg7 topMargin:(double)arg8 ;
-(double)_layoutText:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 mediaForwardType:(unsigned long long)arg5 maxX:(double)arg6 textX:(double)arg7 textY:(double)arg8 ;
-(double)_layoutQuotedStatusView:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 maxX:(double)arg5 textX:(double)arg6 textY:(double)arg7 topMargin:(double)arg8 ;
-(BOOL)_hasForwardCard:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 ;
-(BOOL)_isForwardCardConsistent:(id)arg1 account:(id)arg2 ;
-(BOOL)_isForwardCardEnabled:(unsigned long long)arg1 ;
-(BOOL)_shouldOmitMediaLinkForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 mediaForwardType:(unsigned long long)arg4 ;
-(id)socialTextFontForLayoutState:(id)arg1 ;
-(double)_layoutNativeCard:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 maxX:(double)arg5 textX:(double)arg6 textY:(double)arg7 ;
-(double)_layoutForwardCard:(id)arg1 forStatus:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 maxX:(double)arg5 textX:(double)arg6 textY:(double)arg7 ;
-(double)_layoutPhotoVideoForward:(id)arg1 type:(unsigned long long)arg2 forStatus:(id)arg3 options:(unsigned long long)arg4 account:(id)arg5 maxX:(double)arg6 textX:(double)arg7 textY:(double)arg8 width:(double)arg9 ;
-(double)_layoutBannerCardMediaForward:(id)arg1 forStatus:(id)arg2 maxX:(double)arg3 textX:(double)arg4 textY:(double)arg5 ;
-(double)_layoutBannerButtonCardMediaForward:(id)arg1 forStatus:(id)arg2 maxX:(double)arg3 textX:(double)arg4 textY:(double)arg5 ;
-(double)_layoutAppDownloadCardMediaForward:(id)arg1 forStatus:(id)arg2 maxX:(double)arg3 textX:(double)arg4 textY:(double)arg5 ;
-(BOOL)_nativeCardIsUnified:(id)arg1 account:(id)arg2 ;
@end

