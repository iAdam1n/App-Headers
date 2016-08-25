/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECUserAdService.h>
#import <Gumtree/ECDebugService.h>

@class NSArray, NSError, NSMutableArray, ECUserAdManager, NSString;

@interface ECDebugUserAdService : NSObject <ECUserAdService, ECDebugService> {

	BOOL _enabled;
	id _target;
	NSArray* _actions;
	NSError* _error;
	NSMutableArray* _items;
	ECUserAdManager* _realAdManager;
	unsigned long long _state;
	double _loadDelay;
	unsigned long long _maxItemCount;

}

@property (nonatomic,retain) NSArray * actions;                            //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                       //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) ECUserAdManager * realAdManager;              //@synthesize realAdManager=_realAdManager - In the implementation block
@property (assign,nonatomic) unsigned long long state;                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double loadDelay;                             //@synthesize loadDelay=_loadDelay - In the implementation block
@property (assign,nonatomic) unsigned long long maxItemCount;              //@synthesize maxItemCount=_maxItemCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) id target;                           //@synthesize target=_target - In the implementation block
-(id)adForID:(id)arg1 ;
-(id)pauseAd:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fetchAdsWithCurrentPage:(id)arg1 config:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)activateAd:(id)arg1 config:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)loadDetailsForAd:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)removeAd:(id)arg1 reasonID:(id)arg2 comment:(id)arg3 notifyBuyers:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)createAd;
-(void)setLoadDelay:(double)arg1 ;
-(ECUserAdManager *)realAdManager;
-(double)loadDelay;
-(id)mutateAd:(id)arg1 ;
-(void)updateForToken:(id)arg1 ;
-(void)nextCallShouldError:(id)arg1 ;
-(void)setRealAdManager:(ECUserAdManager *)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSArray *)actions;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(unsigned long long)maxItemCount;
-(void)setMaxItemCount:(unsigned long long)arg1 ;
@end

