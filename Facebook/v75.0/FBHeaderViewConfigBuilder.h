/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBUIConfigBuilder.h>

@class UIImage, NSURL, FBImageDownloader, NSAttributedString, UIFont, UIColor, NSString;

@interface FBHeaderViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	UIImage* _image;
	NSURL* _imageURL;
	FBImageDownloader* _imageDownloader;
	CGSize _imageSize;
	NSAttributedString* _title;
	UIFont* _titleFallbackFont;
	UIColor* _titleFallbackColor;
	BOOL _titleUsesSingleLineMode;
	double _minimumHeight;
	UIEdgeInsets _insetsWithImage;
	UIOffset _offsetForTitleWithImage;
	UIEdgeInsets _insetsWithoutImage;
	UIOffset _offsetForTitleWithoutImage;
	UIImage* _accessoryImage;
	CGSize _accessoryImageSize;
	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setTitleFallbackFont:(id)arg1 ;
-(id)setTitleFallbackColor:(id)arg1 ;
-(id)setImageDownloader:(id)arg1 ;
-(id)setInsetsWithImage:(UIEdgeInsets)arg1 ;
-(id)setInsetsWithoutImage:(UIEdgeInsets)arg1 ;
-(id)setOffsetForTitleWithImage:(UIOffset)arg1 ;
-(id)setTitleUsesSingleLineMode:(BOOL)arg1 ;
-(id)setOffsetForTitleWithoutImage:(UIOffset)arg1 ;
-(id)setAccessoryImageSize:(CGSize)arg1 ;
-(id)setImage:(id)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)_init;
-(id)build;
-(id)setImageURL:(id)arg1 ;
-(id)setImageSize:(CGSize)arg1 ;
-(id)setMinimumHeight:(double)arg1 ;
-(id)setAccessoryImage:(id)arg1 ;
@end
