/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OptimizelySwizzler : NSObject
+(BOOL)isSwizzled;
+(void)replaceImpInMethodWithSelector:(SEL)arg1 withImp:(/*function pointer*/void*)arg2 inClass:(Class)arg3 storeOriginal:(/*function pointer*/void**)arg4 ;
+(BOOL)helperUIViewControllerProcessViewEvent:(id)arg1 ;
+(BOOL)helperUIWindowProcessTouchEvent:(id)arg1 ;
+(BOOL)shouldSwizzleViewChanges:(id)arg1 ;
+(void)enableViewChanges;
+(BOOL)shouldSwizzleTapEvents:(id)arg1 ;
+(void)enableTapGoals;
+(void)replaceImpInMethodForClassSelector:(SEL)arg1 withImp:(/*function pointer*/void*)arg2 inClass:(Class)arg3 storeOriginal:(/*function pointer*/void**)arg4 ;
+(void)setSwizzleFlags:(id)arg1 ;
+(void)swizzle;
@end
