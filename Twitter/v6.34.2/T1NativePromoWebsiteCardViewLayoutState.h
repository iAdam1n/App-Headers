/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNTwitterCardContext, TFNLayoutMetrics;

@interface T1NativePromoWebsiteCardViewLayoutState : NSObject {

	BOOL _detailLabelHidden;
	BOOL _attributedTitleOverflowsCTAButton;
	TFNTwitterCardContext* _cardContext;
	TFNLayoutMetrics* _layoutMetrics;
	CGSize _size;
	CGRect _imageFrame;
	CGRect _imageHighlightFrame;
	CGRect _badgeImageFrame;
	CGRect _titleFrame;
	CGRect _detailTextFrame;
	CGRect _titleHighlightFrame;
	CGRect _callToActionFrame;
	CGRect _infoAndActionHighlightFrame;
	CGRect _backgroundBorderedFrame;

}

@property (nonatomic,retain) TFNTwitterCardContext * cardContext;                 //@synthesize cardContext=_cardContext - In the implementation block
@property (nonatomic,retain) TFNLayoutMetrics * layoutMetrics;                    //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) CGRect imageFrame;                                   //@synthesize imageFrame=_imageFrame - In the implementation block
@property (assign,nonatomic) CGRect imageHighlightFrame;                          //@synthesize imageHighlightFrame=_imageHighlightFrame - In the implementation block
@property (assign,nonatomic) CGRect badgeImageFrame;                              //@synthesize badgeImageFrame=_badgeImageFrame - In the implementation block
@property (assign,nonatomic) CGRect titleFrame;                                   //@synthesize titleFrame=_titleFrame - In the implementation block
@property (assign,nonatomic) CGRect detailTextFrame;                              //@synthesize detailTextFrame=_detailTextFrame - In the implementation block
@property (assign,nonatomic) CGRect titleHighlightFrame;                          //@synthesize titleHighlightFrame=_titleHighlightFrame - In the implementation block
@property (assign,nonatomic) CGRect callToActionFrame;                            //@synthesize callToActionFrame=_callToActionFrame - In the implementation block
@property (assign,nonatomic) CGRect infoAndActionHighlightFrame;                  //@synthesize infoAndActionHighlightFrame=_infoAndActionHighlightFrame - In the implementation block
@property (assign,nonatomic) CGRect backgroundBorderedFrame;                      //@synthesize backgroundBorderedFrame=_backgroundBorderedFrame - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL detailLabelHidden;                              //@synthesize detailLabelHidden=_detailLabelHidden - In the implementation block
@property (assign,nonatomic) BOOL attributedTitleOverflowsCTAButton;              //@synthesize attributedTitleOverflowsCTAButton=_attributedTitleOverflowsCTAButton - In the implementation block
-(TFNTwitterCardContext *)cardContext;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(CGRect)titleFrame;
-(CGRect)detailTextFrame;
-(CGRect)callToActionFrame;
-(void)setTitleFrame:(CGRect)arg1 ;
-(CGRect)titleHighlightFrame;
-(void)setTitleHighlightFrame:(CGRect)arg1 ;
-(void)setImageFrame:(CGRect)arg1 ;
-(CGRect)imageHighlightFrame;
-(void)setImageHighlightFrame:(CGRect)arg1 ;
-(void)setDetailTextFrame:(CGRect)arg1 ;
-(void)setCallToActionFrame:(CGRect)arg1 ;
-(CGRect)infoAndActionHighlightFrame;
-(void)setInfoAndActionHighlightFrame:(CGRect)arg1 ;
-(CGRect)badgeImageFrame;
-(void)setBadgeImageFrame:(CGRect)arg1 ;
-(CGRect)backgroundBorderedFrame;
-(void)setBackgroundBorderedFrame:(CGRect)arg1 ;
-(BOOL)detailLabelHidden;
-(void)setDetailLabelHidden:(BOOL)arg1 ;
-(BOOL)attributedTitleOverflowsCTAButton;
-(void)setAttributedTitleOverflowsCTAButton:(BOOL)arg1 ;
-(CGRect)imageFrame;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setLayoutMetrics:(TFNLayoutMetrics *)arg1 ;
-(TFNLayoutMetrics *)layoutMetrics;
@end

