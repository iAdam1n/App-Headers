/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBReactionCKUtilities : NSObject
+(id)updateReactionContext:(id)arg1 unsetRenderIdiom:(unsigned long long)arg2 ;
+(id)removeChild:(id)arg1 fromUnitComponent:(id)arg2 isParentPaginated:(BOOL)arg3 fromUnit:(id)arg4 ;
+(id)removeChildren:(id)arg1 fromUnitComponent:(id)arg2 isParentPaginated:(BOOL)arg3 fromUnit:(id)arg4 ;
+(id)updateReactionContext:(id)arg1 addRenderIdiom:(unsigned long long)arg2 ;
+(id)updateReactionContext:(id)arg1 addToUserInfoWithKey:(id)arg2 value:(id)arg3 ;
+(id)childOfUnitComponent:(id)arg1 inComponentTrace:(id)arg2 ;
+(id)appendComponentTraceInReactionContext:(id)arg1 withBrick:(id)arg2 ;
+(id)verticalDividerComponentWithInsets:(UIEdgeInsets)arg1 ;
+(id)horizontalDividerComponentWithInsets:(UIEdgeInsets)arg1 ;
+(id)buttonComponentForText:(id)arg1 selectedText:(id)arg2 selected:(BOOL)arg3 selector:(SEL)arg4 ;
+(id)buttonComponentForImage:(id)arg1 selectedImage:(id)arg2 imageSize:(CGSize)arg3 selected:(BOOL)arg4 selector:(SEL)arg5 ;
+(id)_removeChild:(id)arg1 fromUnitComponentPaginated:(id)arg2 fromUnit:(id)arg3 ;
+(id)_removeChild:(id)arg1 fromUnitComponentNonPaginated:(id)arg2 fromUnit:(id)arg3 ;
+(id)_removeChildren:(id)arg1 fromUnitComponentNonPaginated:(id)arg2 fromUnit:(id)arg3 ;
+(id)_removeChildren:(id)arg1 fromUnitComponentPaginated:(id)arg2 fromUnit:(id)arg3 ;
+(id)topAlignedButtonComponentForImage:(id)arg1 selectedImage:(id)arg2 imageSize:(CGSize)arg3 selector:(SEL)arg4 ;
+(id)wrapComponentWithShadowedBorders:(id)arg1 ;
@end
