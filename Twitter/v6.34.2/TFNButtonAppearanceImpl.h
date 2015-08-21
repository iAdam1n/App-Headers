/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNButtonAppearanceDelegate, TFNButtonImageProvider;
#import <Twitter/Twitter-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface TFNButtonAppearanceImpl : NSObject {

	NSDictionary* _defaultAppearanceKeys;
	NSMutableDictionary* _customAppearanceKeys;
	NSMutableDictionary* _cachedScales;
	NSMutableDictionary* _cachedStateData;
	double _typographyScaleFactor;
	CGSize* _customSize;
	id<TFNButtonAppearanceDelegate> _delegate;
	id<TFNButtonImageProvider> _imageProvider;
	NSMutableDictionary* _overridePresentations;

}

@property (assign,nonatomic) CGSize customSize; 
@property (assign,nonatomic,__weak) id<TFNButtonAppearanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TFNButtonImageProvider> imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * overridePresentations;                //@synthesize overridePresentations=_overridePresentations - In the implementation block
+(void)_localeDidChange;
+(id)allUIControlStateMasks;
+(unsigned long long)sanitizedState:(unsigned long long)arg1 ;
+(UIEdgeInsets)_flippedUIEdgeInsets:(UIEdgeInsets)arg1 ;
+(id)_fontSelectorNameToUIFont:(id)arg1 ;
+(BOOL)interfaceLanguageReadsRTL;
+(id)_createStateDataWithCustomSize:(const n{CGSize=dd}*)arg1 forKey:(id)arg2 inAppearance:(id)arg3 ;
+(void)_shouldDisplayTitle:(out BOOL*)arg1 shouldDisplayImage:(out BOOL*)arg2 forTitle:(id)arg3 attributedTitle:(id)arg4 imageSize:(CGSize)arg5 appearance:(id)arg6 appearanceKey:(id)arg7 ;
+(id)_stateDataForMaximumWidth:(double)arg1 title:(id)arg2 attributedTitle:(id)arg3 imageSize:(CGSize)arg4 shouldDisplayTitle:(BOOL)arg5 shouldDisplayImage:(BOOL)arg6 customSize:(const n{CGSize=dd}*)arg7 appearance:(id)arg8 appearanceKey:(id)arg9 ;
+(CGSize)_textSizeForAttributedTitle:(id)arg1 font:(id)arg2 maxCapHeight:(double*)arg3 ;
+(CGSize)_textSizeForTitle:(id)arg1 font:(id)arg2 ;
+(CGSize)_aspectRatioCorrectImageSizeForImageSize:(CGSize)arg1 maxHeight:(double)arg2 ;
+(id)_stateDataForMaximumWidth:(double)arg1 title:(id)arg2 attributedTitle:(id)arg3 imageSize:(CGSize)arg4 shouldDisplayTitle:(BOOL)arg5 shouldDisplayImage:(BOOL)arg6 customSize:(const n{CGSize=dd}*)arg7 appearance:(id)arg8 appearanceKey:(id)arg9 constraintPhase:(unsigned long long)arg10 ;
+(BOOL)_abbreviatedTitle:(inout id*)arg1 abbreviatedAttributedTitle:(inout id*)arg2 imageSize:(CGSize)arg3 shouldDisplayTitle:(inout BOOL*)arg4 shouldDisplayImage:(inout BOOL*)arg5 appearance:(id)arg6 appearanceKey:(id)arg7 ;
+(id)_stateDataForTitle:(id)arg1 attributedTitle:(id)arg2 imageSize:(CGSize)arg3 shouldDisplayTitle:(BOOL)arg4 shouldDisplayImage:(BOOL)arg5 customSize:(const n{CGSize=dd}*)arg6 appearance:(id)arg7 appearanceKey:(id)arg8 ;
+(id)_adjustStateData:(id)arg1 forMaximumWidth:(double)arg2 customSize:(const n{CGSize=dd}*)arg3 appearance:(id)arg4 appearanceKey:(id)arg5 ;
+(id)_measurementLabel;
+(void)initialize;
-(void)_fontSizeDidChange;
-(id)imageColorForKey:(id)arg1 ;
-(id)appearanceKeyForStateMask:(unsigned long long)arg1 ;
-(BOOL)titleIsPermittedForKey:(id)arg1 ;
-(BOOL)imageIsPermittedForKey:(id)arg1 ;
-(BOOL)titleRemovalIsPermittedForKey:(id)arg1 ;
-(BOOL)imageRemovalIsPermittedForKey:(id)arg1 ;
-(BOOL)imageAndTitleAreBothPermittedForKey:(id)arg1 ;
-(id)titleFontForKey:(id)arg1 ;
-(double)minimumWidthForKey:(id)arg1 ;
-(double)minimumHeightForKey:(id)arg1 ;
-(double)maximumWidthForKey:(id)arg1 ;
-(double)cornerRadiusForKey:(id)arg1 ;
-(UIEdgeInsets)contentEdgeInsetsForKey:(id)arg1 ;
-(UIEdgeInsets)titleEdgeInsetsForKey:(id)arg1 ;
-(UIEdgeInsets)imageEdgeInsetsForKey:(id)arg1 ;
-(double)imageToTitlePaddingForKey:(id)arg1 ;
-(double)imageHeightForKey:(id)arg1 ;
-(id)titleColorForKey:(id)arg1 ;
-(id)fillColorForKey:(id)arg1 ;
-(id)strokeColorForKey:(id)arg1 ;
-(double)strokeLineWidthForKey:(id)arg1 ;
-(double)opacityForKey:(id)arg1 ;
-(unsigned long long)imagePositionForKey:(id)arg1 ;
-(BOOL)imageFlipsHorizontallyForRTLLanguageDirectionForKey:(id)arg1 ;
-(double)minimumKerningForKey:(id)arg1 ;
-(double)minimumTitleScaleFactorForKey:(id)arg1 ;
-(long long)lineBreakModeForKey:(id)arg1 ;
-(id)titleForKey:(id)arg1 ;
-(id)attributedTitleForKey:(id)arg1 ;
-(id)abbreviatedTitleForKey:(id)arg1 ;
-(id)abbreviatedAttributedTitleForKey:(id)arg1 ;
-(BOOL)tintColorIsAppliedToImageForKey:(id)arg1 ;
-(id)displayImageForKey:(id)arg1 ;
-(id)imageNameForKey:(id)arg1 ;
-(id)backgroundImageForKey:(id)arg1 ;
-(id)buttonStateDataForKey:(id)arg1 ;
-(double)typographyScaleFactor;
-(void)_updateImagesForCurrentLocale;
-(void)setBaseSize:(unsigned long long)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 presentation:(unsigned long long)arg4 ;
-(id)appearanceKeyByApplyingState:(unsigned long long)arg1 toKey:(id)arg2 ;
-(NSMutableDictionary *)overridePresentations;
-(id)_defaultStyleForAppearanceKey:(id)arg1 ;
-(id)_populatedStyleForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 withinPresentations:(id)arg3 ;
-(id)_populatedStyleForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 allowStateDegradation:(BOOL)arg3 ;
-(double)_scaledFloat:(double)arg1 appearanceKey:(id)arg2 propertyNameKey:(id)arg3 ;
-(BOOL)_getFloatValue:(out double*)arg1 forAppearanceKey:(id)arg2 propertyName:(unsigned long long)arg3 scaled:(BOOL)arg4 ;
-(BOOL)_getUIEdgeInsetsValue:(out UIEdgeInsets*)arg1 forAppearanceKey:(id)arg2 propertyName:(unsigned long long)arg3 ;
-(UIEdgeInsets)_scaledUIEdgeInsets:(UIEdgeInsets)arg1 propertyNameKey:(id)arg2 appearanceKey:(id)arg3 ;
-(BOOL)_getBoxedObjectValue:(out id*)arg1 forAppearanceKey:(id)arg2 propertyName:(unsigned long long)arg3 allowStateDegradation:(BOOL)arg4 ;
-(id)_colorValueForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 ;
-(id)_color:(id)arg1 adjustedViaMode:(unsigned long long)arg2 ;
-(id)_objectValueForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 ;
-(/*^block*/id)_scalingFunctionForPropertyNameKey:(id)arg1 appearanceKey:(id)arg2 ;
-(double)_scaleForKey:(id)arg1 ;
-(BOOL)_boolForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 ;
-(double)_floatValueForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 scaled:(BOOL)arg3 ;
-(UIEdgeInsets)_uiEdgeInsetsValueForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 scaled:(BOOL)arg3 ;
-(UIEdgeInsets)_paddingValueForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 scaled:(BOOL)arg3 ;
-(id)_tintedColorValueForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 ;
-(long long)_integerValueForAppearanceKey:(id)arg1 propertyName:(unsigned long long)arg2 ;
-(void)uncacheAllStateData;
-(id)_overrideStyleForAppearanceKey:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(BOOL)_setOverrideValue:(id)arg1 forPropertyName:(unsigned long long)arg2 appearanceKey:(id)arg3 ;
-(void)_itemsWereInvalidated:(unsigned long long)arg1 forAppearanceKeys:(id)arg2 ;
-(UIEdgeInsets)contentPaddingForKey:(id)arg1 ;
-(UIEdgeInsets)titlePaddingForKey:(id)arg1 ;
-(UIEdgeInsets)imagePaddingForKey:(id)arg1 ;
-(id)initWithBaseSize:(unsigned long long)arg1 strength:(unsigned long long)arg2 variant:(unsigned long long)arg3 presentation:(unsigned long long)arg4 ;
-(BOOL)hasCustomAppearanceKeyForStateMask:(unsigned long long)arg1 ;
-(id)_allAppearanceKeys;
-(UIEdgeInsets)touchInsetsForKey:(id)arg1 ;
-(id)tintColorForKey:(id)arg1 ;
-(BOOL)hasCustomSize;
-(CGSize)customSize;
-(void)setCustomSize:(CGSize)arg1 ;
-(void)unsetCustomSize;
-(BOOL)setOverrideTitleRemovalIsPermitted:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideImageRemovalIsPermitted:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideMinimumWidth:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideMinimumHeight:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideMaximumWidth:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideTouchInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideCornerRadius:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideContentEdgeInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideTitleEdgeInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideImageEdgeInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideImageToTitlePadding:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideImageHeight:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideTitleColor:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideImageColor:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideFillColor:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideStrokeColor:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideStrokeLineWidth:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideOpacity:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideImagePosition:(unsigned long long)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideMinimumKerning:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideMinimumTitleScaleFactor:(double)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideLineBreakMode:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideTypographyScaleFactor:(double)arg1 ;
-(BOOL)imageFlipsHorizontallyForKey:(id)arg1 ;
-(BOOL)setOverrideTitle:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideAttributedTitle:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideAbbreviatedTitle:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideAbbreviatedAttributedTitle:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideTintColorIsAppliedToImage:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideTintColor:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideImageFlipsHorizontallyForRTLLanguageDirection:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideImageName:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setOverrideBackgroundImage:(id)arg1 forKey:(id)arg2 ;
-(void)setOverrideValuesForKey:(id)arg1 usingValuesFromOtherAppearance:(id)arg2 otherAppearanceKey:(id)arg3 ;
-(void)removeAllOverridesForAppearanceKey:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TFNButtonAppearanceDelegate>)arg1 ;
-(id<TFNButtonAppearanceDelegate>)delegate;
-(id<TFNButtonImageProvider>)imageProvider;
-(void)setImageProvider:(id<TFNButtonImageProvider>)arg1 ;
@end

