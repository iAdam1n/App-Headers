/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OASInstallManager, OASNanoInstallManager, OASNetworkManager, NSCache;

@interface OASAppDetailsCache : NSObject {

	OASInstallManager* _installManager;
	OASNanoInstallManager* _nanoInstallManager;
	OASNetworkManager* _networkManager;
	NSCache* _cache;

}

@property (nonatomic,readonly) OASInstallManager * installManager;                      //@synthesize installManager=_installManager - In the implementation block
@property (nonatomic,readonly) OASNanoInstallManager * nanoInstallManager;              //@synthesize nanoInstallManager=_nanoInstallManager - In the implementation block
@property (nonatomic,readonly) OASNetworkManager * networkManager;                      //@synthesize networkManager=_networkManager - In the implementation block
@property (nonatomic,retain) NSCache * cache;                                           //@synthesize cache=_cache - In the implementation block
-(OASNetworkManager *)networkManager;
-(id)initWithInstallManager:(id)arg1 nanoInstallManager:(id)arg2 networkManager:(id)arg3 ;
-(void)getAppDetailsWithID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getAppDetailsWithID:(id)arg1 lastModifiedDate:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(OASInstallManager *)installManager;
-(OASNanoInstallManager *)nanoInstallManager;
-(id)init;
-(void)dealloc;
-(NSCache *)cache;
-(void)setCache:(NSCache *)arg1 ;
-(void)_clearCache;
@end
