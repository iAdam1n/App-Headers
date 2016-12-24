/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:47:05 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE1D7681-1F8E-4F70-B735-8E445CD8E257/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OASNetworkManager;

@interface OASDeviceManager : NSObject {

	OASNetworkManager* _networkManager;

}

@property (nonatomic,retain) OASNetworkManager * networkManager;              //@synthesize networkManager=_networkManager - In the implementation block
-(OASNetworkManager *)networkManager;
-(void)setNetworkManager:(OASNetworkManager *)arg1 ;
-(void)loadDevicesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeDevices:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
