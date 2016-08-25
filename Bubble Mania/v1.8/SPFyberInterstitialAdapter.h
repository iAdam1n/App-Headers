/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/SPSSInterstitialDelegate.h>
#import <BubbleMania/SPInterstitialNetworkAdapter.h>

@protocol SPInterstitialNetworkAdapterDelegate;
@class NSDictionary, SPFyberNetwork, NSString, SPSSInterstitialClient;

@interface SPFyberInterstitialAdapter : NSObject <SPSSInterstitialDelegate, SPInterstitialNetworkAdapter> {

	NSDictionary* offerData;
	SPFyberNetwork* _network;
	NSString* _contentHTML;
	SPSSInterstitialClient* _interstitialClient;
	id<SPInterstitialNetworkAdapterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) SPFyberNetwork * network;                                       //@synthesize network=_network - In the implementation block
@property (nonatomic,copy) NSString * contentHTML;                                                  //@synthesize contentHTML=_contentHTML - In the implementation block
@property (nonatomic,retain) SPSSInterstitialClient * interstitialClient;                           //@synthesize interstitialClient=_interstitialClient - In the implementation block
@property (assign,nonatomic,__weak) id<SPInterstitialNetworkAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * offerData; 
-(void)interstitialDidPresentScreen:(id)arg1 ;
-(void)interstitialDidDismissScreen:(id)arg1 ;
-(void)interstitialWillLeaveApplication:(id)arg1 ;
-(void)interstitial:(id)arg1 didFailToLoadAdWithError:(id)arg2 ;
-(BOOL)startAdapterWithDict:(id)arg1 ;
-(SPSSInterstitialClient *)interstitialClient;
-(void)showInterstitialFromViewController:(id)arg1 ;
-(void)setInterstitialClient:(SPSSInterstitialClient *)arg1 ;
-(NSDictionary *)offerData;
-(BOOL)canShowInterstitial;
-(void)setOfferData:(NSDictionary *)arg1 ;
-(NSString *)contentHTML;
-(void)setContentHTML:(NSString *)arg1 ;
-(id)networkName;
-(void)setDelegate:(id<SPInterstitialNetworkAdapterDelegate>)arg1 ;
-(id)init;
-(id<SPInterstitialNetworkAdapterDelegate>)delegate;
-(SPFyberNetwork *)network;
-(void)setNetwork:(SPFyberNetwork *)arg1 ;
@end

