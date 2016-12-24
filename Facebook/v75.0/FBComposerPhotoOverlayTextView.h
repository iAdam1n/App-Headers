/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerPhotoOverlayView.h>
#import <Facebook/FBComposerPhotoOverlayViewProtocol.h>

@class NSString, UIFont, UIColor, FBComposerTextOnPhoto;

@interface FBComposerPhotoOverlayTextView : FBComposerPhotoOverlayView <FBComposerPhotoOverlayViewProtocol> {

	double _fontSize;
	CGRect _originalBounds;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	FBComposerTextOnPhoto* _textOnPhoto;

}

@property (nonatomic,readonly) FBComposerTextOnPhoto * textOnPhoto;              //@synthesize textOnPhoto=_textOnPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)composerPhotoOverlayTextViewFromTextOnPhoto:(id)arg1 ;
-(void)setTransformUsingScale:(double)arg1 rotationAngle:(double)arg2 beginningTransform:(CGAffineTransform)arg3 ;
-(void)adjustForScale:(double)arg1 rotationAngle:(double)arg2 beginningTransform:(CGAffineTransform)arg3 ;
-(Class)photoOverlayAttachmentGestureHandlerClass;
-(id)initWithTextOnPhoto:(id)arg1 ;
-(CGSize)_sizeOfTextForWidth:(double)arg1 ;
-(void)adjustFontSize;
-(void)_recreateTextOnPhoto;
-(FBComposerTextOnPhoto *)textOnPhoto;
-(id)contentView;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityIdentifier;
-(void)setSelected:(BOOL)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
@end
