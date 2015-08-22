/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComposerPhotoOverlayView.h>
#import <Messenger/FBComposerPhotoOverlayViewProtocol.h>

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
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)contentView;
-(void)setSelected:(BOOL)arg1 ;
@end
