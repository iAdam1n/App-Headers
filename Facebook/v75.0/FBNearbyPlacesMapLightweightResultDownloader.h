/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBNearbyPlacesMapLightweightResultDownloaderDelegate;
@class FBUserSession, FBNearbyPlacesPerfLogger, FBNearbyPlacesResultListModel;

@interface FBNearbyPlacesMapLightweightResultDownloader : NSObject {

	FBUserSession* _session;
	FBNearbyPlacesPerfLogger* _perfLogger;
	id<FBServiceTransactionMutating> _requestToken;
	id<FBNearbyPlacesMapLightweightResultDownloaderDelegate> _delegate;
	FBNearbyPlacesResultListModel* _listModel;

}

@property (assign,nonatomic,__weak) id<FBNearbyPlacesMapLightweightResultDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBNearbyPlacesResultListModel * listModel;                                             //@synthesize listModel=_listModel - In the implementation block
-(id)initWithSession:(id)arg1 perfLogger:(id)arg2 ;
-(void)setListModel:(FBNearbyPlacesResultListModel *)arg1 ;
-(void)requestPlaces:(long long)arg1 inRegion:(id)arg2 ;
-(void)_handleSuccessResponse:(id)arg1 status:(id)arg2 requestParameters:(id)arg3 ;
-(void)_handleFailure:(id)arg1 status:(id)arg2 ;
-(FBNearbyPlacesResultListModel *)listModel;
-(void)setDelegate:(id<FBNearbyPlacesMapLightweightResultDownloaderDelegate>)arg1 ;
-(id<FBNearbyPlacesMapLightweightResultDownloaderDelegate>)delegate;
-(void)cancelRequest;
@end
