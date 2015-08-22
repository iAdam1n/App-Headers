/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNDirectMessageEntry;
#import <Twitter/Twitter-Structs.h>
@class TFNAttributedTextModel, TFNLayoutMetrics, TFNTwitterAccount;

@interface T1DirectMessageEntryMetricsComputation : NSObject {

	unsigned long long _mediaLayoutStyle;
	double _maxWidth;
	double _maxTextWidth;
	id<TFNDirectMessageEntry> _messageEntry;
	TFNAttributedTextModel* _textModel;
	TFNAttributedTextModel* _interstitialTextModel;
	TFNLayoutMetrics* _layoutMetrics;
	TFNTwitterAccount* _account;
	CGSize _avatarSize;
	CGSize _bubbleSize;
	CGSize _mediaBorderSize;
	CGSize _mediaActivitySize;
	CGSize _mediaSize;
	CGSize _textSize;
	CGSize _statusViewSize;
	CGSize _interstitialMediaSize;
	CGSize _interstitialMediaBorderSize;
	CGSize _interstitialBubbleSize;
	CGSize _interstitialTextSize;

}

@property (assign,nonatomic) unsigned long long mediaLayoutStyle;                         //@synthesize mediaLayoutStyle=_mediaLayoutStyle - In the implementation block
@property (assign,nonatomic) CGSize avatarSize;                                           //@synthesize avatarSize=_avatarSize - In the implementation block
@property (assign,nonatomic) CGSize bubbleSize;                                           //@synthesize bubbleSize=_bubbleSize - In the implementation block
@property (assign,nonatomic) CGSize mediaBorderSize;                                      //@synthesize mediaBorderSize=_mediaBorderSize - In the implementation block
@property (assign,nonatomic) CGSize mediaActivitySize;                                    //@synthesize mediaActivitySize=_mediaActivitySize - In the implementation block
@property (assign,nonatomic) CGSize mediaSize;                                            //@synthesize mediaSize=_mediaSize - In the implementation block
@property (assign,nonatomic) CGSize textSize;                                             //@synthesize textSize=_textSize - In the implementation block
@property (assign,nonatomic) CGSize statusViewSize;                                       //@synthesize statusViewSize=_statusViewSize - In the implementation block
@property (assign,nonatomic) CGSize interstitialMediaSize;                                //@synthesize interstitialMediaSize=_interstitialMediaSize - In the implementation block
@property (assign,nonatomic) CGSize interstitialMediaBorderSize;                          //@synthesize interstitialMediaBorderSize=_interstitialMediaBorderSize - In the implementation block
@property (assign,nonatomic) CGSize interstitialBubbleSize;                               //@synthesize interstitialBubbleSize=_interstitialBubbleSize - In the implementation block
@property (assign,nonatomic) CGSize interstitialTextSize;                                 //@synthesize interstitialTextSize=_interstitialTextSize - In the implementation block
@property (assign,nonatomic) double maxWidth;                                             //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) double maxTextWidth;                                         //@synthesize maxTextWidth=_maxTextWidth - In the implementation block
@property (nonatomic,retain) id<TFNDirectMessageEntry> messageEntry;                      //@synthesize messageEntry=_messageEntry - In the implementation block
@property (nonatomic,retain) TFNAttributedTextModel * textModel;                          //@synthesize textModel=_textModel - In the implementation block
@property (nonatomic,retain) TFNAttributedTextModel * interstitialTextModel;              //@synthesize interstitialTextModel=_interstitialTextModel - In the implementation block
@property (nonatomic,retain) TFNLayoutMetrics * layoutMetrics;                            //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                 //@synthesize account=_account - In the implementation block
+(id)entryMetricsComputationWithMessageEntry:(id)arg1 textModel:(id)arg2 interstitialTextModel:(id)arg3 layoutMetrics:(id)arg4 account:(id)arg5 ;
+(double)_maxWidthWithLayoutMetrics:(id)arg1 ;
+(CGSize)_textSizeWithTextModel:(id)arg1 maxWidth:(double)arg2 ;
+(unsigned long long)_mediaLayoutStyleWithMessageEntry:(id)arg1 maxWidth:(double)arg2 textSize:(CGSize)arg3 ;
+(double)_maxTextWidthForContentWidth:(double)arg1 ;
-(CGSize)avatarSize;
-(void)setAvatarSize:(CGSize)arg1 ;
-(void)setTextModel:(TFNAttributedTextModel *)arg1 ;
-(TFNAttributedTextModel *)textModel;
-(void)setMediaSize:(CGSize)arg1 ;
-(id<TFNDirectMessageEntry>)messageEntry;
-(CGSize)bubbleSize;
-(CGSize)mediaSize;
-(void)computeMetrics;
-(unsigned long long)mediaLayoutStyle;
-(CGSize)interstitialBubbleSize;
-(CGSize)statusViewSize;
-(CGSize)mediaActivitySize;
-(CGSize)mediaBorderSize;
-(CGSize)interstitialMediaSize;
-(CGSize)interstitialMediaBorderSize;
-(CGSize)interstitialTextSize;
-(void)setBubbleSize:(CGSize)arg1 ;
-(void)setStatusViewSize:(CGSize)arg1 ;
-(CGSize)preferredImageSizeWithPreviewSize:(CGSize)arg1 ;
-(CGSize)interstitialSizeWithMediaSize:(CGSize)arg1 ;
-(void)setInterstitialMediaSize:(CGSize)arg1 ;
-(void)setInterstitialTextSize:(CGSize)arg1 ;
-(void)setInterstitialMediaBorderSize:(CGSize)arg1 ;
-(CGSize)bubbleSizeWithTextSize:(CGSize)arg1 mediaSize:(CGSize)arg2 ;
-(void)setInterstitialBubbleSize:(CGSize)arg1 ;
-(void)setMediaBorderSize:(CGSize)arg1 ;
-(void)setMediaActivitySize:(CGSize)arg1 ;
-(CGSize)scaledPreviewImageSize:(CGSize)arg1 ;
-(CGSize)maxPreviewImageSize:(CGSize)arg1 ;
-(id)initWithEntry:(id)arg1 maxWidth:(double)arg2 textModel:(id)arg3 interstitialTextModel:(id)arg4 textSize:(CGSize)arg5 layoutMetrics:(id)arg6 account:(id)arg7 ;
-(void)setMaxTextWidth:(double)arg1 ;
-(CGSize)avatarSizeWithLayoutMetrics:(id)arg1 ;
-(TFNAttributedTextModel *)interstitialTextModel;
-(CGSize)statusSizeWithStatus:(id)arg1 layoutMetrics:(id)arg2 account:(id)arg3 ;
-(void)setMediaLayoutStyle:(unsigned long long)arg1 ;
-(void)setTextSize:(CGSize)arg1 ;
-(void)setMessageEntry:(id<TFNDirectMessageEntry>)arg1 ;
-(void)setInterstitialTextModel:(TFNAttributedTextModel *)arg1 ;
-(CGSize)textSize;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(double)maxTextWidth;
-(void)setLayoutMetrics:(TFNLayoutMetrics *)arg1 ;
-(TFNLayoutMetrics *)layoutMetrics;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
@end
