/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUIConfigBuilder.h>

@class UIColor, UIFont, NSString;

@interface FBButtonConfigBuilder : NSObject <FBUIConfigBuilder> {

	unsigned long long _buttonStyle;
	unsigned long long _buttonGlyphName;
	double _buttonGlyphAlpha;
	unsigned long long _buttonSize;
	double _smallHorizontalInset;
	double _mediumHorizontalInset;
	double _largeHorizontalInset;
	UIColor* _regularTitleColor;
	UIColor* _regularBackgroundColor;
	UIColor* _regularBorderColor;
	unsigned long long _regularGlyphShading;
	UIColor* _primaryTitleColor;
	UIColor* _primaryBackgroundColor;
	UIColor* _primaryBorderColor;
	unsigned long long _primaryGlyphShading;
	UIColor* _specialTitleColor;
	UIColor* _specialBackgroundColor;
	UIColor* _specialBorderColor;
	unsigned long long _specialGlyphShading;
	UIColor* _promoTitleColor;
	UIColor* _promoBackgroundColor;
	UIColor* _promoBorderColor;
	unsigned long long _promoGlyphShading;
	UIColor* _bareTitleColor;
	UIColor* _bareBackgroundColor;
	UIColor* _bareBorderColor;
	unsigned long long _bareGlyphShading;
	double _borderRadius;
	double _borderWidth;
	unsigned long long _smallButtonGlyphSize;
	unsigned long long _mediumButtonGlyphSize;
	unsigned long long _largeButtonGlyphSize;
	double _smallSizeExtraWidth;
	double _mediumSizeExtraWidth;
	double _largeSizeExtraWidth;
	unsigned long long _smallButtonLabelStyle;
	unsigned long long _mediumButtonLabelStyle;
	unsigned long long _largeButtonLabelStyle;
	UIFont* _titleFontOverride;
	BOOL _titleFontSizeToFit;
	/*^block*/id _resourceLoader;
	/*^block*/id _titleLoader;
	BOOL _shouldLayoutImageRightToTitle;
	BOOL _shouldTitleColorOverrideGlyphColor;
	BOOL _shouldAdjustBackgroundWhenHighlighted;
	BOOL _shouldAdjustBackgroundWhenHovered;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForStyle:(unsigned long long)arg1 buttonSize:(unsigned long long)arg2 titleColor:(id)arg3 backgroundColor:(id)arg4 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderForInstance:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setButtonStyle:(unsigned long long)arg1 ;
-(id)setTitleLoader:(/*^block*/id)arg1 ;
-(id)setBareTitleColor:(id)arg1 ;
-(id)setTitleFontOverride:(id)arg1 ;
-(id)setBareGlyphShading:(unsigned long long)arg1 ;
-(id)setBorderRadius:(double)arg1 ;
-(id)setPrimaryBackgroundColor:(id)arg1 ;
-(id)setPrimaryGlyphShading:(unsigned long long)arg1 ;
-(id)setSpecialBackgroundColor:(id)arg1 ;
-(id)setSpecialGlyphShading:(unsigned long long)arg1 ;
-(id)setSmallButtonLabelStyle:(unsigned long long)arg1 ;
-(id)setPrimaryTitleColor:(id)arg1 ;
-(id)setPrimaryBorderColor:(id)arg1 ;
-(id)setShouldTitleColorOverrideGlyphColor:(BOOL)arg1 ;
-(id)setButtonGlyphName:(unsigned long long)arg1 ;
-(id)setRegularGlyphShading:(unsigned long long)arg1 ;
-(id)setSmallButtonGlyphSize:(unsigned long long)arg1 ;
-(id)setRegularTitleColor:(id)arg1 ;
-(id)setRegularBackgroundColor:(id)arg1 ;
-(id)setRegularBorderColor:(id)arg1 ;
-(id)setLargeSizeExtraWidth:(double)arg1 ;
-(id)setSmallSizeExtraWidth:(double)arg1 ;
-(id)setShouldLayoutImageRightToTitle:(BOOL)arg1 ;
-(id)setMediumButtonGlyphSize:(unsigned long long)arg1 ;
-(id)setPromoTitleColor:(id)arg1 ;
-(id)setPromoBackgroundColor:(id)arg1 ;
-(id)setMediumHorizontalInset:(double)arg1 ;
-(id)setSmallHorizontalInset:(double)arg1 ;
-(id)setSpecialTitleColor:(id)arg1 ;
-(id)setLargeHorizontalInset:(double)arg1 ;
-(id)setLargeButtonLabelStyle:(unsigned long long)arg1 ;
-(id)setButtonGlyphAlpha:(double)arg1 ;
-(id)setLargeButtonGlyphSize:(unsigned long long)arg1 ;
-(id)setTitleFontSizeToFit:(BOOL)arg1 ;
-(id)setMediumButtonLabelStyle:(unsigned long long)arg1 ;
-(id)setBareBorderColor:(id)arg1 ;
-(id)setBareBackgroundColor:(id)arg1 ;
-(id)setMediumSizeExtraWidth:(double)arg1 ;
-(id)setSpecialBorderColor:(id)arg1 ;
-(id)setPromoBorderColor:(id)arg1 ;
-(id)setPromoGlyphShading:(unsigned long long)arg1 ;
-(id)setShouldAdjustBackgroundWhenHighlighted:(BOOL)arg1 ;
-(id)setShouldAdjustBackgroundWhenHovered:(BOOL)arg1 ;
-(id)_init;
-(id)setBorderWidth:(double)arg1 ;
-(id)build;
-(id)setResourceLoader:(/*^block*/id)arg1 ;
-(id)setButtonSize:(unsigned long long)arg1 ;
@end
