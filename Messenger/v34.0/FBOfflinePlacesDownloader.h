/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBLocationManagerSubscription;
@class FBReachabilityAnnouncer, FBQueuePerformer, FBUserSession, FBOfflinePlacesDatabaseRequest, FBOfflinePlacePickerDatabase;

@interface FBOfflinePlacesDownloader : NSObject {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	FBQueuePerformer* _queuePerformer;
	FBUserSession* _session;
	FBOfflinePlacesDatabaseRequest* _databaseRequest;
	id<FBLocationManagerSubscription> _locationManagerToken;
	FBOfflinePlacePickerDatabase* _databaseController;

}

@property (nonatomic,retain) FBUserSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBOfflinePlacesDatabaseRequest * databaseRequest;                    //@synthesize databaseRequest=_databaseRequest - In the implementation block
@property (nonatomic,retain) id<FBLocationManagerSubscription> locationManagerToken;              //@synthesize locationManagerToken=_locationManagerToken - In the implementation block
@property (nonatomic,retain) FBOfflinePlacePickerDatabase * databaseController;                   //@synthesize databaseController=_databaseController - In the implementation block
-(id)initWithSession:(id)arg1 databaseController:(id)arg2 ;
-(void)syncOfflinePlacesDatabase;
-(BOOL)_offlineControllerShouldCheckForUpdates;
-(void)_getDatabaseInformationWithLocation:(id)arg1 ;
-(void)_unregisterLocationManager;
-(void)setLocationManagerToken:(id<FBLocationManagerSubscription>)arg1 ;
-(id)_offlineDatabaseFromResponse:(id)arg1 request:(id)arg2 ;
-(BOOL)_offlineControllerShouldDownloadNewDBWithResponse:(id)arg1 ;
-(void)_downloadOfflinePlacesWithLocationData:(id)arg1 ;
-(void)setDatabaseRequest:(FBOfflinePlacesDatabaseRequest *)arg1 ;
-(FBOfflinePlacesDatabaseRequest *)databaseRequest;
-(id<FBLocationManagerSubscription>)locationManagerToken;
-(FBOfflinePlacePickerDatabase *)databaseController;
-(void)setDatabaseController:(FBOfflinePlacePickerDatabase *)arg1 ;
-(void)cancelDownloadRequest;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

