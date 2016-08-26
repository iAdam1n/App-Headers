/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRApp, NSMutableArray;

@interface CRNetStatDispatch : NSObject {

	CRApp* _app;
	NSMutableArray* _blacklistFilters;
	NSMutableArray* _otherFilters;
	NSMutableArray* _observers;

}

@property (retain) NSMutableArray * blacklistFilters;                 //@synthesize blacklistFilters=_blacklistFilters - In the implementation block
@property (retain) NSMutableArray * otherFilters;                     //@synthesize otherFilters=_otherFilters - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CRApp * app;                             //@synthesize app=_app - In the implementation block
-(id)initWithFilters:(id)arg1 andApp:(id)arg2 ;
-(NSMutableArray *)blacklistFilters;
-(void)setBlacklistFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)otherFilters;
-(void)setOtherFilters:(NSMutableArray *)arg1 ;
-(void)logNetworkRequest:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(CRApp *)app;
-(void)setApp:(CRApp *)arg1 ;
-(void)addFilter:(id)arg1 ;
@end
