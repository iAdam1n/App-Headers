/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBMegaphoneUIUtils : NSObject
+(double)heightForMegaphone:(id)arg1 size:(CGSize)arg2 session:(id)arg3 ;
+(id)viewForMegaphone:(id)arg1 target:(id)arg2 frame:(CGRect)arg3 session:(id)arg4 ;
+(id)friendIDsFromSocialContext:(id)arg1 ;
+(BOOL)needDismissButtonForMegaphone:(id)arg1 hasSecondaryButton:(BOOL)arg2 ;
+(Class)_viewClassForMegaphone:(id)arg1 ;
+(id)imageViewForURI:(id)arg1 withFrame:(CGRect)arg2 session:(id)arg3 ;
+(id)buttonWithTitle:(id)arg1 style:(int)arg2 ;
+(id)dismissButtonWithSearchNullStatePadStyle;
+(id)titleLabelWithText:(id)arg1 ;
+(id)titleLabelWithSearchNullStatePadStyleWithText:(id)arg1 ;
+(id)contentLabelFromAttributedString:(id)arg1 ;
+(id)contentLabelFromAttributedString:(id)arg1 withPrimaryActionLinkTitle:(id)arg2 withPrimaryActionLinkString:(id)arg3 ;
+(UIEdgeInsets)backgroundImageContentInsets;
+(CGSize)sizeThatFitsButton:(id)arg1 toSize:(CGSize)arg2 ;
+(void)setFacepileImageViewsToSocialContextView:(id)arg1 socialContext:(id)arg2 session:(id)arg3 ;
+(id)backgroundImageView;
+(id)dismissButton;
+(CGSize)maxImageSize;
@end
