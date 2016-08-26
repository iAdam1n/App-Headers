/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdListConfig.h>

@class ECCategoryConfig, ECLocationAppConfig;

@interface ECSearchAdsConfig : ECAdListConfig {

	BOOL _sendRootCategoryIDInAdListRequest;
	BOOL _fetchFullHTMLDescription;
	BOOL _apiSupportsUserProfile;
	BOOL _supportsTopAds;
	BOOL _enableExtendedSearch;
	ECCategoryConfig* _categoryConfig;
	ECLocationAppConfig* _locationConfig;
	unsigned long long _extendedSearchDistance;

}

@property (nonatomic,readonly) ECCategoryConfig * categoryConfig;                      //@synthesize categoryConfig=_categoryConfig - In the implementation block
@property (nonatomic,readonly) ECLocationAppConfig * locationConfig;                   //@synthesize locationConfig=_locationConfig - In the implementation block
@property (nonatomic,readonly) BOOL sendRootCategoryIDInAdListRequest;                 //@synthesize sendRootCategoryIDInAdListRequest=_sendRootCategoryIDInAdListRequest - In the implementation block
@property (nonatomic,readonly) BOOL fetchFullHTMLDescription;                          //@synthesize fetchFullHTMLDescription=_fetchFullHTMLDescription - In the implementation block
@property (nonatomic,readonly) BOOL apiSupportsUserProfile;                            //@synthesize apiSupportsUserProfile=_apiSupportsUserProfile - In the implementation block
@property (nonatomic,readonly) BOOL supportsTopAds;                                    //@synthesize supportsTopAds=_supportsTopAds - In the implementation block
@property (nonatomic,readonly) BOOL enableExtendedSearch;                              //@synthesize enableExtendedSearch=_enableExtendedSearch - In the implementation block
@property (nonatomic,readonly) unsigned long long extendedSearchDistance;              //@synthesize extendedSearchDistance=_extendedSearchDistance - In the implementation block
-(ECLocationAppConfig *)locationConfig;
-(BOOL)apiSupportsUserProfile;
-(BOOL)supportsTopAds;
-(BOOL)enableExtendedSearch;
-(unsigned long long)extendedSearchDistance;
-(BOOL)fetchFullHTMLDescription;
-(BOOL)sendRootCategoryIDInAdListRequest;
-(ECCategoryConfig *)categoryConfig;
-(id)initWithAPIAdListParams:(id)arg1 pageSize:(unsigned long long)arg2 sendRootCategoryIDInAdListRequest:(BOOL)arg3 categoryConfig:(id)arg4 locationConfig:(id)arg5 fetchFullHTMLDescription:(BOOL)arg6 apiSupportsUserProfile:(BOOL)arg7 supportsTopAds:(BOOL)arg8 enableExtendedSearch:(BOOL)arg9 extendedSearchDistance:(unsigned long long)arg10 ;
@end
