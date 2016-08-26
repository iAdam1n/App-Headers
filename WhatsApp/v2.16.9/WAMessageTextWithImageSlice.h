/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageContainerSlice.h>

@class NSTextStorage, NSTextContainer, NSLayoutManager;

@interface WAMessageTextWithImageSlice : WAMessageContainerSlice {

	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;
	NSLayoutManager* _layoutManager;
	CGRect _textRect;
	BOOL _isTextRTL;
	BOOL _centersTextVertically;
	BOOL _hasThumbnail;
	BOOL _shouldExtendThumbnailToBottomEdge;
	double _leadingEdgeIndent;

}

@property (nonatomic,readonly) BOOL hasThumbnail;                                   //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (nonatomic,readonly) BOOL shouldExtendThumbnailToBottomEdge;              //@synthesize shouldExtendThumbnailToBottomEdge=_shouldExtendThumbnailToBottomEdge - In the implementation block
@property (nonatomic,readonly) double leadingEdgeIndent;                            //@synthesize leadingEdgeIndent=_leadingEdgeIndent - In the implementation block
+(double)leadingEdgeIndentWithMetrics:(SCD_Struct_WA61)arg1 ;
+(long long)minimumNumberOfLines;
+(long long)maximumNumberOfLines;
+(double)thumbnailHeight;
-(void)drawInCurrentContext;
-(id)initWithMessage:(id)arg1 metrics:(SCD_Struct_WA61)arg2 ;
-(void)internalFitToWidth:(double)arg1 ;
-(BOOL)shouldExtendThumbnailToBottomEdge;
-(void)prepareWithMessage:(id)arg1 ;
-(id)secondaryAttributedTextWithMessage:(id)arg1 ;
-(BOOL)hasThumbnailForMessage:(id)arg1 ;
-(id)attributedTextWithMessage:(id)arg1 isTextRTL:(BOOL*)arg2 ;
-(double)leadingEdgeIndent;
-(BOOL)hasThumbnail;
@end
