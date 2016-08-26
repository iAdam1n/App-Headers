/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBUIConfigBuilder.h>

@class NSString, UIFont, UIColor, NSArray, UIView;

@interface FBMegaphoneViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleColor;
	unsigned long long _titleMaxNumberOfLines;
	NSString* _subtitle;
	UIFont* _subtitleFont;
	UIColor* _subtitleColor;
	unsigned long long _subtitleMaxNumberOfLines;
	NSArray* _segmentItems;
	UIFont* _segmentsTitleFont;
	UIColor* _segmentsTitleColor;
	long long _segmentSelectedIndex;
	UIFont* _segmentsHighlightedTitleFont;
	UIColor* _segmentsHighlightedTitleColor;
	UIView* _thumbnailView;
	CGSize _thumbnailViewSize;
	UIView* _accessoryView;
	BOOL _hasDismissButton;
	UIColor* _backgroundColor;
	UIColor* _separatorColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderFromConfig:(id)arg1 ;
+(id)builderForInstance:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setTitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setSegmentItems:(id)arg1 ;
-(id)setSegmentSelectedIndex:(long long)arg1 ;
-(id)setSubtitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setSegmentsTitleFont:(id)arg1 ;
-(id)setSegmentsTitleColor:(id)arg1 ;
-(id)setSegmentsHighlightedTitleFont:(id)arg1 ;
-(id)setSegmentsHighlightedTitleColor:(id)arg1 ;
-(id)setThumbnailViewSize:(CGSize)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)_init;
-(id)setSeparatorColor:(id)arg1 ;
-(id)setSubtitle:(id)arg1 ;
-(id)setTitleColor:(id)arg1 ;
-(id)setAccessoryView:(id)arg1 ;
-(id)setThumbnailView:(id)arg1 ;
-(id)build;
-(id)setSubtitleColor:(id)arg1 ;
-(id)setSubtitleFont:(id)arg1 ;
-(id)setTitleFont:(id)arg1 ;
-(id)setHasDismissButton:(BOOL)arg1 ;
@end
