/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNRideServiceLiveMapFetcherDelegate <NSObject>
@required
-(void)MNRideServiceLiveMapFetcher:(id)arg1 didFailFetchingWithError:(id)arg2;
-(void)MNRideServiceLiveMapFetcher:(id)arg1 didFinishFetchingWithRideStatus:(long long)arg2 driverInformation:(id)arg3 sourceLocation:(id)arg4 destinationLocation:(id)arg5 driverEta:(id)arg6 driverLocation:(id)arg7;
-(void)MNRideServiceLiveMapFetcher:(id)arg1 didReceiveDriverLocationUpdate:(id)arg2 status:(long long)arg3 driverEta:(id)arg4;

@end
