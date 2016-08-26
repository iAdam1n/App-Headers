/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUIConfigBuilder.h>

@class NSAttributedString, UIFont, UIColor, NSString;

@interface FBFooterViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	NSAttributedString* _title;
	UIFont* _titleFallbackFont;
	UIColor* _titleFallbackColor;
	unsigned long long _glyphName;
	unsigned long long _glyphSize;
	UIColor* _glyphColor;
	double _height;
	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderFromConfig:(id)arg1 ;
+(id)builderForInstance:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setTitleFallbackColor:(id)arg1 ;
-(id)setTitleFallbackFont:(id)arg1 ;
-(id)setGlyphSize:(unsigned long long)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)_init;
-(id)setHeight:(double)arg1 ;
-(id)build;
-(id)setGlyphColor:(id)arg1 ;
-(id)setGlyphName:(unsigned long long)arg1 ;
@end
