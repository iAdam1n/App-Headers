/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBUserSession, NSString;

@interface FBStoreLocatorNearbyLocationsFetcher : NSObject {

	FBUserSession* _session;
	NSString* _adID;
	NSString* _parentPageID;
	NSString* _pageSetID;

}
+(id)nearbyLocationsFetcherWithSession:(id)arg1 adID:(id)arg2 parentPageID:(id)arg3 pageSetID:(id)arg4 ;
-(id)fetchNearbyLocationsInside:(SCD_Struct_FB5)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 adID:(id)arg2 parentPageID:(id)arg3 pageSetID:(id)arg4 ;
-(id)queryForNearbyLocationsInside:(SCD_Struct_FB5)arg1 ;
-(id)parseNearbyLocationsResponse:(id)arg1 ;
@end

