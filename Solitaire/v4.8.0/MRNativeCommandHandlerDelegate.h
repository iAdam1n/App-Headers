/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRNativeCommandHandlerDelegate <NSObject>
@required
-(id)viewControllerForPresentingModalView;
-(void)nativeCommandCompleted:(id)arg1;
-(void)nativeCommandFailed:(id)arg1 withMessage:(id)arg2;
-(BOOL)handlingWebviewRequests;
-(unsigned long long)adViewPlacementType;
-(BOOL)userInteractedWithWebView;
-(void)handleMRAIDUseCustomClose:(BOOL)arg1;
-(void)handleMRAIDSetOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg1;
-(void)handleMRAIDOpenCallForURL:(id)arg1;
-(void)handleMRAIDExpandWithParameters:(id)arg1;
-(void)handleMRAIDResizeWithParameters:(id)arg1;
-(void)handleMRAIDClose;
-(void)nativeCommandWillPresentModalView;
-(void)nativeCommandDidDismissModalView;

@end

