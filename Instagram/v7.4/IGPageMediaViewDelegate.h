/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IGPageMediaViewDelegate <NSObject>
@optional
-(void)pageMediaView:(id)arg1 didScrollToPageIndex:(long long)arg2;
-(void)pageMediaViewDidTriggerEndOfScrollAction:(id)arg1;
-(void)pageMediaViewWillDisplayActionView:(id)arg1;
-(void)pageMediaViewDidScroll:(id)arg1;
-(void)pageMediaView:(id)arg1 itemDidAppear:(id)arg2;
-(void)pageMediaView:(id)arg1 itemDidDisappear:(id)arg2;
-(void)pageMediaView:(id)arg1 itemDidStartViewing:(id)arg2;

@required
-(void)pageMediaViewDidDoubleTap:(id)arg1;

@end
