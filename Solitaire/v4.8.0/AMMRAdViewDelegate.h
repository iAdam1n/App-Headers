/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMMRAdViewDelegate <AMAMraidBaseAdViewDelegate>
@optional
-(void)willResizeAd:(id)arg1 toFrame:(CGRect)arg2;
-(void)adViewDidClick:(id)arg1 onPrivateURL:(id)arg2;
-(void)adDidLoad:(id)arg1;
-(void)adDidFailToLoad:(id)arg1;
-(void)adWillClose:(id)arg1;
-(void)adDidClose:(id)arg1;
-(void)willExpandAd:(id)arg1 toFrame:(CGRect)arg2;
-(void)didExpandAd:(id)arg1 toFrame:(CGRect)arg2;
-(void)ad:(id)arg1 didRequestCustomCloseEnabled:(BOOL)arg2;
-(void)appShouldSuspendForAd:(id)arg1;
-(void)appShouldResumeFromAd:(id)arg1;
-(void)adWillShow:(id)arg1;
-(void)adDidShow:(id)arg1;
-(void)adWillHide:(id)arg1;
-(void)adDidHide:(id)arg1;

@end
