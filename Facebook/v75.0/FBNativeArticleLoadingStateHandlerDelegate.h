/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNativeArticleLoadingStateHandlerDelegate <NSObject>
@required
-(void)loadingStateHandler:(id)arg1 setLoadingProgressVisible:(BOOL)arg2 animated:(BOOL)arg3;
-(void)loadingStateHandlerSetLoadingProgressComplete:(id)arg1;
-(void)loadingStateHandler:(id)arg1 setRetryViewVisible:(BOOL)arg2 animated:(BOOL)arg3;
-(void)loadingStateHandler:(id)arg1 setLoadingProgress:(double)arg2 animated:(BOOL)arg3;
-(void)loadingStateHandlerResetLoadingProgress:(id)arg1;

@end
