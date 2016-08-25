/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMMPAdapterDelegate;
@interface AMMPBaseAdapter : NSObject {

	id<AMMPAdapterDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<AMMPAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)getAd;
-(void)unregisterDelegate;
-(id)initWithAdapterDelegate:(id)arg1 ;
-(void)getAdWithParams:(id)arg1 ;
-(void)_getAdWithParams:(id)arg1 ;
-(void)dealloc;
-(id<AMMPAdapterDelegate>)delegate;
-(void)rotateToOrientation:(long long)arg1 ;
@end

