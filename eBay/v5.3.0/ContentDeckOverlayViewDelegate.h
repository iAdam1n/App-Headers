/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ContentDeckOverlayViewDelegate <NSObject>
@optional
-(void)contentDeckOverlayView:(id)arg1 didScrollToOffset:(CGPoint)arg2;
-(void)enableScrollingDuringPan:(BOOL)arg1;
-(BOOL)contentDeckOverlayViewShouldHideDeck:(id)arg1;
-(void)contentDeckOverlayViewWillSwipeToShow:(id)arg1;
-(void)contentDeckOverlayViewWillSwipeToHide:(id)arg1;

@required
-(void)contentDeckOverlayView:(id)arg1 wasHidden:(BOOL)arg2;

@end
