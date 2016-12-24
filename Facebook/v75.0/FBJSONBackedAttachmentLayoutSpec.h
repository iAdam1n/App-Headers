/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAttachmentCoverLayoutSpec.h>

@class NSDictionary, UIColor, FBLinkCoverTextDescriptor, FBLinkCoverElementDescriptor, NSArray, UIImage;

@interface FBJSONBackedAttachmentLayoutSpec : FBAttachmentCoverLayoutSpec {

	NSDictionary* _specDictionary;
	FBAttachmentCoverLayoutSpecMetrics* _metrics;
	UIColor* _borderColor;
	UIColor* _backgroundColor;
	BOOL _hasCoverImage;
	BOOL _showCoverBorder;
	BOOL _shouldShowBottomGradient;
	BOOL _shouldShowTopGradient;
	FBLinkCoverTextDescriptor* _headlineDescriptor;
	FBLinkCoverTextDescriptor* _descriptionDescriptor;
	FBLinkCoverElementDescriptor* _sourceImageDescriptor;
	FBLinkCoverElementDescriptor* _coverImageDescriptor;
	FBLinkCoverElementDescriptor* _coverVideoDescriptor;
	FBLinkCoverElementDescriptor* _overlayDescriptor;
	FBLinkCoverElementDescriptor* _bylineAreaDescriptor;
	NSArray* _bars;
	NSDictionary* _elements;
	BOOL _shouldShowMiniDescription;
	FBLinkCoverTextDescriptor* _bylineDescriptor;
	FBLinkCoverPositionDescriptor _bylinePosition;
	UIColor* _bylineTextColor;
	int _barStyle;
	FBLinkCoverPositionDescriptor _barPosition;
	UIColor* _barColor;
	FBLinkCoverPositionDescriptor _overlayPosition;
	UIImage* _overlayImage;

}
-(id)initWithSpecDictionary:(id)arg1 metrics:(FBAttachmentCoverLayoutSpecMetrics*)arg2 ;
-(CGRect)coverImageFrame;
-(CGRect)sourceImageFrame;
-(FBTextMetrics*)maxBylineTextMetrics;
-(CGRect)maxMaxBylineFrame;
-(FBTextMetrics*)maxHeadlineTextMetrics;
-(CGSize)maxHeadlineConstrainedSize;
-(CGRect)maxMaxHeadlineFrame;
-(FBTextMetrics*)maxDescriptionTextMetrics;
-(CGSize)maxDescriptionConstrainedSize;
-(CGRect)maxMaxDescriptionFrame;
-(BOOL)shouldShowBottomGradient;
-(CGRect)bottomGradientFrame;
-(BOOL)shouldShowTopGradient;
-(CGRect)topGradientFrame;
-(CGRect)barFrameForBar:(long long)arg1 ;
-(id)barColorForBar:(long long)arg1 ;
-(BOOL)shouldShowCoverBorder;
-(CGRect)coverBorderFrame;
-(CGRect)overlayFrame;
-(CGSize)coverImageSize;
-(CGRect)coverVideoFrame;
-(CGRect)minMinHeadlineFrame;
-(CGRect)minMaxHeadlineFrame;
-(CGRect)maxMinHeadlineFrame;
-(CGRect)minMinDescriptionFrame;
-(CGRect)minMaxDescriptionFrame;
-(CGRect)maxMinDescriptionFrame;
-(CGRect)minMinBylineFrame;
-(CGRect)minMaxBylineFrame;
-(CGRect)maxMinBylineFrame;
-(BOOL)shouldShowMiniDescription;
-(CGRect)bylineAreaFrame;
-(CGRect)_positioningRectForElement:(id)arg1 max:(BOOL)arg2 ;
-(CGRect)_rectForElement:(id)arg1 size:(CGSize)arg2 max:(BOOL)arg3 ;
-(FBTextMetrics*)minHeadlineTextMetrics;
-(long long)headlineTextAlignment;
-(FBTextMetrics*)minDescriptionTextMetrics;
-(FBTextMetrics*)minBylineTextMetrics;
-(CGSize)minDescriptionConstrainedSize;
-(CGSize)minBylineConstrainedSize;
-(CGSize)maxBylineConstrainedSize;
-(CGSize)minHeadlineConstrainedSize;
-(BOOL)hasCoverImage;
-(CGSize)coverVideoSize;
-(BOOL)hasCoverVideo;
-(id)backgroundColor;
-(id)borderColor;
-(FBAttachmentCoverLayoutSpecMetrics*)metrics;
-(id)overlayImage;
-(long long)numberOfBars;
@end
