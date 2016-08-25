/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GADAdViewDelegate.h>

@class GADOpener, NSMutableArray, NSString;

@interface GADAdViewDelegate : NSObject <GADAdViewDelegate> {

	BOOL _hasLoadedAtLeastOnce;
	GADOpener* _opener;
	NSMutableArray* _gmsgHandlers;

}

@property (nonatomic,readonly) GADOpener * opener;                         //@synthesize opener=_opener - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedAtLeastOnce;                  //@synthesize hasLoadedAtLeastOnce=_hasLoadedAtLeastOnce - In the implementation block
@property (nonatomic,readonly) NSMutableArray * gmsgHandlers;              //@synthesize gmsgHandlers=_gmsgHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addGMSGHandler:(id)arg1 ;
-(GADOpener *)opener;
-(BOOL)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)adViewDidFinishLoad:(id)arg1 ;
-(void)adView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(NSMutableArray *)gmsgHandlers;
-(void)handleGMSGURL:(id)arg1 adView:(id)arg2 ;
-(void)handleDeeplinkPlusURL:(id)arg1 ;
-(void)adViewDidStartLoad:(id)arg1 ;
-(void)adView:(id)arg1 didMoveToPlacement:(id)arg2 ;
-(BOOL)hasLoadedAtLeastOnce;
-(void)dealloc;
-(id)init;
@end

