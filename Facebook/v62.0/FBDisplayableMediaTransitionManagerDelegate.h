/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDisplayableMediaTransitionManagerDelegate <NSObject>
@optional
-(void)transitionManager:(id)arg1 didDismissWithMediaViewProviderInfo:(id)arg2;
-(void)transitionManager:(id)arg1 willDismissWithMediaViewProviderInfo:(id)arg2;
-(void)transitionManager:(id)arg1 willPresentWithMediaViewProviderInfo:(id)arg2;
-(void)transitionManager:(id)arg1 didPresentWithMediaViewProviderInfo:(id)arg2;
-(CGRect*)transitionManager:(id)arg1 calculateDismissalFrameWithInfo:(id)arg2 inView:(id)arg3;
-(BOOL)displayableMediaTransitionManager:(id)arg1 shouldBeginDismissalWithGesture:(id)arg2 inDirection:(long long)arg3;

@required
-(void)transitionManagerNeedsDismissal:(id)arg1;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2;

@end

