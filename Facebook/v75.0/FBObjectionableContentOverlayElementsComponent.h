/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class CKComponent, FBRichTextComponent, FIGLabelButtonComponent;

@interface FBObjectionableContentOverlayElementsComponent : CKComponent {

	CKComponent* _imageComponent;
	FBRichTextComponent* _textComponent;
	FIGLabelButtonComponent* _buttonComponent;
	int _overlayStyle;

}
+(id)newWithImage:(id)arg1 message:(id)arg2 linkAction:(CKTypedComponentAction<>)arg3 buttonTitle:(id)arg4 buttonAction:(CKTypedComponentAction<>)arg5 overlayStyle:(int)arg6 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
@end
