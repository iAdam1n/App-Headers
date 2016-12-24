/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/SASAdView.h>

@interface SASBannerView : SASAdView {

	long long _refreshInterval;

}

@property (assign,nonatomic) BOOL expandsFromTop; 
@property (assign,nonatomic) long long refreshInterval; 
-(id)initWithFrame:(CGRect)arg1 loader:(long long)arg2 ;
-(void)loadFormatId:(long long)arg1 pageId:(id)arg2 master:(BOOL)arg3 target:(id)arg4 timeout:(float)arg5 ;
-(void)loadFormatId:(long long)arg1 pageId:(id)arg2 master:(BOOL)arg3 target:(id)arg4 ;
-(void)configureBanner:(id)arg1 ;
-(void)bannerDisplayIsPermanent:(BOOL)arg1 ;
-(double)optimalAdViewHeightForContainer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)refresh;
-(long long)refreshInterval;
-(void)setRefreshInterval:(long long)arg1 ;
@end
