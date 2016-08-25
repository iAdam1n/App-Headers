/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/TSBanner.h>
#import <SolitaireFree/SKMRAIDViewDelegate.h>
#import <SolitaireFree/SKMRAIDServiceDelegate.h>

@class SKMRAIDView, NSString;

@interface TSMRAIDBanner : TSBanner <SKMRAIDViewDelegate, SKMRAIDServiceDelegate> {

	SKMRAIDView* _mraidAdView;

}

@property (nonatomic,retain) SKMRAIDView * mraidAdView;              //@synthesize mraidAdView=_mraidAdView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mraidViewAdReady:(id)arg1 ;
-(void)mraidViewAdFailed:(id)arg1 ;
-(void)mraidViewWillExpand:(id)arg1 ;
-(void)mraidViewDidClose:(id)arg1 ;
-(void)mraidViewNavigate:(id)arg1 withURL:(id)arg2 ;
-(BOOL)mraidViewShouldResize:(id)arg1 toPosition:(CGRect)arg2 allowOffscreen:(BOOL)arg3 ;
-(void)mraidServiceCreateCalendarEventWithEventJSON:(id)arg1 ;
-(void)mraidServicePlayVideoWithUrlString:(id)arg1 ;
-(void)mraidServiceOpenBrowserWithUrlString:(id)arg1 ;
-(void)mraidServiceStorePictureWithUrlString:(id)arg1 ;
-(SKMRAIDView *)mraidAdView;
-(void)setMraidAdView:(SKMRAIDView *)arg1 ;
-(void)requestBannerWithSize:(CGSize)arg1 info:(id)arg2 ;
-(BOOL)shouldUseExtension;
@end

